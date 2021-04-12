/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setEnabled:(BOOL)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)_updateImage;
-(void)_updateAlpha;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
-(void)setMicrophoneImage:(UIImage *)arg1 ;
-(UIImage *)microphoneImage;
-(id)_circleColor;
@end

