/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXSettings.h>

@interface PXMemoriesRelatedSettings : PXSettings {

	BOOL _enableFeedbackUI;
	BOOL _enableFeedbackComboUI;
	BOOL _enableMemoriesLivingOnFeedback;
	BOOL _enableManualRefreshUI;
	BOOL _fakePeopleProximity;
	BOOL _recoverBlacklistedMemories;
	BOOL _showMemoryTitleLayer;
	BOOL _enableIPadWideHeader;
	double _refreshPhotoKitTimeout;
	double _widgetRefreshTimeInterval;
	long long _minimumNumberOfCuratedAssetsForInterestingMoments;
	long long _minimumNumberOfCuratedAssetsForMemories;
	long long _minimumNumberOfCuratedAssetsForMovieHeader;
	unsigned long long _deleteBehavior;
	long long _subtitleFontSize;
	unsigned long long _timelineSchedulerMode;

}

@property (assign,nonatomic) BOOL enableFeedbackUI;                                                    //@synthesize enableFeedbackUI=_enableFeedbackUI - In the implementation block
@property (assign,nonatomic) BOOL enableFeedbackComboUI;                                               //@synthesize enableFeedbackComboUI=_enableFeedbackComboUI - In the implementation block
@property (assign,nonatomic) BOOL enableMemoriesLivingOnFeedback;                                      //@synthesize enableMemoriesLivingOnFeedback=_enableMemoriesLivingOnFeedback - In the implementation block
@property (assign,nonatomic) BOOL enableManualRefreshUI;                                               //@synthesize enableManualRefreshUI=_enableManualRefreshUI - In the implementation block
@property (assign,nonatomic) BOOL fakePeopleProximity;                                                 //@synthesize fakePeopleProximity=_fakePeopleProximity - In the implementation block
@property (assign,nonatomic) double refreshPhotoKitTimeout;                                            //@synthesize refreshPhotoKitTimeout=_refreshPhotoKitTimeout - In the implementation block
@property (assign,nonatomic) double widgetRefreshTimeInterval;                                         //@synthesize widgetRefreshTimeInterval=_widgetRefreshTimeInterval - In the implementation block
@property (assign,nonatomic) long long minimumNumberOfCuratedAssetsForInterestingMoments;              //@synthesize minimumNumberOfCuratedAssetsForInterestingMoments=_minimumNumberOfCuratedAssetsForInterestingMoments - In the implementation block
@property (assign,nonatomic) long long minimumNumberOfCuratedAssetsForMemories;                        //@synthesize minimumNumberOfCuratedAssetsForMemories=_minimumNumberOfCuratedAssetsForMemories - In the implementation block
@property (assign,nonatomic) long long minimumNumberOfCuratedAssetsForMovieHeader;                     //@synthesize minimumNumberOfCuratedAssetsForMovieHeader=_minimumNumberOfCuratedAssetsForMovieHeader - In the implementation block
@property (assign,nonatomic) unsigned long long deleteBehavior;                                        //@synthesize deleteBehavior=_deleteBehavior - In the implementation block
@property (assign,nonatomic) BOOL recoverBlacklistedMemories;                                          //@synthesize recoverBlacklistedMemories=_recoverBlacklistedMemories - In the implementation block
@property (assign,nonatomic) BOOL showMemoryTitleLayer;                                                //@synthesize showMemoryTitleLayer=_showMemoryTitleLayer - In the implementation block
@property (assign,nonatomic) BOOL enableIPadWideHeader;                                                //@synthesize enableIPadWideHeader=_enableIPadWideHeader - In the implementation block
@property (assign,nonatomic) long long subtitleFontSize;                                               //@synthesize subtitleFontSize=_subtitleFontSize - In the implementation block
@property (assign,nonatomic) unsigned long long timelineSchedulerMode;                                 //@synthesize timelineSchedulerMode=_timelineSchedulerMode - In the implementation block
+(id)sharedInstance;
+(void)_presentAlertWithTitle:(id)arg1 andMessage:(id)arg2 inModuleController:(id)arg3 ;
+(void)_presentAlertForMemoriesGenerationResult:(id)arg1 error:(id)arg2 inModuleController:(id)arg3 ;
+(id)settingsControllerModule;
+(id)schedulerOptionsFromTimelineSchedulerMode:(unsigned long long)arg1 ;
+(void)_generateQuestionsWithOptions:(long long)arg1 count:(unsigned long long)arg2 inModuleController:(id)arg3 ;
-(id)parentSettings;
-(void)setDefaultValues;
-(void)performPostSaveActions;
-(long long)minimumNumberOfCuratedAssetsForInterestingMoments;
-(void)setMinimumNumberOfCuratedAssetsForMemories:(long long)arg1 ;
-(void)setMinimumNumberOfCuratedAssetsForMovieHeader:(long long)arg1 ;
-(BOOL)enableFeedbackComboUI;
-(void)setFakePeopleProximity:(BOOL)arg1 ;
-(void)setRefreshPhotoKitTimeout:(double)arg1 ;
-(double)widgetRefreshTimeInterval;
-(long long)subtitleFontSize;
-(void)setEnableMemoriesLivingOnFeedback:(BOOL)arg1 ;
-(void)setEnableManualRefreshUI:(BOOL)arg1 ;
-(void)setDeleteBehavior:(unsigned long long)arg1 ;
-(BOOL)enableIPadWideHeader;
-(void)setShowMemoryTitleLayer:(BOOL)arg1 ;
-(long long)minimumNumberOfCuratedAssetsForMemories;
-(BOOL)recoverBlacklistedMemories;
-(BOOL)fakePeopleProximity;
-(void)setEnableIPadWideHeader:(BOOL)arg1 ;
-(unsigned long long)timelineSchedulerMode;
-(BOOL)enableMemoriesLivingOnFeedback;
-(BOOL)enableManualRefreshUI;
-(BOOL)enableFeedbackUI;
-(void)setEnableFeedbackComboUI:(BOOL)arg1 ;
-(BOOL)showMemoryTitleLayer;
-(long long)minimumNumberOfCuratedAssetsForMovieHeader;
-(void)setTimelineSchedulerMode:(unsigned long long)arg1 ;
-(double)refreshPhotoKitTimeout;
-(void)setMinimumNumberOfCuratedAssetsForInterestingMoments:(long long)arg1 ;
-(void)setSubtitleFontSize:(long long)arg1 ;
-(void)setEnableFeedbackUI:(BOOL)arg1 ;
-(unsigned long long)deleteBehavior;
-(void)setRecoverBlacklistedMemories:(BOOL)arg1 ;
-(void)setWidgetRefreshTimeInterval:(double)arg1 ;
@end

