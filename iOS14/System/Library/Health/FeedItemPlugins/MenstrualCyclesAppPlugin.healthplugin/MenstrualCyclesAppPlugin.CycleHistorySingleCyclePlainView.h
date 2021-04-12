/*
* Generated on Thursday, January 14, 2021 at 2:29:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/HKMCViewModelProviderObserver.h>

@interface MenstrualCyclesAppPlugin.CycleHistorySingleCyclePlainView : UIView <HKMCViewModelProviderObserver> {

	 cycleView;
	 daysLabel;
	 periodLengthLabel;
	 cycleViewModelProvider;
	 topConstraint;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewModelProviderDidUpdate:(id)arg1 ;
@end

