/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)profiles;
-(id)initWithProfiles:(id)arg1 ;
-(id)_profileForURLWithHostScheme:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 profile:(id*)arg4 ;
-(id)description;
-(id)_profileForURLWithStandardScheme:(id)arg1 isCredential:(BOOL)arg2 ;
-(BOOL)empty;
-(id)initWithCoder:(id)arg1 ;
-(id)profileForURL:(id)arg1 responseCode:(long long)arg2 ;
-(id)_profileForURLWithRealmScheme:(id)arg1 ;
-(id)realms;
-(BOOL)_matchHost:(id)arg1 inCredentialProfile:(id)arg2 ;
-(BOOL)willHandleURL:(id)arg1 responseCode:(long long)arg2 callerBundleIdentifier:(id)arg3 ;
@end

