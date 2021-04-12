/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSTargetingValidation.h>

@interface TPSBlockValidation : TPSTargetingValidation {

	/*^block*/id _validationBlock;

}

@property (nonatomic,copy) id validationBlock;              //@synthesize validationBlock=_validationBlock - In the implementation block
+(id)blockValidationWithBlock:(/*^block*/id)arg1 ;
-(id)validationBlock;
-(void)setValidationBlock:(id)arg1 ;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithValidationBlock:(/*^block*/id)arg1 ;
@end

