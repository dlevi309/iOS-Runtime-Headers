/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthUI/HKTableViewController.h>
#import <libobjc.A.dylib/HKSourceListDataSourceObserver.h>

@class WDProfile, HKSourceListDataSource, NSArray, UIImage;

@interface WDUninstalledAppSourcesViewController : HKTableViewController <HKSourceListDataSourceObserver> {

	WDProfile* _profile;
	HKSourceListDataSource* _dataSource;
	NSArray* _uninstalledSources;

}

@property (nonatomic,copy) NSArray * uninstalledSources;                       //@synthesize uninstalledSources=_uninstalledSources - In the implementation block
@property (readonly) UIImage * uninistalledAppImage; 
@property (nonatomic,retain) WDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) HKSourceListDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)setProfile:(WDProfile *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(HKSourceListDataSource *)dataSource;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDataSource:(HKSourceListDataSource *)arg1 ;
-(WDProfile *)profile;
-(void)sourceListDataSourceDidUpdate:(id)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)updateUninstalledSources;
-(void)setUninstalledSources:(NSArray *)arg1 ;
-(NSArray *)uninstalledSources;
-(UIImage *)uninistalledAppImage;
@end

