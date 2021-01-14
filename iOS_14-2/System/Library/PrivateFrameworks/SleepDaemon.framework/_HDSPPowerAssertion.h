/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HDSPAssertion.h>

@class NSString;

@interface _HDSPPowerAssertion : NSObject <BSDescriptionProviding, HDSPAssertion> {

	os_unfair_lock_s _assertionLock;
	unsigned _assertionID;
	NSString* _identifier;
	unsigned long long _signpost_id;

}

@property (nonatomic,readonly) unsigned long long signpost_id;              //@synthesize signpost_id=_signpost_id - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s assertionLock;              //@synthesize assertionLock=_assertionLock - In the implementation block
@property (nonatomic,readonly) unsigned assertionID;                        //@synthesize assertionID=_assertionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
+(id)assertionWithIdentifier:(id)arg1 ;
+(id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(id)succinctDescription;
-(void)releaseAssertion;
-(void)_withLock:(/*^block*/id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(unsigned)assertionID;
-(unsigned long long)signpost_id;
-(NSString *)identifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)_locked_release;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(os_unfair_lock_s)assertionLock;
-(void)dealloc;
@end

