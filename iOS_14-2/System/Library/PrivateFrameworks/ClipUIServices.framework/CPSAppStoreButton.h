/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
*/

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <CarPlaySupport/CPSButton.h>

@class UIStackView, UILabel;

@interface CPSAppStoreButton : CPSButton {

	UIStackView* _fullSizeStack;
	UIStackView* _glyphOnlyStack;
	UILabel* _label;
	CGRect _lastLayoutBounds;
	BOOL _intrinsicContentSizeIsValid;
	CGSize _intrinsicContentSize;

}
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)layoutSubviews;
-(void)invalidateIntrinsicContentSize;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

