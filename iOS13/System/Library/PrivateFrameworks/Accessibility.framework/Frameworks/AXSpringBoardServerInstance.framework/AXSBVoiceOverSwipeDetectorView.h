/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
*/

#import <AXSpringBoardServerInstance/AXSpringBoardServerInstance-Structs.h>
#import <UIKitCore/UIView.h>

@protocol AXSBVoiceOverSwipeDetectorDelegate;
@class UILabel, UIImageView;

@interface AXSBVoiceOverSwipeDetectorView : UIView {

	UILabel* _titleLabel;
	UIImageView* _bgImageView;
	BOOL _swipeDetected;
	id<AXSBVoiceOverSwipeDetectorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXSBVoiceOverSwipeDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AXSBVoiceOverSwipeDetectorDelegate>)delegate;
-(void)setDelegate:(id<AXSBVoiceOverSwipeDetectorDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_swipeDetected:(id)arg1 ;
-(void)_cancelVOSwipeActivation:(id)arg1 ;
@end

