/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UISettings.h>

@interface _UIScreenEdgePanRecognizerDwellSettings : _UISettings {

	double _longPressTipPermittedHorizontalMovement;
	double _longPressTipPermittedVerticalMovement;
	double _longPressPermittedHorizontalMovement;
	double _longPressPermittedVerticalMovement;
	double _longPressRequiredDuration;

}

@property (assign,nonatomic) double longPressTipPermittedHorizontalMovement;              //@synthesize longPressTipPermittedHorizontalMovement=_longPressTipPermittedHorizontalMovement - In the implementation block
@property (assign,nonatomic) double longPressTipPermittedVerticalMovement;                //@synthesize longPressTipPermittedVerticalMovement=_longPressTipPermittedVerticalMovement - In the implementation block
@property (assign,nonatomic) double longPressPermittedHorizontalMovement;                 //@synthesize longPressPermittedHorizontalMovement=_longPressPermittedHorizontalMovement - In the implementation block
@property (assign,nonatomic) double longPressPermittedVerticalMovement;                   //@synthesize longPressPermittedVerticalMovement=_longPressPermittedVerticalMovement - In the implementation block
@property (assign,nonatomic) double longPressRequiredDuration;                            //@synthesize longPressRequiredDuration=_longPressRequiredDuration - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setLongPressPermittedHorizontalMovement:(double)arg1 ;
-(void)setLongPressPermittedVerticalMovement:(double)arg1 ;
-(void)setLongPressTipPermittedHorizontalMovement:(double)arg1 ;
-(void)setLongPressTipPermittedVerticalMovement:(double)arg1 ;
-(void)setLongPressRequiredDuration:(double)arg1 ;
-(double)longPressRequiredDuration;
-(double)longPressTipPermittedHorizontalMovement;
-(double)longPressTipPermittedVerticalMovement;
-(double)longPressPermittedHorizontalMovement;
-(double)longPressPermittedVerticalMovement;
@end

