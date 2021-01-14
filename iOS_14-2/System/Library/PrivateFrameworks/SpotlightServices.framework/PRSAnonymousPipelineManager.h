/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/


@protocol OS_dispatch_source, OS_dispatch_queue, SFFeedbackListener;
#import <SpotlightServices/SpotlightServices-Structs.h>
@class NSUserDefaults, NSString, NSArray, NSObject;

@interface PRSAnonymousPipelineManager : NSObject {

	BOOL _isInternalDevice;
	BOOL _submissionEnabled;
	NSUserDefaults* _userDefaults;
	NSString* _lastTopHitQueryString;
	NSArray* _lastTopHitQueryItems;
	NSObject*<OS_dispatch_source> _topHitDataCollectionTimer;
	NSObject*<OS_dispatch_queue> _queue;
	id<SFFeedbackListener> _delegate;

}

@property (retain) NSUserDefaults * userDefaults;                                                  //@synthesize userDefaults=_userDefaults - In the implementation block
@property (assign) BOOL isInternalDevice;                                                          //@synthesize isInternalDevice=_isInternalDevice - In the implementation block
@property (nonatomic,retain) NSString * lastTopHitQueryString;                                     //@synthesize lastTopHitQueryString=_lastTopHitQueryString - In the implementation block
@property (nonatomic,retain) NSArray * lastTopHitQueryItems;                                       //@synthesize lastTopHitQueryItems=_lastTopHitQueryItems - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> topHitDataCollectionTimer;              //@synthesize topHitDataCollectionTimer=_topHitDataCollectionTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                   //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL submissionEnabled;                                               //@synthesize submissionEnabled=_submissionEnabled - In the implementation block
@property (nonatomic,retain) id<SFFeedbackListener> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
+(id)dateFormatter;
+(id)submittedLogsURL;
+(id)submitttedSpotlightReportsError:(id*)arg1 ;
+(id)candidateLogsURLForBundle:(id)arg1 ;
+(id)submittedLogsURLForUser:(id)arg1 ;
+(id)candidateLogsBasePath;
+(id)allowedBundles;
+(id)relativePositionKey;
+(id)engagementCountKeyForBundle:(id)arg1 ;
+(id)logURLForCurrentTimeAndBundle:(id)arg1 ;
+(id)dateFromFileURL:(id)arg1 ;
+(BOOL)_dataCollectionAllowedForBundle:(id)arg1 ;
-(void)queryWillFinishWithItems:(id)arg1 forClient:(id)arg2 forQuery:(id)arg3 anonymousDataCollectionAllowed:(BOOL)arg4 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)init;
-(id<SFFeedbackListener>)delegate;
-(void)setLastTopHitQueryItems:(NSArray *)arg1 ;
-(BOOL)isInternalDevice;
-(BOOL)dateIsExpired:(id)arg1 ;
-(void)setTopHitDataCollectionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_extractTrainingSamplesForQuery:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2 withItems:(id)arg3 withCEPData:(id)arg4 forClientBundle:(id)arg5 debugInfoEnabled:(BOOL)arg6 keyboardPrimaryLanguage:(id)arg7 ;
-(void)setSubmissionEnabled:(BOOL)arg1 ;
-(void)registerXPCActivity;
-(NSString *)lastTopHitQueryString;
-(void)setLastTopHitQueryString:(NSString *)arg1 ;
-(void)_increaseUserDefaultsEngagementCountForBundle:(id)arg1 ;
-(void)sendMLFeedbackActivity:(id)arg1 ;
-(id)_relativePositionForItem:(id)arg1 inItems:(id)arg2 withIndexOfEngagedItem:(long long)arg3 ;
-(void)userEngagedItemWithIdentifier:(id)arg1 forBundle:(id)arg2 forQuery:(id)arg3 ;
-(NSUserDefaults *)userDefaults;
-(BOOL)_shouldDataCollectWithEngagedBundle:(id)arg1 withQueryId:(id)arg2 forClientBundle:(id)arg3 ;
-(void)setDelegate:(id<SFFeedbackListener>)arg1 ;
-(void)sendCustomFeedback:(id)arg1 ;
-(void)_addRelativePositionToFeatureDict:(id)arg1 relativePosition:(id)arg2 forItem:(id)arg3 debugInfoEnabled:(BOOL)arg4 ;
-(void)_writeResult:(json_writerRef)arg1 item:(id)arg2 ;
-(NSArray *)lastTopHitQueryItems;
-(void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(BOOL)arg4 queryID:(id)arg5 withCEPData:(id)arg6 forClientBundle:(id)arg7 debugInfoEnabled:(BOOL)arg8 keyboardPrimaryLanguage:(id)arg9 ;
-(void)_addQueryInfoToJSONWriter:(json_writerRef)arg1 withQuery:(id)arg2 cepData:(id)arg3 forClient:(id)arg4 debugInfoAllowed:(BOOL)arg5 keyboardPrimaryLanguage:(id)arg6 ;
-(void)setFeedbackDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)cleanUp;
-(void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(BOOL)arg4 forClientBundle:(id)arg5 keyboardPrimaryLanguage:(id)arg6 ;
-(BOOL)submissionEnabled;
-(NSObject*<OS_dispatch_source>)topHitDataCollectionTimer;
-(void)deleteCandidateLogs;
-(id)retrieveFeedbackURLToSendInDirectory:(id)arg1 ;
-(void)setIsInternalDevice:(BOOL)arg1 ;
-(id)_abandonedItemsFromItems:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)deleteExpiredSubmittedLogs;
-(void)_updateUserDefaultsWithEngagedBundle:(id)arg1 andQueryID:(id)arg2 forClientBundle:(id)arg3 ;
@end

