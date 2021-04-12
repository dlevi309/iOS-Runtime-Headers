/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface SUAutoUpdatePasscodePolicy : NSObject {

	NSHashTable* _queue_observers;
	NSObject*<OS_dispatch_queue> _observerCalloutQueue;
	NSObject*<OS_dispatch_queue> _queue;
	int _stateChangedNotifyToken;
	unsigned long long _queue_currentPolicyType;

}

@property (nonatomic,readonly) unsigned long long currentPolicyType; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setCurrentPolicyType:(unsigned long long)arg1 ;
-(unsigned long long)currentPolicyType;
-(BOOL)_isValidPasscodePolicyType:(unsigned long long)arg1 ;
-(id)stringForCurrentPolicy;
@end

