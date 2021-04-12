/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSData, VSAccountProviderResponse;

@interface VSAccountMetadata : NSObject <NSCopying, NSSecureCoding> {

	NSString* _accountProviderIdentifier;
	NSDate* _authenticationExpirationDate;
	NSData* _verificationData;
	VSAccountProviderResponse* _accountProviderResponse;

}

@property (nonatomic,copy) NSString * accountProviderIdentifier;                               //@synthesize accountProviderIdentifier=_accountProviderIdentifier - In the implementation block
@property (nonatomic,copy) NSDate * authenticationExpirationDate;                              //@synthesize authenticationExpirationDate=_authenticationExpirationDate - In the implementation block
@property (nonatomic,copy) NSData * verificationData;                                          //@synthesize verificationData=_verificationData - In the implementation block
@property (nonatomic,retain) VSAccountProviderResponse * accountProviderResponse;              //@synthesize accountProviderResponse=_accountProviderResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * SAMLAttributeQueryResponse; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)verificationData;
-(void)setVerificationData:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(VSAccountProviderResponse *)accountProviderResponse;
-(NSString *)SAMLAttributeQueryResponse;
-(NSString *)accountProviderIdentifier;
-(void)setAccountProviderIdentifier:(NSString *)arg1 ;
-(NSDate *)authenticationExpirationDate;
-(void)setAuthenticationExpirationDate:(NSDate *)arg1 ;
-(void)setAccountProviderResponse:(VSAccountProviderResponse *)arg1 ;
@end

