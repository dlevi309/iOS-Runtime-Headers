/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)businessName;
-(NSString *)businessIdentifier;
-(void)setBusinessIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
-(void)setOauth2:(BCOAuth2Parameters *)arg1 ;
-(BCOAuth2Parameters *)oauth2;
@end

