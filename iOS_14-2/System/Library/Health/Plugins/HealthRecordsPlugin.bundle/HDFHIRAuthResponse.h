/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface HDFHIRAuthResponse : NSObject <NSCopying, NSSecureCoding> {

	NSString* _accessToken;
	NSString* _refreshToken;
	NSString* _patientID;
	NSDate* _expiration;
	NSString* _scope;

}

@property (nonatomic,copy,readonly) NSString * accessToken;               //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * refreshToken;              //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * patientID;                 //@synthesize patientID=_patientID - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expiration;                  //@synthesize expiration=_expiration - In the implementation block
@property (nonatomic,copy,readonly) NSString * scope;                     //@synthesize scope=_scope - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)authResponseFromServerResponseDictionary:(id)arg1 baseURL:(id)arg2 previousCredential:(id)arg3 error:(id*)arg4 ;
-(NSString *)scope;
-(NSString *)accessToken;
-(NSString *)refreshToken;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)expiration;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)createCredentialWithRequestedScope:(id)arg1 error:(id*)arg2 ;
-(NSString *)patientID;
-(id)initWithAccessToken:(id)arg1 refreshToken:(id)arg2 patientID:(id)arg3 expiration:(id)arg4 scope:(id)arg5 ;
-(BOOL)isEquivalentToAuthResponse:(id)arg1 ;
@end

