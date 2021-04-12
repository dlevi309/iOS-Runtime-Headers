/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <RelevanceEngineUI/REUpNextBaseCell.h>

@class UILayoutGuide, REUpNextImageView, UILabel, UIVisualEffectView;

@interface REUpNextLargeWithDetailTextCell : REUpNextBaseCell {

	UILayoutGuide* _contentLayoutGuide;
	REUpNextImageView* _bodyImage;
	UILabel* _headerLabel;
	UILabel* _bodyLabel;
	UILabel* _detail1Label;
	UILabel* _detail2Label;
	UIVisualEffectView* _headerEffectView;
	UIVisualEffectView* _bodyEffectView;
	UIVisualEffectView* _detail1EffectView;
	UIVisualEffectView* _detail2EffectView;

}
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)defaultTextColorDidChange;
-(void)_updateHeaderColor;
-(void)configureWithContent:(id)arg1 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
@end

