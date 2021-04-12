/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/RBEntitlementPossessing.h>

@class NSSet, NSString;

@interface RBEntitlements : NSObject <BSDescriptionProviding, RBEntitlementPossessing> {

	NSSet* _entitlements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)hasEntitlementDomain:(unsigned long long)arg1 ;
-(id)_entitlementsForOption:(unsigned long long)arg1 ;
-(id)_initWithEntitlements:(id)arg1 ;
-(id)_entitlementsForOptions:(unsigned long long)arg1 ;
@end

