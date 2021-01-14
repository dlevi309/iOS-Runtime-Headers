/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)applicationWillEnterForeground;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)pushViewController:(id)arg1 ;
-(void)applyChangeActivity:(id)arg1 ;
-(id)applyTransitionActivity:(id)arg1 ;
-(id)uniqueUserActivityType;
-(void)viewDidLoad;
-(id)initWithProfile:(id)arg1 usingInsetStyling:(BOOL)arg2 ;
-(void)_updateActivityForViewDidAppear;
-(void)setRestorationSourceBundleIdentifier:(NSString *)arg1 ;
-(NSString *)restorationSourceBundleIdentifier;
@end

