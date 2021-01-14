/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_source, _HDDemoDataModuleDelegate;
@class NSOperationQueue, NSObject, NSDate;

@interface _HDDemoDataModule : NSObject {

	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_source> _timerSource;
	id<_HDDemoDataModuleDelegate> _delegate;
	NSDate* _lastFireDate;

}

@property (nonatomic,readonly) NSDate * lastFireDate;                                    //@synthesize lastFireDate=_lastFireDate - In the implementation block
@property (nonatomic,readonly) double nextFireInterval; 
@property (assign,nonatomic,__weak) id<_HDDemoDataModuleDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<_HDDemoDataModuleDelegate>)delegate;
-(void)start;
-(double)nextFireInterval;
-(id)initWithOperationQueue:(id)arg1 ;
-(void)stop;
-(void)setDelegate:(id<_HDDemoDataModuleDelegate>)arg1 ;
-(NSDate *)lastFireDate;
-(void)scheduleNextFire;
-(void)scheduleNextFireWithInterval:(double)arg1 ;
-(void)timerDidFireWithInterval:(double)arg1 ;
-(void)handleDataObject:(id)arg1 ;
@end

