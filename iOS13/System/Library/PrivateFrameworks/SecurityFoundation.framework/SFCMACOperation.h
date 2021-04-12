/*
* Generated on Monday, March 1, 2021 at 2:33:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SFMessageAuthenticationCodeOperation.h>

@class SFSymmetricEncryptionOperation;

@interface SFCMACOperation : SFMessageAuthenticationCodeOperation {

	id _cmacOperationInternal;

}

@property (nonatomic,copy) SFSymmetricEncryptionOperation * encryptionOperation; 
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SFSymmetricEncryptionOperation *)encryptionOperation;
-(id)initWithEncryptionOperation:(id)arg1 ;
-(void)setEncryptionOperation:(SFSymmetricEncryptionOperation *)arg1 ;
@end

