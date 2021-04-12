/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/


@protocol BKSMousePointerDeviceObserver;
@class NSSet;

@interface BKSMousePointerDeviceObserverInfo : NSObject {

	id<BKSMousePointerDeviceObserver> _observer;
	NSSet* _visibleDevices;

}

@property (nonatomic,retain) id<BKSMousePointerDeviceObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSSet * visibleDevices;                                  //@synthesize visibleDevices=_visibleDevices - In the implementation block
-(id<BKSMousePointerDeviceObserver>)observer;
-(void)setObserver:(id<BKSMousePointerDeviceObserver>)arg1 ;
-(NSSet *)visibleDevices;
-(void)setVisibleDevices:(NSSet *)arg1 ;
@end

