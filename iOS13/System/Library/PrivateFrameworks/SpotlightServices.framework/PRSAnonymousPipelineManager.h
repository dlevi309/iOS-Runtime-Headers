/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)submitttedSpotlightReportsError:(id*)arg1 ;
+(id)whitelistedBundles;
+(id)submittedLogsURL;
+(id)candidateLogsURLForBundle:(id)arg1 ;
+(id)submittedLogsURLForUser:(id)arg1 ;
+(id)candidateLogsBasePath;
+(id)relativePositionKey;
+(id)engagementCountKeyForBundle:(id)arg1 ;
+(id)logURLForCurrentTimeAndBundle:(id)arg1 ;
+(id)dateFromFileURL:(id)arg1 ;
+(BOOL)_dataCollectionAllowedForBundle:(id)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<SFFeedbackListener>)delegate;
-(void)setDelegate:(id<SFFeedbackListener>)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(void)cleanUp;
-(void)sendCustomFeedback:(id)arg1 ;
-(BOOL)isInternalDevice;
-(void)setFeedbackDelegate:(id)arg1 ;
-(void)registerXPCActivity;
-(void)setSubmissionEnabled:(BOOL)arg1 ;
-(void)setIsInternalDevice:(BOOL)arg1 ;
-(BOOL)submissionEnabled;
-(id)retrieveFeedbackURLToSendInDirectory:(id)arg1 ;
-(void)sendMLFeedbackActivity:(id)arg1 ;
-(void)_increaseUserDefaultsEngagementCountForBundle:(id)arg1 ;
-(BOOL)_shouldDataCollectWithEngagedBundle:(id)arg1 withQueryId:(id)arg2 forClientBundle:(id)arg3 ;
-(void)_extractTrainingSamplesForQuery:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2 withItems:(id)arg3 withCEPData:(id)arg4 forClientBundle:(id)arg5 debugInfoEnabled:(BOOL)arg6 keyboardPrimaryLanguage:(id)arg7 ;
-(void)_updateUserDefaultsWithEngagedBundle:(id)arg1 andQueryID:(id)arg2 forClientBundle:(id)arg3 ;
-(void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(BOOL)arg4 queryID:(id)arg5 withCEPData:(id)arg6 forClientBundle:(id)arg7 debugInfoEnabled:(BOOL)arg8 keyboardPrimaryLanguage:(id)arg9 ;
-(id)_abandonedItemsFromItems:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2 ;
-(void)_writeResult:(json_writerRef)arg1 item:(id)arg2 ;
-(id)_relativePositionForItem:(id)arg1 inItems:(id)arg2 withIndexOfEngagedItem:(long long)arg3 ;
-(void)_addQueryInfoToJSONWriter:(json_writerRef)arg1 withQuery:(id)arg2 cepData:(id)arg3 forClient:(id)arg4 debugInfoAllowed:(BOOL)arg5 keyboardPrimaryLanguage:(id)arg6 ;
-(BOOL)dateIsExpired:(id)arg1 ;
-(void)deleteCandidateLogs;
-(void)deleteExpiredSubmittedLogs;
-(void)setLastTopHitQueryString:(NSString *)arg1 ;
-(void)setLastTopHitQueryItems:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_source>)topHitDataCollectionTimer;
-(void)setTopHitDataCollectionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSString *)lastTopHitQueryString;
-(NSArray *)lastTopHitQueryItems;
-(void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(BOOL)arg4 forClientBundle:(id)arg5 keyboardPrimaryLanguage:(id)arg6 ;
-(void)_addRelativePositionToFeatureDict:(id)arg1 relativePosition:(id)arg2 forItem:(id)arg3 debugInfoEnabled:(BOOL)arg4 ;
-(void)queryWillFinishWithItems:(id)arg1 forClient:(id)arg2 forQuery:(id)arg3 anonymousDataCollectionAllowed:(BOOL)arg4 ;
-(void)userEngagedItemWithIdentifier:(id)arg1 forBundle:(id)arg2 forQuery:(id)arg3 ;
@end

