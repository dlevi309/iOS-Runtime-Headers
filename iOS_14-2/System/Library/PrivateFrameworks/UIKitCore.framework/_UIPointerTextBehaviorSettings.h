/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)textLineRegionPadding;
-(void)setTextLineRegionPadding:(double)arg1 ;
-(double)regionCaptureMultiplier;
@end

