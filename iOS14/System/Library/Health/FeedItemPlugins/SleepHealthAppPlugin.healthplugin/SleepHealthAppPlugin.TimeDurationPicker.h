/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/SleepHealthAppPlugin.healthplugin/SleepHealthAppPlugin
*/

#import <SleepHealthAppPlugin/SleepHealthAppPlugin-Structs.h>
#import <UIKitCore/UIView.h>

@interface SleepHealthAppPlugin.TimeDurationPicker : UIView {

	 delegate;
	 $__lazy_storage_$_formatter;
	 selectedIndex;
	 options;
	 plusButton;
	 minusButton;
	 durationLabel;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)increase;
-(void)decrease;
-(id)accessibilityDurationLabel;
@end

