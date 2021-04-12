/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSNumber;

@interface CKScheduler : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSMutableDictionary* _xpcActivitiesByCKActivityIdentifier;
	NSMutableDictionary* _handlersByCKActivityIdentifier;
	NSNumber* _fakeDeviceCount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;                             //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * xpcActivitiesByCKActivityIdentifier;              //@synthesize xpcActivitiesByCKActivityIdentifier=_xpcActivitiesByCKActivityIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlersByCKActivityIdentifier;                   //@synthesize handlersByCKActivityIdentifier=_handlersByCKActivityIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * fakeDeviceCount;                                               //@synthesize fakeDeviceCount=_fakeDeviceCount - In the implementation block
+(id)sharedScheduler;
+(BOOL)shouldReportAnalyticsForActivity:(id)arg1 ;
+(id)baseCoreAnalyticsEventPayloadForActivity:(id)arg1 ;
+(id)xpcActivityIdentifierForCKActivityIdentifier:(id)arg1 ;
+(id)activityFromXPCActivity:(id)arg1 ;
+(const char*)xpcActivityPriorityForPriority:(long long)arg1 deviceCount:(long long)arg2 ;
+(double)gracePeriodForPriority:(long long)arg1 deviceCount:(long long)arg2 ;
+(BOOL)shouldReportAnalyticsForContainerIdentifier:(id)arg1 ;
+(id)identifierWithImmediateInvocationForIdentifier:(id)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)submitActivity:(id)arg1 ;
-(void)registerActivityIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)unregisterActivityIdentifier:(id)arg1 ;
-(void)_submitActivity:(id)arg1 withCriteria:(id)arg2 ;
-(void)getSuggestedXPCActivityCriteriaForActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)handlersByCKActivityIdentifier;
-(NSMutableDictionary *)xpcActivitiesByCKActivityIdentifier;
-(void)registerXPCActivityWithCKActivityIdentifier:(id)arg1 criteria:(id)arg2 ;
-(void)runActivityWithIdentifier:(id)arg1 xpcActivity:(id)arg2 ;
-(void)populateCriteria:(id)arg1 withAdditionalCriteriaFromActivity:(id)arg2 ;
-(void)getDeviceCountForActivity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSNumber *)fakeDeviceCount;
-(id)xpcActivityForActivityWithIdentifier:(id)arg1 ;
-(BOOL)hasPendingActivityWithActivityIdentifier:(id)arg1 ;
-(id)activityForActivityIdentifier:(id)arg1 ;
-(long long)currentPriorityForActivityIdentifier:(id)arg1 ;
-(void)performAsyncOnQueue:(/*^block*/id)arg1 ;
-(void)setXpcActivitiesByCKActivityIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setHandlersByCKActivityIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setFakeDeviceCount:(NSNumber *)arg1 ;
@end

