/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)entitlementsForCurrentTaskWithError:(id*)arg1 ;
+(id)entitlementsWithConnection:(id)arg1 error:(id*)arg2 ;
+(id)allowedEntitlements;
+(id)entitlementsWithSecTask:(SecTaskRef)arg1 overrides:(id)arg2 error:(id*)arg3 ;
+(BOOL)isInternalProcess;
+(BOOL)isPrivateSearchEnabledProcess;
+(BOOL)isDashboardAppProcess;
+(BOOL)isSearchEnabledProcess;
-(id)init;
-(NSDictionary *)entitlements;
-(BOOL)hasEntitlement:(id)arg1 ;
-(BOOL)isInternal;
-(NSString *)applicationBundleIdentifier;
-(id)initWithEntitlements:(id)arg1 ;
-(BOOL)boolValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(id)stringValueForEntitlement:(id)arg1 error:(id*)arg2 ;
-(NSString *)classKitEnvironment;
-(BOOL)isPrivateSearchAPIEnabled;
-(BOOL)isPublicClassKitAPIEnabled;
-(BOOL)isDashboardAPIEnabled;
-(BOOL)isRegisterDashboardEnabled;
-(BOOL)isSearchAPIEnabled;
-(BOOL)isInDevelopmentEnvironment;
@end

