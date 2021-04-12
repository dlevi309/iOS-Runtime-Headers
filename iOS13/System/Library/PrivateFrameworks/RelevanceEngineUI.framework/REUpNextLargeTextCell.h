/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class UIFont, UILayoutGuide, REUpNextImageView, UILabel, UIVisualEffectView, NSArray;

@interface REUpNextLargeTextCell : REUpNextBaseCell {

	BOOL _showingHeaderImage;
	BOOL _showingBodyImage;
	unsigned _currentImageEdge;
	UIFont* _standardBodyFont;
	UIFont* _monospaceBodyFont;
	UILayoutGuide* _contentLayoutGuide;
	REUpNextImageView* _headerImage;
	REUpNextImageView* _bodyImage;
	UILabel* _headerLabel;
	UILabel* _bodyLabel;
	UIVisualEffectView* _headerVisualEffectView;
	UIVisualEffectView* _bodyVisualEffectView;
	UIVisualEffectView* _headerImageVisualEffectView;
	NSArray* _headerWithLeftImageConstraints;
	NSArray* _headerWithRightImageConstraints;
	NSArray* _headerWithNoImageConstraints;
	NSArray* _bodyWithLeftImageConstraints;
	NSArray* _bodyWithNoImageConstraints;

}
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)defaultTextColorDidChange;
-(void)_updateHeaderColor;
-(void)configureWithContent:(id)arg1 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
@end

