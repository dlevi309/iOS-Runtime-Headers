/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/


#import <ClassKit/ClassKit-Structs.h>
@class NSString, NSDictionary;

@interface CLSEntitlements : NSObject {

	NSString* _applicationBundleIdentifier;
	NSDictionary* _entitlements;

}

@property (nonatomic,copy,readonly) NSDictionary * entitlements;                    //@synthesize entitlements=_entitlements - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleIdentifier;              //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * classKitEnvironment; 
+(id)entitlementsWithConnection:(id)arg1 error:(id*)arg2 ;
+(BOOL)isSearchEnabledProcess;
+(id)entitlementsForCurrentTaskWithError:(id*)arg1 ;
+(id)entitlementsWithSecTask:(SecTaskRef)arg1 overrides:(id)arg2 error:(id*)arg3 ;
+(BOOL)isInternalProcess;
+(BOOL)isPrivateSearchEnabledProcess;
+(id)allowedEntitlements;
+(BOOL)isDashboardAppProcess;
-(BOOL)isInternal;
-(NSDictionary *)entitlements;
-(id)init;
-(BOOL)isInDevelopmentEnvironment;
-(BOOL)isPrivateSearchAPIEnabled;
-(BOOL)isPublicClassKitAPIEnabled;
-(BOOL)isRegisterDashboardEnabled;
-(BOOL)boolValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(NSString *)classKitEnvironment;
-(BOOL)isDashboardAPIEnabled;
-(BOOL)isSearchAPIEnabled;
-(id)stringValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(NSString *)applicationBundleIdentifier;
-(BOOL)hasEntitlement:(id)arg1 ;
-(id)initWithEntitlements:(id)arg1 ;
@end

