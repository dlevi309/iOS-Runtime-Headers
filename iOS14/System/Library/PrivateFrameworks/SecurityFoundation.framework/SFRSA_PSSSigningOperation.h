/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
*/

#import <SecurityFoundation/SFRSASigningOperation.h>

@interface SFRSA_PSSSigningOperation : SFRSASigningOperation {

	id _pssSigningOperationInternal;

}

@property (nonatomic,copy) id<SFMaskGenerationFunction> maskGenerationFunction; 
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<SFMaskGenerationFunction>)maskGenerationFunction;
-(id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 ;
-(id)initWithKeySpecifier:(id)arg1 digestOperation:(id)arg2 maskGenerationFunction:(id)arg3 ;
-(void)setMaskGenerationFunction:(id<SFMaskGenerationFunction>)arg1 ;
@end

