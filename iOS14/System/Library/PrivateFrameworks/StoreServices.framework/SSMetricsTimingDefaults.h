/*
* Generated on Thursday, January 14, 2021 at 2:22:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)samplingPercentageUsersPageRender;
-(NSDictionary *)cachedValues;
-(NSDictionary *)values;
-(SSCoalescingQueue *)updateQueue;
-(BOOL)isRunningTests;
-(void)update;
-(double)sessionDurationLoadURL;
-(double)samplingPercentageCachedResponsesLoadURL;
-(double)sessionDurationPageRender;
-(id)initWithSessionDelegate:(id)arg1 ;
-(double)samplingPercentageUsersLoadURL;
-(void)setCachedValues:(NSDictionary *)arg1 ;
-(void)setUpdateQueue:(SSCoalescingQueue *)arg1 ;
-(void)setRunningTests:(BOOL)arg1 ;
@end

