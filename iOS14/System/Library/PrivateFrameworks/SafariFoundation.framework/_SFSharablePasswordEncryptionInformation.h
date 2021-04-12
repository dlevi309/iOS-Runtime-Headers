/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
*/


@class NSData;

@interface _SFSharablePasswordEncryptionInformation : NSObject {

	NSData* _encryptedPasswordData;
	NSData* _encryptionKeyReference;

}

@property (nonatomic,copy,readonly) NSData * encryptedPasswordData;               //@synthesize encryptedPasswordData=_encryptedPasswordData - In the implementation block
@property (nonatomic,copy,readonly) NSData * encryptionKeyReference;              //@synthesize encryptionKeyReference=_encryptionKeyReference - In the implementation block
-(id)initWithEncryptedPasswordData:(id)arg1 encryptionKeyReference:(id)arg2 ;
-(NSData *)encryptedPasswordData;
-(NSData *)encryptionKeyReference;
@end

