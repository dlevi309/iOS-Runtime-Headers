/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(BOOL)isExpired;
-(NSString *)accessToken;
-(NSString *)refreshToken;
-(NSString *)tokenType;
-(id)initWithResponseObject:(id)arg1 ;
-(NSDictionary *)responseObject;
@end

