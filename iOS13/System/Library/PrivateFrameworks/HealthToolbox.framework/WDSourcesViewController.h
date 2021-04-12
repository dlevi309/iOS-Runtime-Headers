/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDHealthTableViewController.h>
#import <libobjc.A.dylib/WDUserActivityResponder.h>

@class HKSourceListDataSource, NSString;

@interface WDSourcesViewController : WDHealthTableViewController <WDUserActivityResponder> {

	HKSourceListDataSource* _dataSource;
	NSString* _restorationSourceBundleIdentifier;

}

@property (nonatomic,copy) NSString * restorationSourceBundleIdentifier;              //@synthesize restorationSourceBundleIdentifier=_restorationSourceBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tableViewSectionClasses;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)applicationWillEnterForeground;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)uniqueUserActivityType;
-(void)pushViewController:(id)arg1 ;
-(id)initWithProfile:(id)arg1 usingInsetStyling:(BOOL)arg2 ;
-(void)_updateActivityForViewDidAppear;
-(NSString *)restorationSourceBundleIdentifier;
-(void)setRestorationSourceBundleIdentifier:(NSString *)arg1 ;
@end

