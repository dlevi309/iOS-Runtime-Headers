/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <PrototypeTools/PTSettings.h>

@interface _UIPointerTextBehaviorSettings : PTSettings {

	double _regionCaptureMultiplier;
	double _textLineRegionPadding;

}

@property (assign,nonatomic) double regionCaptureMultiplier;              //@synthesize regionCaptureMultiplier=_regionCaptureMultiplier - In the implementation block
@property (assign,nonatomic) double textLineRegionPadding;                //@synthesize textLineRegionPadding=_textLineRegionPadding - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setRegionCaptureMultiplier:(double)arg1 ;
-(void)setTextLineRegionPadding:(double)arg1 ;
-(double)regionCaptureMultiplier;
-(double)textLineRegionPadding;
@end

