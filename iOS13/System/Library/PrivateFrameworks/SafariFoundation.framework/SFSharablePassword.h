/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)sharablePasswordFromData:(id)arg1 ;
+(id)sharablePasswordFromURL:(id)arg1 ;
+(id)sharablePasswordFromEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2 ;
+(id)_decryptedDataForEncryptedData:(id)arg1 encryptionKeyReference:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSString *)displayName;
-(NSString *)username;
-(NSString *)highLevelDomain;
-(NSArray *)protectionSpaces;
-(id)initWithUsername:(id)arg1 password:(id)arg2 displayName:(id)arg3 highLevelDomain:(id)arg4 protectionSpaces:(id)arg5 ;
-(id)urlRepresentationForAirDrop;
-(id)_encryptionInformationWithNewKey;
-(NSURL *)passwordManagerURL;
@end

