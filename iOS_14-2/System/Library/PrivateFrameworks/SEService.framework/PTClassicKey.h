/*
* Generated on Thursday, January 14, 2021 at 2:28:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SEService.framework/SEService
*/


#import <SEService/SEService-Structs.h>
@class NSData;

@interface PTClassicKey : NSObject {

	SCD_Struct_PT2 ptKeyOutput;
	SCD_Struct_PT3 ptKeyBlob;
	NSData* _keyData;

}

@property (nonatomic,readonly) NSData * keyData;              //@synthesize keyData=_keyData - In the implementation block
+(id)withData:(id)arg1 error:(id*)arg2 ;
-(id)publicKey;
-(NSData *)keyData;
-(unsigned)keyNumber;
-(id)keyBlob;
-(id)assetACL;
-(id)assetACLAttestation;
-(SCD_Struct_PT1)keyBlobItem;
-(id)encryptedWrappedKeyBlob;
-(SCD_Struct_PT1)assetACLItem;
-(SCD_Struct_PT1)assetACLAttestationItem;
-(SCD_Struct_PT1)encryptedWrappedKeyBlobItem;
@end

