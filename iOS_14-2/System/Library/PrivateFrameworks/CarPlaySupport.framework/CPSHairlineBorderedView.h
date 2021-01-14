/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSLayoutConstraint *)bottomConstraint;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 borderEdges:(unsigned long long)arg2 ;
@end

