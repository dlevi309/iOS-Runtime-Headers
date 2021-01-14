/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface WFOAuth2Credential : NSObject <NSCopying, NSSecureCoding> {

	NSString* _tokenType;
	NSString* _accessToken;
	NSString* _refreshToken;
	NSDate* _expirationDate;
	NSDictionary* _responseObject;

}

@property (nonatomic,readonly) NSDictionary * responseObject;              //@synthesize responseObject=_responseObject - In the implementation block
@property (nonatomic,readonly) NSString * accessToken;                     //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) NSString * tokenType;                       //@synthesize tokenType=_tokenType - In the implementation block
@property (nonatomic,readonly) NSString * refreshToken;                    //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(BOOL)supportsSecureCoding;
-(NSString *)accessToken;
-(NSString *)refreshToken;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)tokenType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithResponseObject:(id)arg1 ;
-(NSDictionary *)responseObject;
@end

