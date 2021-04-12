/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSCoalescingQueue, NSDictionary;

@interface SSMetricsTimingDefaults : NSObject {

	BOOL _runningTests;
	SSCoalescingQueue* _updateQueue;
	NSDictionary* _cachedValues;

}

@property (nonatomic,retain) SSCoalescingQueue * updateQueue;                      //@synthesize updateQueue=_updateQueue - In the implementation block
@property (nonatomic,retain) NSDictionary * cachedValues;                          //@synthesize cachedValues=_cachedValues - In the implementation block
@property (assign,getter=isRunningTests,nonatomic) BOOL runningTests;              //@synthesize runningTests=_runningTests - In the implementation block
@property (readonly) NSDictionary * values; 
@property (readonly) double sessionDurationLoadURL; 
@property (readonly) double samplingPercentageUsersLoadURL; 
@property (readonly) double samplingPercentageCachedResponsesLoadURL; 
@property (readonly) double sessionDurationPageRender; 
@property (readonly) double samplingPercentageUsersPageRender; 
+(id)sharedInstance;
+(id)sharedInstanceWithSessionDelegate:(id)arg1 ;
-(NSDictionary *)values;
-(void)update;
-(SSCoalescingQueue *)updateQueue;
-(void)setRunningTests:(BOOL)arg1 ;
-(id)initWithSessionDelegate:(id)arg1 ;
-(NSDictionary *)cachedValues;
-(void)setCachedValues:(NSDictionary *)arg1 ;
-(BOOL)isRunningTests;
-(double)sessionDurationLoadURL;
-(double)samplingPercentageUsersLoadURL;
-(double)samplingPercentageCachedResponsesLoadURL;
-(double)sessionDurationPageRender;
-(double)samplingPercentageUsersPageRender;
-(void)setUpdateQueue:(SSCoalescingQueue *)arg1 ;
@end

