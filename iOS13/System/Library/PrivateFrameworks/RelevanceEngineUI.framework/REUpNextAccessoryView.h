/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngineUI.framework/RelevanceEngineUI
*/

#import <RelevanceEngineUI/RelevanceEngineUI-Structs.h>
#import <UIKitCore/UIView.h>

@class REAccessoryDescription, UILabel, UIVisualEffectView;

@interface REUpNextAccessoryView : UIView {

	REAccessoryDescription* _accessoryDescription;
	UILabel* _label;
	UIVisualEffectView* _labelEffectView;

}
+(void)initialize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(id)viewForLastBaselineLayout;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(void)configureWithDescription:(id)arg1 ;
@end

