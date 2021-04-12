/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(void)setDisplay:(BKSHIDEventDisplay *)arg1 ;
-(id)_initWithObserver:(id)arg1 ;
-(id)init;
-(BKSHIDEventDeferringToken *)deferringToken;
-(NSString *)debugDescription;
-(NSString *)description;
-(void)removeObserver:(id)arg1 ;
-(void)setDeferringEnvironment:(BKSHIDEventDeferringEnvironment *)arg1 ;
-(void)setDeferringToken:(BKSHIDEventDeferringToken *)arg1 ;
-(BKSHIDEventDisplay *)display;
-(BOOL)_lock_canReceiveEvents;
-(void)deferringResolutionsChanged;
-(id)_lock_updateStateWithBlock:(/*^block*/id)arg1 ;
-(BOOL)canReceiveEvents;
-(BKSHIDEventDeferringEnvironment *)deferringEnvironment;
-(void)dealloc;
@end

