/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTUsageTrackingSession.h>

@protocol AVTUsageTrackingSession
@required
-(void)end;
-(void)didOpenStickersAppFromRecents;
-(void)didTapStickerFromRecents:(id)arg1;
-(void)didCreateAvatar:(id)arg1;
-(void)didEditAvatar:(id)arg1;
-(void)didPeelOffStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;
-(void)didTapStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2;
-(void)didDuplicateAvatar:(id)arg1;
-(void)didDeleteAvatar:(id)arg1;
-(void)didResumeFaceTracking;
-(void)didPauseFaceTracking;
-(void)beginWithStore:(id)arg1;
-(void)didShowExpandedMode;
-(void)didEnterEditor;
-(void)didLeaveEditor;
-(void)didRecordVideo;
-(void)didSendVideoWithAvatar:(id)arg1 duration:(double)arg2;
-(void)didDiscardVideoWithDuration:(double)arg1;
-(void)didReplayVideo;
-(void)didSendImageWithAvatar:(id)arg1;
-(void)didSendStickerWithAvatar:(id)arg1;
-(void)didStartFaceTrackingInCarouselWithAvatar:(id)arg1;
-(void)didChangeCurrentAvatarInCarousel:(id)arg1;
-(void)didStopFaceTrackingInCarousel;
-(void)didChangeCurrentAvatarInStickers:(id)arg1;

@end


@protocol OS_dispatch_queue, AVTUILogger, AVTAggDClient, AVTDifferentialPrivacyRecorder, AVTAvatarConfigurationMetric, AVTAvatarStoreInternal;
@class NSObject, NSString, AVTAvatarConfiguration, AVTAvatarRecord, NSDate, AVTUsageTrackingRecordTimedEvent;

@interface AVTUsageTrackingSession : NSObject <AVTUsageTrackingSession> {

