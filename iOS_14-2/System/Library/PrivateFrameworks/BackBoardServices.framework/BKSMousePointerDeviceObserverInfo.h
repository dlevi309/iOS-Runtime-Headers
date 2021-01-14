/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setObserver:(id<BKSMousePointerDeviceObserver>)arg1 ;
-(NSSet *)visibleDevices;
-(id<BKSMousePointerDeviceObserver>)observer;
-(void)setVisibleDevices:(NSSet *)arg1 ;
@end

