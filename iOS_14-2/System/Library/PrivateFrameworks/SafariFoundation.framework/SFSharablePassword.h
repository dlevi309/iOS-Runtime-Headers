/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface SFSharablePassword : NSObject <NSSecureCoding> {

	NSString* _username;
	NSString* _password;
	NSString* _displayName;
	NSString* _highLevelDomain;
	NSArray* _protectionSpaces;

}

@property (nonatomic,copy,readonly) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;                     //@synthesize password=_password - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * highLevelDomain;              //@synthesize highLevelDomain=_highLevelDomain - In the implementation block
@property (nonatomic,copy,readonly) NSArray * protectionSpaces;              //@synthesize protectionSpaces=_protectionSpaces - In the implementation block
@property (nonatomic,readonly) NSURL * passwordManagerURL; 
+(BOOL)supportsSecureCoding;
+(id)sharablePasswordFromEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2 ;
+(id)sharablePasswordFromData:(id)arg1 ;
+(id)sharablePasswordFromURL:(id)arg1 ;
+(id)_decryptedDataForEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUsername:(id)arg1 password:(id)arg2 displayName:(id)arg3 highLevelDomain:(id)arg4 protectionSpaces:(id)arg5 ;
-(id)urlRepresentationForAirDrop;
-(NSString *)password;
-(NSString *)username;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)protectionSpaces;
-(NSString *)displayName;
-(NSString *)highLevelDomain;
-(BOOL)isEqual:(id)arg1 ;
-(id)_encryptionInformationWithNewKey;
-(NSURL *)passwordManagerURL;
@end

