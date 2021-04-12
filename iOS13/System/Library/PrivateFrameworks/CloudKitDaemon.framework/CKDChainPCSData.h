/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)CKPropertiesDescription;
-(CKEncryptedData *)encryptedChainPCSPrivateKey;
-(id)initWithPCSData:(id)arg1 encryptedPrivateKey:(id)arg2 ;
@end

