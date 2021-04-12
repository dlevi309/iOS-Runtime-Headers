/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BKSHIDEventDeferringObserving.h>

@protocol BSInvalidatable;
@class BKSHIDEventObserver, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment, BKSHIDEventDeferringToken, NSSet, NSHashTable, NSString;

@interface BKSHIDEventDeliveryPolicyObserver : NSObject <BKSHIDEventDeferringObserving> {

	BKSHIDEventObserver* _observer;
	id<BSInvalidatable> _observingAssertion;
	os_unfair_lock_s _lock;
	BKSHIDEventDisplay* _lock_display;
	BKSHIDEventDeferringEnvironment* _lock_environment;
	BKSHIDEventDeferringToken* _lock_token;
	NSSet* _lock_resolutions;
	BOOL _lock_canReceiveEvents;
	NSHashTable* _lock_observers;

}

@property (nonatomic,copy) BKSHIDEventDisplay * display; 
@property (nonatomic,copy) BKSHIDEventDeferringEnvironment * deferringEnvironment; 
@property (nonatomic,copy) BKSHIDEventDeferringToken * deferringToken; 
@property (nonatomic,readonly) BOOL canReceiveEvents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setDisplay:(BKSHIDEventDisplay *)arg1 ;
-(void)setDeferringEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(BOOL)canReceiveEvents;
-(void)setDeferringToken:(BKSHIDEventDeferringToken *)arg1 ;
-(BKSHIDEventDisplay *)display;
-(BKSHIDEventDeferringEnvironment *)deferringEnvironment;
-(BOOL)_lock_canReceiveEvents;
-(void)deferringResolutionsChanged;
-(id)_initWithObserver:(id)arg1 ;
-(BKSHIDEventDeferringToken *)deferringToken;
-(id)_lock_updateStateWithBlock:(/*^block*/id)arg1 ;
@end

