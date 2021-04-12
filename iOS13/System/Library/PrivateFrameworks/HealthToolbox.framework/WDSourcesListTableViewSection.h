/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDTableViewSection.h>
#import <libobjc.A.dylib/WDSourceTableViewSection.h>
#import <libobjc.A.dylib/HKSourceListDataSourceObserver.h>

@class HKSourceListDataSource, NSString;

@interface WDSourcesListTableViewSection : WDTableViewSection <WDSourceTableViewSection, HKSourceListDataSourceObserver> {

	HKSourceListDataSource* _dataSource;
	NSString* _restorationSourceBundleIdentifier;

}

@property (nonatomic,retain) HKSourceListDataSource * dataSource;                     //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,copy) NSString * restorationSourceBundleIdentifier;              //@synthesize restorationSourceBundleIdentifier=_restorationSourceBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(HKSourceListDataSource *)dataSource;
-(void)setDataSource:(HKSourceListDataSource *)arg1 ;
-(double)estimatedHeightForRow:(unsigned long long)arg1 ;
-(double)heightForRow:(unsigned long long)arg1 ;
-(id)noneString;
-(void)sourceListDataSourceDidUpdate:(id)arg1 ;
-(void)setSourceListDataSource:(id)arg1 ;
-(NSString *)restorationSourceBundleIdentifier;
-(id)detailViewControllerForSourceModel:(id)arg1 ;
-(void)setRestorationSourceBundleIdentifier:(NSString *)arg1 ;
-(id)noneCellForTableView:(id)arg1 ;
-(void)dataSourceDidUpdate;
@end

