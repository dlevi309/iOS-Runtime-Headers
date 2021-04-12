/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class UILayoutGuide, UILabel, UIVisualEffectView, REUpNextImageView, REUpNextAccessoryView, UIFont, NSArray;

@interface REUpNextMultilineCell : REUpNextBaseCell {

	UILayoutGuide* _contentLayoutGuide;
	UILayoutGuide* _descriptionTextLayoutGuide;
	UILayoutGuide* _bodyImageSizingLayoutGuide;
	BOOL _showingHeader;
	BOOL _showingHeaderImage;
	BOOL _showingThreeLineLayout;
	BOOL _showingAccessory;
	BOOL _showingDescriptionImage;
	BOOL _usingStretchableImage;
	unsigned _headerImageEdge;
	UILabel* _headerLabel;
	UILabel* _descriptionLine1Label;
	UILabel* _descriptionLine2Label;
	UIVisualEffectView* _headerImageEffectView;
	UIVisualEffectView* _headerVisualEffectView;
	UIVisualEffectView* _descriptionLine1EffectView;
	UIVisualEffectView* _descriptionLine2EffectView;
	REUpNextImageView* _headerImage;
	REUpNextAccessoryView* _accessoryView;
	REUpNextImageView* _descriptionImageView;
	UIFont* _standardFont;
	UIFont* _italicFont;
	UIFont* _boldFont;
	NSArray* _withHeaderConstraints;
	NSArray* _withoutHeaderConstraints;
	NSArray* _headerWithLeftImageConstraints;
	NSArray* _headerWithRightImageConstraints;
	NSArray* _headerWithNoImageConstraints;
	NSArray* _withDescription2Constraints;
	NSArray* _withoutDescription2Constraints;
	NSArray* _withDescriptionAccessoryConstraints;
	NSArray* _withoutDescriptionAccessoryConstraints;
	NSArray* _withDescriptionImageViewConstraints;
	NSArray* _withStretchableDescriptionImageViewConstraints;
	NSArray* _withoutDescriptionImageViewConstraints;

}
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)configureWithContent:(id)arg1 ;
-(void)defaultTextColorDidChange;
-(void)_updateHeaderColor;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
@end

