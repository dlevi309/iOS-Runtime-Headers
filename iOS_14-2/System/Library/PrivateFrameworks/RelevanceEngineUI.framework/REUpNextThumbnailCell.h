/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)configureWithContent:(id)arg1 ;
-(void)defaultTextColorDidChange;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
@end

