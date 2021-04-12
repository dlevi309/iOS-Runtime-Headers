/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)configureWithContent:(id)arg1 ;
-(void)defaultTextColorDidChange;
-(void)_updateHeaderColor;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
@end

