/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/


#import <HealthKit/HealthKit-Structs.h>
@class NSString, NSDictionary;

@interface _HKEntitlements : NSObject {

	NSString* _applicationIdentifier;
	NSDictionary* _entitlementValues;

}

@property (nonatomic,copy,readonly) NSDictionary * entitlementValues;              //@synthesize entitlementValues=_entitlementValues - In the implementation block
+(id)entitlementsWithConnection:(id)arg1 error:(id*)arg2 ;
+(id)entitlementsForCurrentTaskWithError:(id*)arg1 ;
+(id)_containerAppExtensionEntitlementsForCurrentTask;
+(id)_allowedEntitlementsSet;
+(id)entitlementsWithDictionary:(id)arg1 ;
+(id)entitlementsWithApplicationIdentifier:(id)arg1 ;
+(id)_entitlementsWithSecTask:(SecTaskRef)arg1 valueOverrides:(id)arg2 error:(id*)arg3 ;
+(void)_setEntitlementsForCurrentTask:(id)arg1 ;
-(BOOL)hasPrivateMetadataAccess;
-(id)init;
-(NSDictionary *)entitlementValues;
-(BOOL)hasPrivateAccessEntitlementWithIdentifer:(id)arg1 ;
-(id)applicationIdentifier;
-(BOOL)arrayEntitlement:(id)arg1 containsString:(id)arg2 ;
-(id)typesForWriteAuthorizationOverride;
-(id)stringForEntitlement:(id)arg1 ;
-(id)description;
-(id)typesForReadAuthorizationOverride;
-(BOOL)hasAccessEntitlementWithIdentifer:(id)arg1 ;
-(id)_typesFromIdentifierArray:(id)arg1 ;
-(id)_initWithEntitlementValues:(id)arg1 ;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)hasEntitlement:(id)arg1 ;
@end

