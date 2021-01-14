/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setHeight:(double)arg1 ;
-(void)willMoveToSuperview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)_updateCornerMask;
-(double)height;
-(void)layoutSubviews;
-(void)_updateVisualStylingIfNecessary;
-(void)_invalidateVisualStyling;
-(double)heightInPixels;
@end

