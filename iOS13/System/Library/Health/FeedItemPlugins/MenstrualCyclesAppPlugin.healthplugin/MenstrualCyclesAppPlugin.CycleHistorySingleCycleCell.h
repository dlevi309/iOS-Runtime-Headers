/*
* Generated on Monday, March 1, 2021 at 2:35:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
*/

#import <UIKitCore/UITableViewCell.h>
#import <libobjc.A.dylib/HKMCViewModelProviderObserver.h>

@interface MenstrualCyclesAppPlugin.CycleHistorySingleCycleCell : UITableViewCell <HKMCViewModelProviderObserver> {

	 cycleView;
	 daysLabel;
	 periodLengthLabel;
	 isSection;
	 isTopCell;
	 cycleViewModelProvider;
	 selectedFilter;

}
-(id)initWithCoder:(id)arg1 ;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)viewModelProviderDidUpdate:(id)arg1 ;
@end
