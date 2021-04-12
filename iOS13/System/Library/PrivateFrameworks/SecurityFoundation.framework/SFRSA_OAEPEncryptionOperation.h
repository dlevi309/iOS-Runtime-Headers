/*
* Generated on Monday, March 1, 2021 at 2:33:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SFRSAEncryptionOperation.h>

@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation {

	id _oaepEncryptionOperationInternal;

}

@property (nonatomic,copy) id<SFMaskGenerationFunction> maskGenerationFunction; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFMaskGenerationFunction>)maskGenerationFunction;
-(id)initWithKeySpecifier:(id)arg1 ;
-(void)setMaskGenerationFunction:(id<SFMaskGenerationFunction>)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 maskGenerationFunction:(id)arg2 ;
@end

