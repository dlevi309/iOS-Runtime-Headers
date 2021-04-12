/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSHashTable;

@interface HFTemperatureUnitCoordinator : NSObject {

	BOOL _isCelsius;
	NSHashTable* _observers;

}

@property (nonatomic,retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) BOOL isCelsius;                     //@synthesize isCelsius=_isCelsius - In the implementation block
+(id)sharedCoordinator;
-(id)init;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(BOOL)isCelsius;
-(void)_updateIsCelsiusNotifyingObservers:(BOOL)arg1 ;
-(void)_temperatureUnitDidChange;
-(void)setIsCelsius:(BOOL)arg1 ;
@end

