/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

