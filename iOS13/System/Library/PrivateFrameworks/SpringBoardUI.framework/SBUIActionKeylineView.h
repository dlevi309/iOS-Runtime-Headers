/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>

@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView {

	MTVisualStylingProvider* _visualStylingProvider;
	double _height;

}

@property (assign,nonatomic) double height;              //@synthesize height=_height - In the implementation block
-(id)init;
-(double)height;
-(void)setHeight:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_updateVisualStylingIfNecessary;
-(void)_invalidateVisualStyling;
-(void)_updateCornerMask;
-(double)heightInPixels;
@end

