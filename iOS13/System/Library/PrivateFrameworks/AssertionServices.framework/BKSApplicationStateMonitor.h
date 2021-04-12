/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)handler;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(unsigned)applicationStateForApplication:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(unsigned)mostElevatedApplicationStateForPID:(int)arg1 ;
-(void)applicationInfoForApplication:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)bundleInfoValueForKey:(id)arg1 PID:(int)arg2 ;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 elevatedPriority:(BOOL)arg3 ;
-(id)initWithEndpoint:(id)arg1 bundleIDs:(id)arg2 states:(unsigned)arg3 elevatedPriority:(BOOL)arg4 ;
-(void)lock_updateConfiguration;
-(unsigned)interestedStates;
-(void)updateInterestedBundleIDs:(id)arg1 states:(unsigned)arg2 ;
-(NSArray *)interestedBundleIDs;
-(id)applicationInfoForApplication:(id)arg1 ;
-(id)applicationInfoForPID:(int)arg1 ;
-(id)_legacyInfoForProcess:(id)arg1 ;
-(unsigned)_legacyStateForProcess:(id)arg1 state:(id)arg2 ;
-(id)_legacyInfoForProcess:(id)arg1 state:(id)arg2 ;
-(BOOL)_clientSubscribedToThisStateChange:(id)arg1 state:(id)arg2 prevState:(id)arg3 ;
-(BOOL)_clientSubscribedToThisReasonChange:(id)arg1 ;
-(id)initWithBundleIDs:(id)arg1 states:(unsigned)arg2 isUserInteractive:(BOOL)arg3 ;
-(BOOL)elevatedPriority;
-(void)updateInterestedBundleIDs:(id)arg1 ;
-(void)updateInterestedStates:(unsigned)arg1 ;
-(void)updateInterestedAssertionReasons:(id)arg1 ;
-(void)applicationInfoForPID:(int)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isApplicationBeingDebugged:(id)arg1 ;
@end

