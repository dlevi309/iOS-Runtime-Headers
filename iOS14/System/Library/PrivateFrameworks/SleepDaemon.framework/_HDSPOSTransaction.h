/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HDSPAssertion.h>

@protocol OS_os_transaction, OS_dispatch_source;
@class NSString, NSObject;

@interface _HDSPOSTransaction : NSObject <BSDescriptionProviding, HDSPAssertion> {

	os_unfair_lock_s _transactionLock;
	NSString* _identifier;
	unsigned long long _signpost_id;
	NSObject*<OS_os_transaction> _transaction;
	NSObject*<OS_dispatch_source> _timer;

}

@property (nonatomic,readonly) unsigned long long signpost_id;                        //@synthesize signpost_id=_signpost_id - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_transaction> transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s transactionLock;                      //@synthesize transactionLock=_transactionLock - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_source> timer;                   //@synthesize timer=_timer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
+(id)assertionWithIdentifier:(id)arg1 ;
+(id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(id)succinctDescription;
-(void)releaseAssertion;
-(NSObject*<OS_dispatch_source>)timer;
-(void)_withLock:(/*^block*/id)arg1 ;
-(NSObject*<OS_os_transaction>)transaction;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)signpost_id;
-(os_unfair_lock_s)transactionLock;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_locked_release;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)dealloc;
@end

