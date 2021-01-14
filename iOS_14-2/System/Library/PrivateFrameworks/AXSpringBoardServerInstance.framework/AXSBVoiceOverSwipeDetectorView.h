/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<AXSBVoiceOverSwipeDetectorDelegate>)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setDelegate:(id<AXSBVoiceOverSwipeDetectorDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_swipeDetected:(id)arg1 ;
-(void)_cancelVOSwipeActivation:(id)arg1 ;
@end

