/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <PrototypeTools/PTSettings.h>

@interface SBFTodayGestureSettings : PTSettings {

	double _sideSpringTension;
	double _sideSpringFriction;
	double _interactiveSideSpringTension;
	double _interactiveSideSpringFriction;

}

@property (assign,nonatomic) double sideSpringTension;                          //@synthesize sideSpringTension=_sideSpringTension - In the implementation block
@property (assign,nonatomic) double sideSpringFriction;                         //@synthesize sideSpringFriction=_sideSpringFriction - In the implementation block
@property (assign,nonatomic) double interactiveSideSpringTension;               //@synthesize interactiveSideSpringTension=_interactiveSideSpringTension - In the implementation block
@property (assign,nonatomic) double interactiveSideSpringFriction;              //@synthesize interactiveSideSpringFriction=_interactiveSideSpringFriction - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setSideSpringTension:(double)arg1 ;
-(void)setSideSpringFriction:(double)arg1 ;
-(void)setInteractiveSideSpringTension:(double)arg1 ;
-(void)setInteractiveSideSpringFriction:(double)arg1 ;
-(double)sideSpringTension;
-(double)sideSpringFriction;
-(double)interactiveSideSpringTension;
-(double)interactiveSideSpringFriction;
@end

