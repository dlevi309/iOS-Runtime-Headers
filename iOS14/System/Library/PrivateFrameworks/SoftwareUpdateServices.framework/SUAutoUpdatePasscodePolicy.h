/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(id)_init;
-(void)dealloc;
-(void)setCurrentPolicyType:(unsigned long long)arg1 ;
-(unsigned long long)currentPolicyType;
-(BOOL)_isValidPasscodePolicyType:(unsigned long long)arg1 ;
-(id)stringForCurrentPolicy;
@end

