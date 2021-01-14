/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImage;

@interface HUCameraMicrophoneButton : UIControl {

	BOOL _on;
	UIImage* _microphoneImage;

}

@property (nonatomic,retain) UIImage * microphoneImage;              //@synthesize microphoneImage=_microphoneImage - In the implementation block
@property (assign,getter=isOn,nonatomic) BOOL on;                    //@synthesize on=_on - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isOn;
-(void)setOn:(BOOL)arg1 ;
-(UIImage *)microphoneImage;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setMicrophoneImage:(UIImage *)arg1 ;
-(void)_updateAlpha;
-(void)drawRect:(CGRect)arg1 ;
-(void)_updateImage;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)_circleColor;
@end

