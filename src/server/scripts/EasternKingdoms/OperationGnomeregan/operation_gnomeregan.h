/*
 * Copyright (C) 2008-2011 TrinityCore <http://www.trinitycore.org/>
 * Copyright (C) 2011 gmlt.A
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
 
enum eSpells
{
    SPELL_MUSIC_START           = 75760,
    SPELL_MUSIC                 = 75765,
    SPELL_MUSIC_END             = 75767,

    SPELL_HEALTH_REGEN          = 74503,
    // SPELL_BRILLIANT_TACTICS  = 74719 or 74501 ? I'll check it later.

    SPELL_CANNON_SHIELD         = 74458,
};

enum eCreatures
{
///----------------Allies---------------
    NPC_MEKKATORQUE             = 39271,
    NPC_BATTLE_SUIT             = 39902,
    NPC_INFANTRY                = 39252,
    NPC_BOMBER                  = 39735,
    NPC_ELGIN                   = 40478,
    NPC_TANK                    = 39860,

///----------------Enemies---------------
    NPC_I_INFANTRY              = 39755,
    NPC_IRRADIATOR              = 39903,
    NPC_I_CAVALRY               = 39836,
    NPC_BRAG_BOT                = 39901,
    NPC_GASERIKK                = 39799,
    NPC_BOLTCOG                 = 39837,
    NPC_I_TROGG                 = 39826,
    NPC_I_TANK                  = 39819,
    NPC_CANNON                  = 39759, // Tankbuster Cannon
    NPC_RL                      = 39820, // Rocket Launcher
};

enum eMisc
{
    QUEST_OPERATION_GNOMEREGAN  = 25393,
    DATA_MOUNT                  = 31692,
};

enum eWorldstates
{
    WORLDSTATE_IN_PROCCESS                              = 4981,
    WORLDSTATE_RL_DESTROYED                             = 5027,
    WORLDSTATE_RL_DESTROYED_CTRL                        = 5040,
    WORLDSTATE_BATTLE_NEAR_WORKSHOPS                    = 5018,
    WORLDSTATE_AIRFIELD_ATTACKED                        = 5039,
    WORLDSTATE_AIRFIELD_CAPTURED                        = 5044,
    WORLDSTATE_CANNONS_DESTROYED                        = 5006,
    WORLDSTATE_CANNONS_DESTROYED_CTRL                   = 5018,
    WORLDSTATE_AIRFIELD_AND_COMMAND_CENTER_CAPTURED     = 5043,
    WORLDSTATE_BATTLE_NEAR_ENTRANCE                     = 5019,
    WORLDSTATE_SURFACE_CAPTURED                         = 5045,
    WORLDSTATE_BATLLE_IN_TUNNELS                        = 5021,
    WORLDSTATE_TUNNELS_CAPTURED                         = 5011,
    WORLDSTATE_COUNTDOWN                                = 5037,
    WORLDSTATE_COUNTDOWN_CTRL                           = 5038,
};

const Position RLSpawn[4] =
{
    {-5350.35f, 574.63f, 387.12f, 4.7f},
    {-5331.62f, 545.17f, 385.22f, 5.0f},
    {-5324.26f, 588.66f, 389.01f, 3.7f},
    {-5294.58f, 571.73f, 386.93f, 5.3f}
};

//#define SOUND_NAME            soundID (I don't have 3.3.5a client now. This info will be added later.) // Duration
#define MEK_1_1                 "Граждане и друзья Гномрегана!"
#define MEK_1_2                 "Сегодня мы отвоюем у подлого предателя Термоштепселя наш славный город!"
#define MEK_1_3                 "Встанем плечом к плечу в битве за родину!"
#define SOUND_MEK_1             17535 // 17150
#define MEK_2_1                 "Наш народ познал достаточно мук и унижений. Мы были изгоями, рабами, тянущими ярмо боевой машины бузмца!"
#define SOUND_MEK_2             17536 // 12200
#define MEK_3_1                 "Правлению Термоштепселя приходит конец!"
#define MEK_3_2                 "Объявляю общий сбор!"
#define SOUND_MEK_3             17537 // 7050
#define MEK_4_1                 "Военная тактика и научный прогресс, вкупе с нашей решимостью приведут нас к победе!"
#define MEK_4_2                 "Начинаем наступление!"
#define SOUND_MEK_4             17538 // 10180
#define MEK_5_1                 "Операция 'Гномреган' НАЧИНАЕТСЯ!"
#define MEK_5_2                 "Первый этап: захват аэродрома."
#define MEK_5_3                 "Уничтожтье ракетомёты врага, и мы получим превосходство в воздухе!"
#define SOUND_MEK_5             17539 // 13500
#define MEK_6_1                 "Цель в зоне видимости! Орудия к бою! Уничтожить ракетомёты противника!"
#define SOUND_MEK_6             17541 // 6730
#define MEK_7_1                 "Ха-ха, этот готов! Продолжаем наступление!"
#define SOUND_MEK_7             17542 // 4970
#define MEK_8_1                 "Ха-ха, ещё один разбит! Не ослабляйте натиск!"
#define SOUND_MEK_8             17543 // 6160
#define MEK_9_1                 "Отличная работа! Продолжайте в том же духе."
#define SOUND_MEK_9             17544 // 4140
#define MEK_10_1                "Аэродром взят, и небо над Гномреганом наше!"
#define MEK_10_2                "Теперь наши бомбисты могут уничтожить защищённые противотанковые пушки Термоштепселя."
#define MEK_10_3                "Второй этап операции: захват наземного командного поста!"
#define SOUND_MEK_10            17546 // 16970
#define MEK_11_1                "Наши бомбисты разрушили защиту противотанковых пушек! Уничтожьте их и обеспечьте безопасность наземного командного пункта!"
#define SOUND_MEK_11            17547 // 9740
#define MEK_12_1                "Наземная часть города захвачена. Операция 'Гномреган' проходит с эффективностью 93 процента... Всех хвалю!"
#define MEK_12_2                "Отключаю защитные радиационные насосы. Отряды, захватите оставшихся боевых роботов и продвигайтесь к главному входу!"
#define SOUND_MEK_12            17548 // 16660
#define MEK_13_1                "Мы стоим на пороге победы, друзья мои! Третий этап: проникнуть в туннели!"
#define MEK_13_2                "Как только захватим подземную железную дорогу и погрузочную платформу, мы сможем ворваться в самое сердце города!"
#define MEK_13_3                "Победа близка!"
#define SOUND_MEK_13            17549 // 17600
#define THERM_1_1               "НИКОГДА!!! Так... Оно включено? Эта кнопка? Раз-два, раз-два... О!"
#define THERM_1_2               "НИКОГДА!!! Гномреган МОЙ, Меггакрут!"
#define THERM_1_3               "Думаешь ты просто так войдёшь в МОЙ город?"
#define THERM_1_4               "Активировать систему однократной атомной защиты! ВЫПУСТИТЬ ТРОГГОВ!"
#define SOUND_THERM_1           17569 // 23190
#define MEK_14_1                "Ёлки-шестерёнки... Да тут, похоже, собрались все трогги города! Солдаты, окопаться!"
#define MEK_14_2                "Осколочные гранаты и заградительный огонь! ДЕРЖАТЬ СТРОЙ! Отступать нельзя!"
#define SOUND_MEK_14            17550 // 14230
#define MEK_15_1                "Тысяча сопливых титанят! Никогда не видел такого огромного трогга! Продолжать обстрел... уничтожить его!!!"
#define SOUND_MEK_15            17551 // 9560
#define MEK_16_1                "Слишком уж тихо. Где войска Термоштепселя?"
#define SOUND_MEK_16            17552 // 5520
#define MEK_17_1                "Что это? Похоже на ядерную бомбу, которая погубила Гномреган... Стоять! Враг идёт!"
#define SOUND_MEK_17            17553 // 9690
#define BOLTCOG_1               "Нашу защиту вам не преодолеть. МЫ истинные сыновья Гномрегана!"
#define SOUND_BOLTCOG_1         17665 // 6100
#define THERM_2_1               "Нет! Нет, нет, НЕТ! Я не позволю тебе войти в моё королевство, узурпатор!"
#define THERM_2_2               "Активировать систему атомной защиты!"
#define THERM_2_3               "ДЕЗИНТЕГРИРОВАТЬ ИХ ВСЕХ!"
#define SOUND_THERM_2           17570 // 14640
#define MEK_18_1                "ЭТО ЛОВУШКА! Здесь работает облучатель!"
#define SOUND_MEK_18            17554 // 3830
#define THERM_3_1               "Так и есть. И он в ДВАДЦАТЬ ШУТЬ РАЗ мощнее первого!"
#define THERM_3_2               "Так и есть. И он в ДВАДЦАТЬ ШУТЬ РАЗ мощнее первого! Меггакрут, ты ПРОИГРАЛ! Я победил тебя раньше чем ты успел вступить в мой прекрасный город."
#define THERM_3_3               "А теперь УМРИ!"
#define THERM_3_4               "О, хотел бы я увидеть лицо этого жулика. Клянусь он... Что? Всё ещё включено? ВЫКЛЮЧИ!!!"
#define SOUND_THERM_3           17571 // 22980
#define IRRADIATOR_1_1          "Облучатель 3000 активирован. Внимание. Чрезвычайная ситуация. У вас осталось 10 минут для того, чтобы оказаться на минимальном безопасном расстоянии."
#define SOUND_IRRADIATOR_1      17635 // 10830
#define MEK_19_1                "Десять минут? Мы сто раз обезвредим устройство."
#define MEK_19_2                "Хинклс, протяни-ка трещащий бронзовый механизм и добавь свежей воды! Шестерёнок, швырни мне грязное одеяние трогга и дай горсть медных винтов..."
#define SOUND_MEK_19            17556 // 14930
#define THERM_4_1               "ДЕСЯТЬ МИНУТ?! Ты оставил заводские настройки? Идиот, быстро отдай регулятор!"
#define SOUND_THERM_4           17572 // 9970
#define IRRADIATOR_2_1          "'ПИ-ИП' Внимание. Чрезвычайная ситуация. У вас осталось 10 секунд для того, чтобы оказаться на минимальном безопасном расстоянии."
#define SOUND_IRRADIATOR_2      17635 // 7670
#define MEK_20_1                "Надо убираться отсюда! Ла Форж, скорее телепортируй нас!"
#define SOUND_MEK_20            17557 // 4790
#define MEK_21_1                "Проклятье! Пришлось отступить. Но Термоштепсель проиграл, и он это знает... Он лишь получил небольшую отсрочку."
#define MEK_21_2                "Мы завладели поверхностью, а когда уровень радиации снизится, вернёмся с вдвое большей армией и отвоюем Гномреган!"
#define SOUND_MEK_21            17558 // 19280