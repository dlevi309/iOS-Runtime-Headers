/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>

@class NSMutableDictionary, NSString;

@interface HDSPAssertionManager : NSObject <BSDescriptionProviding, HDSPDiagnosticsProvider> {

	os_unfair_lock_s _assertionsLock;
	NSMutableDictionary* _assertions;

}

@property (nonatomic,readonly) os_unfair_lock_s assertionsLock;              //@synthesize assertionsLock=_assertionsLock - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assertions;               //@synthesize assertions=_assertions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)assertionClassForType:(unsigned long long)arg1 ;
-(id)diagnosticInfo;
-(NSMutableDictionary *)assertions;
-(id)succinctDescription;
-(id)init;
-(void)_withLock:(/*^block*/id)arg1 ;
-(os_unfair_lock_s)assertionsLock;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)activeAssertionIdentifiersOfType:(unsigned long long)arg1 ;
-(void)takeAssertionWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
-(NSString *)description;
-(id)diagnosticDescription;
-(id)_assertionsOfType:(unsigned long long)arg1 ;
-(void)setAssertions:(NSMutableDictionary *)arg1 ;
-(void)takeAssertion:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)releaseAssertionWithIdentifier:(id)arg1 ;
-(void)takeAssertionWithIdentifier:(id)arg1 type:(unsigned long long)arg2 timeout:(double)arg3 ;
-(void)takeIndefiniteAssertionWithIdentifier:(id)arg1 type:(unsigned long long)arg2 ;
@end

