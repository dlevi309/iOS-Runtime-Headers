/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)configureWithContent:(id)arg1 ;
-(void)defaultTextColorDidChange;
-(void)_updateHeaderColor;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
@end