	BOOL _expandedMode;
	BOOL _recordedVideo;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<AVTUILogger> _logger;
	id<AVTAggDClient> _ntsAggDClient;
	NSString* _aggDKeyBasePrefix;
	id<AVTDifferentialPrivacyRecorder> _ntsDPRecorder;
	id<AVTAvatarConfigurationMetric> _metric;
	/*^block*/id _recordTransformer;
	AVTAvatarConfiguration* _defaultConfiguration;
	AVTAvatarRecord* _avatarRecord;
	/*^block*/id _timeProvider;
	NSDate* _editorEnterDate;
	AVTUsageTrackingRecordTimedEvent* _faceTrackingEvent;
	id<AVTAvatarStoreInternal> _avatarStore;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                          //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) id<AVTUILogger> logger;                                          //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) id<AVTAggDClient> ntsAggDClient;                                 //@synthesize ntsAggDClient=_ntsAggDClient - In the implementation block
@property (nonatomic,readonly) NSString * aggDKeyBasePrefix;                                    //@synthesize aggDKeyBasePrefix=_aggDKeyBasePrefix - In the implementation block
@property (nonatomic,readonly) id<AVTDifferentialPrivacyRecorder> ntsDPRecorder;                //@synthesize ntsDPRecorder=_ntsDPRecorder - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarConfigurationMetric> metric;                         //@synthesize metric=_metric - In the implementation block
@property (nonatomic,copy,readonly) id recordTransformer;                                       //@synthesize recordTransformer=_recordTransformer - In the implementation block
@property (nonatomic,readonly) AVTAvatarConfiguration * defaultConfiguration;                   //@synthesize defaultConfiguration=_defaultConfiguration - In the implementation block
@property (nonatomic,readonly) AVTAvatarRecord * avatarRecord;                                  //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (nonatomic,copy,readonly) id timeProvider;                                            //@synthesize timeProvider=_timeProvider - In the implementation block
@property (assign,nonatomic) BOOL expandedMode;                                                 //@synthesize expandedMode=_expandedMode - In the implementation block
@property (assign,nonatomic) BOOL recordedVideo;                                                //@synthesize recordedVideo=_recordedVideo - In the implementation block
@property (nonatomic,retain) NSDate * editorEnterDate;                                          //@synthesize editorEnterDate=_editorEnterDate - In the implementation block
@property (nonatomic,retain) AVTUsageTrackingRecordTimedEvent * faceTrackingEvent;              //@synthesize faceTrackingEvent=_faceTrackingEvent - In the implementation block
@property (nonatomic,retain) id<AVTAvatarStoreInternal> avatarStore;                            //@synthesize avatarStore=_avatarStore - In the implementation block
+(id)whitelistAppNameFromBundleID:(id)arg1 ;
+(id)dpKeyBasePrefix;
+(id)aggDKeyBasePrefixForBundleIdentifier:(id)arg1 ;
+(/*^block*/id)defaultTimeProvider;
+(id)makeKeyAggDCompliant:(id)arg1 ;
+(id)keyContentForAvatarRecord:(id)arg1 action:(id)arg2 includingPuppetName:(BOOL)arg3 avatarTypeAsSuffix:(BOOL)arg4 ;
+(void)getPresetDescription:(out id*)arg1 usedCategoriesDescription:(out id*)arg2 forAvatarConfiguration:(id)arg3 defaultConfiguration:(id)arg4 ;
+(id)makeDPKey:(id)arg1 ;
+(/*^block*/id)configurationDistanceClassifierWithMetric:(id)arg1 ;
+(/*^block*/id)likenessComparator;
+(/*^block*/id)defaultRecordTransformerForCoreModel:(id)arg1 ;
+(id)colorPresetDescriptionForAvatarConfiguration:(id)arg1 ;
-(void)end;
-(id<AVTUILogger>)logger;
-(id<AVTAvatarConfigurationMetric>)metric;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(AVTAvatarConfiguration *)defaultConfiguration;
-(id)timeProvider;
-(AVTAvatarRecord *)avatarRecord;
-(id<AVTAvatarStoreInternal>)avatarStore;
-(void)setAvatarStore:(id<AVTAvatarStoreInternal>)arg1 ;
-(id)recordTransformer;
-(void)didOpenStickersAppFromRecents;
-(void)didTapStickerFromRecents:(id)arg1 ;
-(void)didCreateAvatar:(id)arg1 ;
-(void)didEditAvatar:(id)arg1 ;
-(void)didPeelOffStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2 ;
-(void)didTapStickerFromStickersApp:(id)arg1 withAvatar:(id)arg2 ;
-(void)didDuplicateAvatar:(id)arg1 ;
-(void)didDeleteAvatar:(id)arg1 ;
-(id)initWithAggDClient:(id)arg1 dpRecorder:(id)arg2 serialQueueProvider:(/*^block*/id)arg3 recordTransformer:(/*^block*/id)arg4 avatarRecord:(id)arg5 defaultConfiguration:(id)arg6 timeProvider:(/*^block*/id)arg7 configurationMetric:(id)arg8 logger:(id)arg9 aggDKeyBasePrefix:(id)arg10 ;
-(id<AVTAggDClient>)ntsAggDClient;
-(id<AVTDifferentialPrivacyRecorder>)ntsDPRecorder;
-(NSString *)aggDKeyBasePrefix;
-(id)appendHostAppNameToKeyIfNeeded:(id)arg1 ;
-(id)makeAggDScalarKey:(id)arg1 ;
-(void)performClientWork:(/*^block*/id)arg1 ;
-(void)setRecordedVideo:(BOOL)arg1 ;
-(id)makeAggDDistributionKey:(id)arg1 ;
-(void)nts_reportAvatarDescription:(id)arg1 dpRecorder:(id)arg2 ;
-(void)didResumeFaceTracking;
-(void)reportAddOneForScalarKey:(id)arg1 ;
-(void)nts_reportAvatarLikenessClustersWithClient:(id)arg1 ;
-(void)nts_reportAvatarComplexity:(id)arg1 withClient:(id)arg2 ;
-(void)setExpandedMode:(BOOL)arg1 ;
-(void)didPauseFaceTracking;
-(void)setEditorEnterDate:(NSDate *)arg1 ;
-(NSDate *)editorEnterDate;
-(void)nts_reportEditorTimeWithExitTime:(id)arg1 client:(id)arg2 ;
-(void)setFaceTrackingEvent:(AVTUsageTrackingRecordTimedEvent *)arg1 ;
-(AVTUsageTrackingRecordTimedEvent *)faceTrackingEvent;
-(void)nts_reportFaceTrackingTimeWithEndTime:(id)arg1 client:(id)arg2 ;
-(BOOL)recordedVideo;
-(void)sentStickerFromStickersApp:(id)arg1 withAvatarRecord:(id)arg2 action:(id)arg3 ;
-(void)nts_reportAvatarCountWithClient:(id)arg1 ;
-(void)nts_reportExpandedModeWithClient:(id)arg1 ;
-(void)nts_loadDefaultConfigurationIfNeeded;
-(BOOL)expandedMode;
-(void)beginWithStore:(id)arg1 ;
-(void)didShowExpandedMode;
-(void)didEnterEditor;
-(void)didLeaveEditor;
-(void)didRecordVideo;
-(void)didSendVideoWithAvatar:(id)arg1 duration:(double)arg2 ;
-(void)didDiscardVideoWithDuration:(double)arg1 ;
-(void)didReplayVideo;
-(void)didSendImageWithAvatar:(id)arg1 ;
-(void)didSendStickerWithAvatar:(id)arg1 ;
-(void)didStartFaceTrackingInCarouselWithAvatar:(id)arg1 ;
-(void)didChangeCurrentAvatarInCarousel:(id)arg1 ;
-(void)didStopFaceTrackingInCarousel;
-(void)didChangeCurrentAvatarInStickers:(id)arg1 ;
-(id)initWithSerialQueueProvider:(/*^block*/id)arg1 recordTransformer:(/*^block*/id)arg2 logger:(id)arg3 ;
@end

