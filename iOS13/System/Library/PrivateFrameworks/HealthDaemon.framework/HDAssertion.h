/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_source;
#import <HealthDaemon/HealthDaemon-Structs.h>
@class HDAssertionManager, NSObject, NSUUID, NSString;

@interface HDAssertion : NSObject {

	HDAssertionManager* _manager;
	long long _state;
	NSObject*<OS_dispatch_source> _invalidationTimer;
	double _expirationDate;
	os_unfair_lock_s _lock;
	NSUUID* _UUID;
	NSString* _assertionIdentifier;
	NSString* _ownerIdentifier;
	double _timeout;

}

@property (readonly) long long rawState; 
@property (nonatomic,copy,readonly) NSUUID * UUID;                               //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * assertionIdentifier;              //@synthesize assertionIdentifier=_assertionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownerIdentifier;                  //@synthesize ownerIdentifier=_ownerIdentifier - In the implementation block
@property (readonly) long long state; 
@property (assign,nonatomic) double timeout;                                     //@synthesize timeout=_timeout - In the implementation block
@property (readonly) double remainingTime; 
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(long long)state;
-(NSUUID *)UUID;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(NSString *)ownerIdentifier;
-(double)remainingTime;
-(long long)rawState;
-(NSString *)assertionIdentifier;
-(id)initWithAssertionIdentifier:(id)arg1 ownerIdentifier:(id)arg2 ;
-(void)_invalidateAndRelease:(BOOL)arg1 ;
-(void)_invalidationTimerDidFire;
-(long long)_takeWithManager:(id)arg1 ;
@end

