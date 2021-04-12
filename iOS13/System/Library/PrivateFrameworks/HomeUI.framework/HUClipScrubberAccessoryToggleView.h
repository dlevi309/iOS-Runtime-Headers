/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIButton, UIView;

@interface HUClipScrubberAccessoryToggleView : UIView {

	UIButton* _accessoryButton;
	UIButton* _liveButton;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UIButton * accessoryButton;              //@synthesize accessoryButton=_accessoryButton - In the implementation block
@property (nonatomic,retain) UIButton * liveButton;                   //@synthesize liveButton=_liveButton - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                 //@synthesize backgroundView=_backgroundView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)backgroundView;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIButton *)accessoryButton;
-(void)setAccessoryButton:(UIButton *)arg1 ;
-(UIButton *)liveButton;
-(void)setLiveButton:(UIButton *)arg1 ;
-(void)displayForTimelineState:(unsigned long long)arg1 ;
-(void)displayWithoutBackgroundVisualEffects;
@end

