/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SFRSAEncryptionOperation.h>

@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation {

	id _oaepEncryptionOperationInternal;

}

@property (nonatomic,copy) id<SFMaskGenerationFunction> maskGenerationFunction; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFMaskGenerationFunction>)maskGenerationFunction;
-(void)setMaskGenerationFunction:(id<SFMaskGenerationFunction>)arg1 ;
-(id)initWithKeySpecifier:(id)arg1 maskGenerationFunction:(id)arg2 ;
@end

