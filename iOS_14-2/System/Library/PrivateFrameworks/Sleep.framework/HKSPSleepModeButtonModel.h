/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
*/

#import <libobjc.A.dylib/HKSPSleepStorePrivateObserver.h>

@protocol HKSPSleepModeButtonModelDelegate;
@class HKSPSleepStore, _HKBehavior, NSString;

@interface HKSPSleepModeButtonModel : NSObject <HKSPSleepStorePrivateObserver> {

	id<HKSPSleepModeButtonModelDelegate> _delegate;
	HKSPSleepStore* _sleepStore;
	long long _sleepMode;
	_HKBehavior* _behavior;

}

@property (nonatomic,__weak,readonly) id<HKSPSleepModeButtonModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HKSPSleepStore * sleepStore;                                       //@synthesize sleepStore=_sleepStore - In the implementation block
@property (nonatomic,readonly) long long sleepMode;                                               //@synthesize sleepMode=_sleepMode - In the implementation block
@property (nonatomic,readonly) _HKBehavior * behavior;                                            //@synthesize behavior=_behavior - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKSPSleepStore *)sleepStore;
-(id<HKSPSleepModeButtonModelDelegate>)delegate;
-(_HKBehavior *)behavior;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(long long)sleepMode;
-(id)initWithDelegate:(id)arg1 ;
-(void)_checkSleepModeState;
-(id)initWithSleepStore:(id)arg1 delegate:(id)arg2 behavior:(id)arg3 ;
-(void)_updateStateWithSleepMode:(long long)arg1 ;
-(void)_queue_updateStateWithSleepMode:(long long)arg1 ;
-(void)_launchAppForOnboarding;
-(void)sleepStore:(id)arg1 sleepModeOnDidChange:(BOOL)arg2 ;
@end

