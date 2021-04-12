/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, LSApplicationProxy, NSObject;

@interface NSSNewsAvailabilityMonitor : NSObject {

	BOOL _NewsIsAvailable;
	NSMutableArray* _blocks;
	LSApplicationProxy* _applicationProxy;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSMutableArray * blocks;                                    //@synthesize blocks=_blocks - In the implementation block
@property (nonatomic,retain) LSApplicationProxy * applicationProxy;                      //@synthesize applicationProxy=_applicationProxy - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (getter=isNewsAvailable,nonatomic,readonly) BOOL NewsIsAvailable;              //@synthesize NewsIsAvailable=_NewsIsAvailable - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableArray *)blocks;
-(void)_updateAvailability;
-(LSApplicationProxy *)applicationProxy;
-(void)setApplicationProxy:(LSApplicationProxy *)arg1 ;
-(void)addNotificationBlock:(/*^block*/id)arg1 ;
-(id)initWithApplicationProxy:(id)arg1 queue:(id)arg2 ;
-(id)initWithProcessVariant:(unsigned long long)arg1 queue:(id)arg2 ;
-(BOOL)_isNewsAvailable;
-(id)initWithProcessVariant:(unsigned long long)arg1 ;
-(BOOL)isNewsAvailable;
-(void)setNewsIsAvailable:(BOOL)arg1 ;
-(void)setBlocks:(NSMutableArray *)arg1 ;
@end

