/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXMemoriesFeedSettings : PXSettings {

	BOOL _useSlowAnimations;
	BOOL _forceReloadAfterRefresh;
	BOOL _disableRoundedOverlays;
	BOOL _rankMemoriesByRelevanceScore;
	BOOL _displayContentDuringGraphRebuild;
	BOOL _alwaysShowOnboarding;
	long long _dataSourceType;
	long long _memoryGroupingMethod;
	double _memoryGroupingInterval;
	double _additionalContentThreshold;
	unsigned long long _groupsPerBatch;
	long long _favoriteMemoriesSortOrder;
	long long _sharingBehavior;

}

@property (assign,nonatomic) long long dataSourceType;                           //@synthesize dataSourceType=_dataSourceType - In the implementation block
@property (assign,nonatomic) BOOL useSlowAnimations;                             //@synthesize useSlowAnimations=_useSlowAnimations - In the implementation block
@property (assign,nonatomic) BOOL forceReloadAfterRefresh;                       //@synthesize forceReloadAfterRefresh=_forceReloadAfterRefresh - In the implementation block
@property (assign,nonatomic) BOOL disableRoundedOverlays;                        //@synthesize disableRoundedOverlays=_disableRoundedOverlays - In the implementation block
@property (assign,nonatomic) BOOL rankMemoriesByRelevanceScore;                  //@synthesize rankMemoriesByRelevanceScore=_rankMemoriesByRelevanceScore - In the implementation block
@property (assign,nonatomic) BOOL displayContentDuringGraphRebuild;              //@synthesize displayContentDuringGraphRebuild=_displayContentDuringGraphRebuild - In the implementation block
@property (assign,nonatomic) BOOL alwaysShowOnboarding;                          //@synthesize alwaysShowOnboarding=_alwaysShowOnboarding - In the implementation block
@property (assign,nonatomic) long long memoryGroupingMethod;                     //@synthesize memoryGroupingMethod=_memoryGroupingMethod - In the implementation block
@property (assign,nonatomic) double memoryGroupingInterval;                      //@synthesize memoryGroupingInterval=_memoryGroupingInterval - In the implementation block
@property (assign,nonatomic) double additionalContentThreshold;                  //@synthesize additionalContentThreshold=_additionalContentThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long groupsPerBatch;                  //@synthesize groupsPerBatch=_groupsPerBatch - In the implementation block
@property (assign,nonatomic) long long favoriteMemoriesSortOrder;                //@synthesize favoriteMemoriesSortOrder=_favoriteMemoriesSortOrder - In the implementation block
@property (assign,nonatomic) long long sharingBehavior;                          //@synthesize sharingBehavior=_sharingBehavior - In the implementation block
+(id)_resetRejectedMemories;
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(long long)dataSourceType;
-(void)setMemoryGroupingInterval:(double)arg1 ;
-(void)setAdditionalContentThreshold:(double)arg1 ;
-(BOOL)disableRoundedOverlays;
-(void)setDisableRoundedOverlays:(BOOL)arg1 ;
-(long long)_defaultDataSourceType;
-(BOOL)forceReloadAfterRefresh;
-(BOOL)displayContentDuringGraphRebuild;
-(long long)sharingBehavior;
-(double)memoryGroupingInterval;
-(void)setAlwaysShowOnboarding:(BOOL)arg1 ;
-(void)setSharingBehavior:(long long)arg1 ;
-(void)setMemoryGroupingMethod:(long long)arg1 ;
-(BOOL)rankMemoriesByRelevanceScore;
-(void)setForceReloadAfterRefresh:(BOOL)arg1 ;
-(long long)favoriteMemoriesSortOrder;
-(void)setRankMemoriesByRelevanceScore:(BOOL)arg1 ;
-(unsigned long long)groupsPerBatch;
-(void)setUseSlowAnimations:(BOOL)arg1 ;
-(void)setDisplayContentDuringGraphRebuild:(BOOL)arg1 ;
-(void)setFavoriteMemoriesSortOrder:(long long)arg1 ;
-(void)setDataSourceType:(long long)arg1 ;
-(void)setGroupsPerBatch:(unsigned long long)arg1 ;
-(BOOL)useSlowAnimations;
-(double)additionalContentThreshold;
-(long long)memoryGroupingMethod;
-(BOOL)alwaysShowOnboarding;
@end

