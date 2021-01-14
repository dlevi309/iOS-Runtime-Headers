/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, LSApplicationProxy, NSObject;

@interface FCNewsAvailabilityMonitor : NSObject {

	BOOL _NewsIsAvailable;
	NSMutableArray* _blocks;
	LSApplicationProxy* _applicationProxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * blocks;                                    //@synthesize blocks=_blocks - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;                      //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (getter=isNewsAvailable,nonatomic,readonly) BOOL NewsIsAvailable;              //@synthesize NewsIsAvailable=_NewsIsAvailable - In the implementation block
-(LSApplicationProxy *)applicationProxy;
-(id)initWithProcessVariant:(unsigned long long)arg1 queue:(id)arg2 ;
-(id)init;
-(void)addNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)_isNewsAvailable;
-(id)initWithApplicationProxy:(id)arg1 queue:(id)arg2 ;
-(id)initWithProcessVariant:(unsigned long long)arg1 ;
-(void)_updateAvailability;
-(NSMutableArray *)blocks;
-(void)setBlocks:(NSMutableArray *)arg1 ;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(BOOL)isNewsAvailable;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setNewsIsAvailable:(BOOL)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

