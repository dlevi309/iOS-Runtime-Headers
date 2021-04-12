/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDate, NSArray, NSString;

@interface HKOAuth2Credential : NSObject <NSCopying, NSSecureCoding> {

	NSUUID* _identifier;
	NSDate* _expiration;
	NSArray* _scope;

}

@property (nonatomic,copy,readonly) NSUUID * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expiration;                   //@synthesize expiration=_expiration - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
@property (nonatomic,copy,readonly) NSArray * scope;                       //@synthesize scope=_scope - In the implementation block
@property (nonatomic,copy,readonly) NSString * scopeString; 
+(BOOL)supportsSecureCoding;
+(id)scopeFromScopeString:(id)arg1 ;
+(id)_scopeStringFromScope:(id)arg1 ;
+(id)expirationFromTimeInterval:(double)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSArray *)scope;
-(BOOL)isExpired;
-(NSDate *)expiration;
-(id)_commonInitWithIdentifier:(id)arg1 expiration:(id)arg2 scope:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 expiration:(id)arg2 scope:(id)arg3 ;
-(id)_accessTokenIdentifier;
-(id)_refreshTokenIdentifier;
-(BOOL)storeAccessToken:(id)arg1 error:(id*)arg2 ;
-(BOOL)storeRefreshToken:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqualToCredential:(id)arg1 epsilonExpiration:(double)arg2 ;
-(id)initWithIdentifier:(id)arg1 expiration:(id)arg2 scopeString:(id)arg3 ;
-(id)fetchAccessTokenWithError:(id*)arg1 ;
-(id)fetchRefreshTokenWithError:(id*)arg1 ;
-(BOOL)deleteTokensWithError:(id*)arg1 ;
-(NSString *)scopeString;
@end

