/*
* Generated on Thursday, January 14, 2021 at 2:23:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
*/


#import <AssertionServices/AssertionServices-Structs.h>
@class RBSProcessMonitor, NSArray;

@interface BKSApplicationStateMonitor : NSObject {

	os_unfair_lock_s _lock;
	RBSProcessMonitor* _monitor;
	NSArray* _interestedAssertionReasons;
	BOOL _elevatedPriority;
	unsigned _interestedStates;
	NSArray* _interestedBundleIDs;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                          //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned interestedStates;                       //@synthesize interestedStates=_interestedStates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * interestedBundleIDs;              //@synthesize interestedBundleIDs=_interestedBundleIDs - In the implementation block
@property (nonatomic,readonly) BOOL elevatedPriority;                           //@synthesize elevatedPriority=_elevatedPriority - In the implementation block
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 elevatedPriority:(BOOL)arg3 ;
-(unsigned)mostElevatedApplicationStateForPID:(int)arg1 ;
-(void)applicationInfoForPID:(int)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(void)setHandler:(id)arg1 ;
-(unsigned)_legacyStateForProcess:(id)arg1 state:(id)arg2 ;
-(void)updateInterestedAssertionReasons:(id)arg1 ;
-(void)lock_updateConfiguration;
-(id)applicationInfoForApplication:(id)arg1 ;
-(void)updateInterestedBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(void)applicationInfoForApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_clientSubscribedToThisReasonChange:(id)arg1 ;
-(unsigned)applicationStateForApplication:(id)arg1 ;
-(BOOL)elevatedPriority;
-(id)_legacyInfoForProcess:(id)arg1 ;
-(id)_legacyInfoForProcess:(id)arg1 state:(id)arg2 ;
-(void)updateInterestedBundleIDs:(id)arg1 ;
-(BOOL)_clientSubscribedToThisStateChange:(id)arg1 state:(id)arg2 prevState:(id)arg3 ;
-(BOOL)isApplicationBeingDebugged:(id)arg1 ;
-(id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2 ;
-(void)invalidate;
-(NSArray *)interestedBundleIDs;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 isUserInteractive:(BOOL)arg3 ;
-(id)applicationInfoForPID:(int)arg1 ;
-(id)handler;
-(unsigned)interestedStates;
-(id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned)arg3 elevatedPriority:(BOOL)arg4 ;
-(void)updateInterestedStates:(unsigned)arg1 ;
-(void)dealloc;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 ;
@end

