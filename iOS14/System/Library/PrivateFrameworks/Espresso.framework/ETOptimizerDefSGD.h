/*
* Generated on Thursday, January 14, 2021 at 2:22:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/ETOptimizerDef.h>

@interface ETOptimizerDefSGD : ETOptimizerDef {

	float _lr;
	float _lr_decay_epoch;
	float _momentum;
	float _weight_decay;

}

@property (assign) float lr;                          //@synthesize lr=_lr - In the implementation block
@property (assign) float lr_decay_epoch;              //@synthesize lr_decay_epoch=_lr_decay_epoch - In the implementation block
@property (assign) float momentum;                    //@synthesize momentum=_momentum - In the implementation block
@property (assign) float weight_decay;                //@synthesize weight_decay=_weight_decay - In the implementation block
-(float)lr;
-(id)init;
-(void)setLr:(float)arg1 ;
-(float)momentum;
-(void)setLr_decay_epoch:(float)arg1 ;
-(void)setWeight_decay:(float)arg1 ;
-(float)lr_decay_epoch;
-(float)weight_decay;
-(void)setMomentum:(float)arg1 ;
@end

