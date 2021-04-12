/*
* Generated on Monday, March 1, 2021 at 2:34:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)title;
-(void)setTitle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)icon;
-(void)setIcon:(id)arg1 ;
-(void)addStep:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 shouldSetSize:(BOOL)arg2 ;
-(id)_preferenceLabelWithText:(id)arg1 ;
@end

