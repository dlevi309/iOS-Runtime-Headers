/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, UIView, CALayer, VTUIColorLayer;

@interface VTUICheckMarkView : UIView {

	float _phase;
	UIColor* _blueColor;
	UIColor* _redColor;
	UIView* _blueView;
	UIView* _greenView;
	UIView* _redView;
	CALayer* _checkMaskLayer;
	CALayer* _xMaskLayer;
	VTUIColorLayer* _colorLayer;

}

@property (nonatomic,retain) CALayer * checkMaskLayer;                 //@synthesize checkMaskLayer=_checkMaskLayer - In the implementation block
@property (nonatomic,retain) CALayer * xMaskLayer;                     //@synthesize xMaskLayer=_xMaskLayer - In the implementation block
@property (nonatomic,retain) VTUIColorLayer * colorLayer;              //@synthesize colorLayer=_colorLayer - In the implementation block
-(CGSize)intrinsicContentSize;
-(void)animateForSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(CALayer *)checkMaskLayer;
-(CALayer *)xMaskLayer;
-(VTUIColorLayer *)colorLayer;
-(void)setCheckMaskLayer:(CALayer *)arg1 ;
-(void)setXMaskLayer:(CALayer *)arg1 ;
-(void)setColorLayer:(VTUIColorLayer *)arg1 ;
@end

