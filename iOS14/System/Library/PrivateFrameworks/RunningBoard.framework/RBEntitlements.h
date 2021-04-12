/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
*/

#import <libobjc.A.dylib/RBEntitlementPossessing.h>

@class NSSet, NSString;

@interface RBEntitlements : NSObject <RBEntitlementPossessing> {

	NSSet* _entitlements;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)_initWithEntitlements:(id)arg1 ;
-(NSString *)description;
-(BOOL)hasEntitlementDomain:(unsigned long long)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
@end

