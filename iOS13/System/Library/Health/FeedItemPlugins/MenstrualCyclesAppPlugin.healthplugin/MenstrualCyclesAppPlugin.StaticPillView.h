/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UIView.h>

@interface MenstrualCyclesAppPlugin.StaticPillView : UIView {

	 viewModel;
	 isFutureDay;
	 $__lazy_storage_$_fertilityProjectionReversed;
	 $__lazy_storage_$_menstruationProjectionHighReversed;
	 $__lazy_storage_$_menstruationProjectionLowReversed;
	 $__lazy_storage_$_pill;
	 $__lazy_storage_$_pillMask;
	 $__lazy_storage_$_menstruationIndicator;
	 $__lazy_storage_$_menstruationIndicatorMask;
	 $__lazy_storage_$_logIndicator;
	 configuration;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
@end

