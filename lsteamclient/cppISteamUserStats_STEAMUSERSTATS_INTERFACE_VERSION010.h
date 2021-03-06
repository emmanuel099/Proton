#ifdef __cplusplus
extern "C" {
#endif
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestCurrentStats(void *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat(void *, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetStat_2(void *, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat(void *, const char *, int32);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetStat_2(void *, const char *, float);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UpdateAvgRateStat(void *, const char *, float, double);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievement(void *, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_SetAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ClearAchievement(void *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAndUnlockTime(void *, const char *, bool *, uint32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_StoreStats(void *);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementIcon(void *, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementDisplayAttribute(void *, const char *, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_IndicateAchievementProgress(void *, const char *, uint32, uint32);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestUserStats(void *, CSteamID);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat(void *, CSteamID, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserStat_2(void *, CSteamID, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievement(void *, CSteamID, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetUserAchievementAndUnlockTime(void *, CSteamID, const char *, bool *, uint32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_ResetAllStats(void *, bool);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindOrCreateLeaderboard(void *, const char *, ELeaderboardSortMethod, ELeaderboardDisplayType);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_FindLeaderboard(void *, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardName(void *, SteamLeaderboard_t);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardEntryCount(void *, SteamLeaderboard_t);
extern ELeaderboardSortMethod cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardSortMethod(void *, SteamLeaderboard_t);
extern ELeaderboardDisplayType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetLeaderboardDisplayType(void *, SteamLeaderboard_t);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntries(void *, SteamLeaderboard_t, ELeaderboardDataRequest, int, int);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_DownloadLeaderboardEntriesForUsers(void *, SteamLeaderboard_t, CSteamID *, int);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetDownloadedLeaderboardEntry(void *, SteamLeaderboardEntries_t, int, LeaderboardEntry_t *, int32 *, int);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_UploadLeaderboardScore(void *, SteamLeaderboard_t, ELeaderboardUploadScoreMethod, int32, const int32 *, int);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_AttachLeaderboardUGC(void *, SteamLeaderboard_t, UGCHandle_t);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNumberOfCurrentPlayers(void *);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalAchievementPercentages(void *);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetMostAchievedAchievementInfo(void *, char *, uint32, float *, bool *);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetNextMostAchievedAchievementInfo(void *, int, char *, uint32, float *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetAchievementAchievedPercent(void *, const char *, float *);
extern SteamAPICall_t cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_RequestGlobalStats(void *, int);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat(void *, const char *, int64 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStat_2(void *, const char *, double *);
extern int32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory(void *, const char *, int64 *, uint32);
extern int32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION010_GetGlobalStatHistory_2(void *, const char *, double *, uint32);
#ifdef __cplusplus
}
#endif
