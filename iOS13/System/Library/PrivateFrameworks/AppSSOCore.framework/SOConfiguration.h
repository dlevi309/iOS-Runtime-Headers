/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SOConfiguration : NSObject <NSSecureCoding> {

	NSArray* _profiles;

}

@property (nonatomic,readonly) NSArray * profiles; 
@property (nonatomic,readonly) BOOL empty; 
+(BOOL)supportsSecureCoding;
+(id)stringWithHandleResult:(long long)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)empty;
-(NSArray *)profiles;
-(id)initWithProfiles:(id)arg1 ;
-(id)realms;
-(id)profileForURL:(id)arg1 responseCode:(long long)arg2 ;
-(long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 profile:(id*)arg4 ;
-(BOOL)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 ;
-(id)_profileForURLWithHostScheme:(id)arg1 ;
-(id)_profileForURLWithRealmScheme:(id)arg1 ;
-(id)_profileForURLWithStandardScheme:(id)arg1 isCredential:(BOOL)arg2 ;
-(BOOL)_matchHost:(id)arg1 inCredentialProfile:(id)arg2 ;
@end

