/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <ActionKitUI/ActionKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIView, NSLayoutConstraint;

@interface WFDictateTextActionStopButton : UIButton {

	BOOL _recording;
	UIView* _redSquare;
	NSLayoutConstraint* _redSquareWidthConstraint;

}

@property (assign,nonatomic,__weak) UIView * redSquare;                                         //@synthesize redSquare=_redSquare - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * redSquareWidthConstraint;              //@synthesize redSquareWidthConstraint=_redSquareWidthConstraint - In the implementation block
@property (assign,nonatomic) BOOL recording;                                                    //@synthesize recording=_recording - In the implementation block
-(id)init;
-(CGSize)intrinsicContentSize;
-(id)accessibilityLabel;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setRecording:(BOOL)arg1 ;
-(BOOL)recording;
-(double)currentLineWidth;
-(double)currentInnerCircleRadius;
-(double)currentStopButtonSize;
-(void)setRecording:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)redSquare;
-(void)setRedSquare:(UIView *)arg1 ;
-(NSLayoutConstraint *)redSquareWidthConstraint;
-(void)setRedSquareWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

