/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, MPUContentSizeLayoutConstraint, NSLayoutConstraint, UIView, NSArray;

@interface VideosExtrasCollectionReusableView : UICollectionReusableView {

	UILabel* _textLabel;
	MPUContentSizeLayoutConstraint* _textTopConstraint;
	NSLayoutConstraint* _textLeftConstraint;
	MPUContentSizeLayoutConstraint* _textBottomConstraint;
	NSLayoutConstraint* _textRightConstraint;
	UIEdgeInsets _labelInsets;
	UIView* _borderView;
	NSArray* _borderConstraints;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureForHeaderElement:(id)arg1 headerStyle:(id)arg2 ;
-(void)_configureConstraintsForInsets:(UIEdgeInsets)arg1 ;
@end

