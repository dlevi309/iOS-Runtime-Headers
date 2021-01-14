/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityLabel;
-(CGSize)intrinsicContentSize;
-(void)setRecording:(BOOL)arg1 ;
-(id)init;
-(BOOL)recording;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)currentLineWidth;
-(double)currentInnerCircleRadius;
-(double)currentStopButtonSize;
-(void)setRecording:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)redSquare;
-(void)setRedSquare:(UIView *)arg1 ;
-(NSLayoutConstraint *)redSquareWidthConstraint;
-(void)setRedSquareWidthConstraint:(NSLayoutConstraint *)arg1 ;
@end

