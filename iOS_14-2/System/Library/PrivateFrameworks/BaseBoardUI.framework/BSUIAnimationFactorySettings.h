/*
* Generated on Thursday, January 14, 2021 at 2:22:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/

#import <PrototypeTools/PTSettings.h>

@interface BSUIAnimationFactorySettings : PTSettings {

	BOOL _slowAnimations;
	double _slowDownFactor;

}

@property (assign,nonatomic) BOOL slowAnimations;                //@synthesize slowAnimations=_slowAnimations - In the implementation block
@property (assign,nonatomic) double slowDownFactor;              //@synthesize slowDownFactor=_slowDownFactor - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setSlowAnimations:(BOOL)arg1 ;
-(double)effectiveSlowDownFactor;
-(void)setSlowDownFactor:(double)arg1 ;
-(double)slowDownFactor;
-(BOOL)slowAnimations;
@end

