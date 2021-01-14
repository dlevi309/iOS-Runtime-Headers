/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSMutableSet, _HKXPCAuditToken, NSString, _HKEntitlements;

@interface HDXPCProcess : NSObject {

	NSMutableSet* _droppedEntitlements;
	BOOL _isExtension;
	_HKXPCAuditToken* _auditToken;
	NSString* _name;
	NSString* _bundleIdentifier;
	NSString* _containerAppBundleIdentifier;
	_HKEntitlements* _entitlements;

}

@property (nonatomic,readonly) _HKEntitlements * entitlements;                            //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,copy,readonly) _HKXPCAuditToken * auditToken;                        //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isExtension;                                          //@synthesize isExtension=_isExtension - In the implementation block
@property (nonatomic,readonly) BOOL isWidgetKitExtension; 
@property (nonatomic,copy,readonly) NSString * containerAppBundleIdentifier;              //@synthesize containerAppBundleIdentifier=_containerAppBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier; 
+(id)currentProcess;
+(id)processWithConnection:(id)arg1 error:(id*)arg2 ;
-(void)dropEntitlement:(id)arg1 ;
-(_HKEntitlements *)entitlements;
-(int)processIdentifier;
-(id)_pluginBundleForCurrentProcess;
-(BOOL)hasRequiredEntitlement:(id)arg1 error:(id*)arg2 ;
-(NSString *)bundleIdentifier;
-(_HKXPCAuditToken *)auditToken;
-(NSString *)applicationIdentifier;
-(NSString *)name;
-(id)description;
-(BOOL)hasRequiredArrayEntitlement:(id)arg1 containing:(id)arg2 error:(id*)arg3 ;
-(id)initWithAuditToken:(id)arg1 entitlements:(id)arg2 isExtension:(BOOL)arg3 containerAppBundleIdentifier:(id)arg4 ;
-(NSString *)containerAppBundleIdentifier;
-(BOOL)hasArrayEntitlement:(id)arg1 containing:(id)arg2 ;
-(id)valueForEntitlement:(id)arg1 ;
-(BOOL)isExtension;
-(void)restoreEntitlement:(id)arg1 ;
-(BOOL)isWidgetKitExtension;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)unitTest_copyProcessWithEntitlements:(id)arg1 ;
@end

