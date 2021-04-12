/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface IMOrderingMetricCollector : NSObject {

	BOOL _needToSubmitMetric;
	NSObject*<OS_dispatch_queue> _orderingMetricQueue;
	unsigned long long _numberOfMessagesSeen;
	unsigned long long _numberOfMessagesPlacedOutOfOrder;
	unsigned long long _numberOfMessagesPlacedCorrectly;
	unsigned long long _numberOfHistoryQuerySeen;
	unsigned long long _numberOfHistoryQueryOutOfOrder;
	unsigned long long _numberOfHistoryQueryPlacedCorrectly;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> orderingMetricQueue;                  //@synthesize orderingMetricQueue=_orderingMetricQueue - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMessagesSeen;                             //@synthesize numberOfMessagesSeen=_numberOfMessagesSeen - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMessagesPlacedOutOfOrder;                 //@synthesize numberOfMessagesPlacedOutOfOrder=_numberOfMessagesPlacedOutOfOrder - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfMessagesPlacedCorrectly;                  //@synthesize numberOfMessagesPlacedCorrectly=_numberOfMessagesPlacedCorrectly - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfHistoryQuerySeen;                         //@synthesize numberOfHistoryQuerySeen=_numberOfHistoryQuerySeen - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfHistoryQueryOutOfOrder;                   //@synthesize numberOfHistoryQueryOutOfOrder=_numberOfHistoryQueryOutOfOrder - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfHistoryQueryPlacedCorrectly;              //@synthesize numberOfHistoryQueryPlacedCorrectly=_numberOfHistoryQueryPlacedCorrectly - In the implementation block
@property (assign,nonatomic) BOOL needToSubmitMetric;                                             //@synthesize needToSubmitMetric=_needToSubmitMetric - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_submitMetricIfNeeded;
-(BOOL)_metricIncomingMessage:(id)arg1 items:(id)arg2 withContext:(long long)arg3 ;
-(void)_metricHistoryQueryOrder:(id)arg1 ;
-(BOOL)needToSubmitMetric;
-(void)_submitMetric;
-(void)metricIncomingMessage:(id)arg1 items:(id)arg2 ;
-(void)metricHistoryQueryOrder:(id)arg1 ;
-(void)_persistMetric;
-(NSObject*<OS_dispatch_queue>)orderingMetricQueue;
-(unsigned long long)numberOfMessagesSeen;
-(void)setNumberOfMessagesSeen:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMessagesPlacedOutOfOrder;
-(void)setNumberOfMessagesPlacedOutOfOrder:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMessagesPlacedCorrectly;
-(void)setNumberOfMessagesPlacedCorrectly:(unsigned long long)arg1 ;
-(unsigned long long)numberOfHistoryQuerySeen;
-(void)setNumberOfHistoryQuerySeen:(unsigned long long)arg1 ;
-(unsigned long long)numberOfHistoryQueryOutOfOrder;
-(void)setNumberOfHistoryQueryOutOfOrder:(unsigned long long)arg1 ;
-(unsigned long long)numberOfHistoryQueryPlacedCorrectly;
-(void)setNumberOfHistoryQueryPlacedCorrectly:(unsigned long long)arg1 ;
-(void)setNeedToSubmitMetric:(BOOL)arg1 ;
@end

