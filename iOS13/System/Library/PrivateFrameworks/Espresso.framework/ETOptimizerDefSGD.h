/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(float)momentum;
-(void)setMomentum:(float)arg1 ;
-(float)lr;
-(void)setLr:(float)arg1 ;
-(float)lr_decay_epoch;
-(void)setLr_decay_epoch:(float)arg1 ;
-(float)weight_decay;
-(void)setWeight_decay:(float)arg1 ;
@end

