/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSModalView.h>

@protocol CSRemoteModalContentViewTouchDelegate;
@class UIButton;

@interface CSRemoteContentModalView : CSModalView {

	id<CSRemoteModalContentViewTouchDelegate> _touchDelegate;
	UIButton* _backgroundDismissButton;

}

@property (assign,nonatomic,__weak) id<CSRemoteModalContentViewTouchDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
@property (nonatomic,retain) UIButton * backgroundDismissButton;                                          //@synthesize backgroundDismissButton=_backgroundDismissButton - In the implementation block
-(void)setTouchDelegate:(id<CSRemoteModalContentViewTouchDelegate>)arg1 ;
-(id<CSRemoteModalContentViewTouchDelegate>)touchDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIButton *)backgroundDismissButton;
-(void)setBackgroundDismissButton:(UIButton *)arg1 ;
@end

