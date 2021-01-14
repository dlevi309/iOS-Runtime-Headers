/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIButton, HUIconView;

@interface HUCameraMicrophoneControl : UIControl {

	BOOL _talking;
	UIButton* _talkButton;
	UIButton* _doneButton;
	HUIconView* _doneButtonIconView;

}

@property (nonatomic,retain) UIButton * talkButton;                        //@synthesize talkButton=_talkButton - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                        //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) HUIconView * doneButtonIconView;              //@synthesize doneButtonIconView=_doneButtonIconView - In the implementation block
@property (assign,getter=isTalking,nonatomic) BOOL talking;                //@synthesize talking=_talking - In the implementation block
-(UIButton *)doneButton;
-(void)setDoneButton:(UIButton *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)talkButton;
-(BOOL)isTalking;
-(void)setTalking:(BOOL)arg1 ;
-(void)setTalkButton:(UIButton *)arg1 ;
-(HUIconView *)doneButtonIconView;
-(void)setDoneButtonIconView:(HUIconView *)arg1 ;
@end

