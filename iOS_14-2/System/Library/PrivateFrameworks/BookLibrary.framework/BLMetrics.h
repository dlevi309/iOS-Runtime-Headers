/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class BLServiceProxy;

@interface BLMetrics : NSObject {

	BLServiceProxy* _serviceProxy;

}

@property (nonatomic,retain) BLServiceProxy * serviceProxy;              //@synthesize serviceProxy=_serviceProxy - In the implementation block
+(id)metrics;
+(void)flushInProcessWithCompletion:(/*^block*/id)arg1 ;
-(void)flush;
-(id)init;
-(void)enqueueEvents:(id)arg1 ;
-(void)setServiceProxy:(BLServiceProxy *)arg1 ;
-(BLServiceProxy *)serviceProxy;
@end

