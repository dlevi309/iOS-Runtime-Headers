/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/WirelessModemSettings.bundle/WirelessModemSettings
*/

#import <WirelessModemSettings/WirelessModemSettings-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSMutableArray, UIImageView;

@interface SetupView : UIView {

	UILabel* _title;
	NSMutableArray* _setupSteps;
	UIImageView* _icon;
	long long _layoutDirection;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)icon;
-(void)setTitle:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)layoutSubviews;
-(void)addStep:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)title;
-(id)_preferenceLabelWithText:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(BOOL)arg2 ;
@end

