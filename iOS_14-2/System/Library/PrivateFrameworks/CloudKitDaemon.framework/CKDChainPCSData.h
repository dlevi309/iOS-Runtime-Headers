/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CKDPCSData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKEncryptedData;

@interface CKDChainPCSData : CKDPCSData <NSSecureCoding> {

	CKEncryptedData* _encryptedChainPCSPrivateKey;

}

@property (nonatomic,readonly) CKEncryptedData * encryptedChainPCSPrivateKey;              //@synthesize encryptedChainPCSPrivateKey=_encryptedChainPCSPrivateKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKEncryptedData *)encryptedChainPCSPrivateKey;
-(id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2 ;
@end

