/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BCOAuth2Parameters;

@interface BCAuthenticationRequest : NSObject <NSSecureCoding> {

	NSString* _businessIdentifier;
	NSString* _businessName;
	BCOAuth2Parameters* _oauth2;

}

@property (nonatomic,retain) NSString * businessIdentifier;              //@synthesize businessIdentifier=_businessIdentifier - In the implementation block
@property (nonatomic,retain) BCOAuth2Parameters * oauth2;                //@synthesize oauth2=_oauth2 - In the implementation block
@property (nonatomic,readonly) NSString * businessName;                  //@synthesize businessName=_businessName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(BCOAuth2Parameters *)oauth2;
-(NSString *)businessIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)businessName;
-(void)setBusinessIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
-(void)setOauth2:(BCOAuth2Parameters *)arg1 ;
@end

