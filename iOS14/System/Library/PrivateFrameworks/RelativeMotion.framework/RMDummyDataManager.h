/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelativeMotion.framework/RelativeMotion
*/


@protocol OS_dispatch_queue;
@class NSObject, RMConnectionClient;

@interface RMDummyDataManager : NSObject {

	BOOL _isReceivingRelatveData;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _relativeDataCallback;
	RMConnectionClient* _connectionClient;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL isReceivingRelatveData;                        //@synthesize isReceivingRelatveData=_isReceivingRelatveData - In the implementation block
@property (nonatomic,copy) id relativeDataCallback;                              //@synthesize relativeDataCallback=_relativeDataCallback - In the implementation block
@property (nonatomic,retain) RMConnectionClient * connectionClient;              //@synthesize connectionClient=_connectionClient - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)startReceivingDummyDataUpdates:(/*^block*/id)arg1 ;
-(void)stopReceivingDummyDataUpdates;
-(void)setConnectionClient:(RMConnectionClient *)arg1 ;
-(BOOL)isReceivingRelatveData;
-(RMConnectionClient *)connectionClient;
-(void)setRelativeDataCallback:(id)arg1 ;
-(id)dummyDataConfiguration;
-(id)relativeDataCallback;
-(void)setIsReceivingRelatveData:(BOOL)arg1 ;
@end

