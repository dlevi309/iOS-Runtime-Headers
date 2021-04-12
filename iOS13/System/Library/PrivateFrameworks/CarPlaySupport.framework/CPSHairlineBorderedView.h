/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <UIKitCore/UIView.h>

@class UIView, NSLayoutConstraint;

@interface CPSHairlineBorderedView : UIView {

	UIView* _contentView;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,readonly) UIView * contentView;                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * bottomConstraint;              //@synthesize bottomConstraint=_bottomConstraint - In the implementation block
-(UIView *)contentView;
-(NSLayoutConstraint *)bottomConstraint;
-(id)initWithContentView:(id)arg1 borderEdges:(unsigned long long)arg2 ;
@end

