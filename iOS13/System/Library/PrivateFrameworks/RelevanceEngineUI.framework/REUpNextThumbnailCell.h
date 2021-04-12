/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class UILayoutGuide, UIImageView, UILabel, UIVisualEffectView, UIFont, NSArray, NSLayoutConstraint;

@interface REUpNextThumbnailCell : REUpNextBaseCell {

	UILayoutGuide* _labelLayoutGuide;
	UIImageView* _imageView;
	UILabel* _headerLabel;
	UILabel* _descriptionLine1Label;
	UILabel* _descriptionLine2Label;
	UIVisualEffectView* _headerEffectView;
	UIVisualEffectView* _descriptionLine1EffectView;
	UIVisualEffectView* _descriptionLine2EffectView;
	UIVisualEffectView* _imageEffectView;
	UIFont* _standardFont;
	UIFont* _italicFont;
	UIFont* _boldFont;
	NSArray* _withHeaderConstraints;
	NSArray* _withoutHeaderConstraints;
	NSArray* _withDescription2Constraints;
	NSArray* _withoutDescription2Constraints;
	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	BOOL _showingHeader;
	BOOL _showingThreeLineLayout;

}
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)defaultTextColorDidChange;
-(void)configureWithContent:(id)arg1 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
@end

