/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(double)effectiveSlowDownFactor;
-(void)setSlowAnimations:(BOOL)arg1 ;
-(void)setSlowDownFactor:(double)arg1 ;
-(BOOL)slowAnimations;
-(double)slowDownFactor;
@end

