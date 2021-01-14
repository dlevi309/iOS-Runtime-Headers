/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)configureWithDescription:(id)arg1 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
@end

