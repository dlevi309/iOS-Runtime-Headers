/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSourcesListTableViewSection.h>

@class NSArray, NSMutableSet;

@interface WDDeviceSourcesListTableViewSection : WDSourcesListTableViewSection {

	NSArray* _list;
	NSArray* _sources;
	NSArray* _devices;
	NSMutableSet* _identifiers;

}

@property (nonatomic,copy) NSArray * list;                            //@synthesize list=_list - In the implementation block
@property (nonatomic,copy) NSArray * sources;                         //@synthesize sources=_sources - In the implementation block
@property (nonatomic,copy) NSArray * devices;                         //@synthesize devices=_devices - In the implementation block
@property (nonatomic,retain) NSMutableSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
-(void)applicationWillEnterForeground;
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)list;
-(NSArray *)devices;
-(NSMutableSet *)identifiers;
-(void)setDevices:(NSArray *)arg1 ;
-(id)titleForHeader;
-(id)titleForFooter;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(unsigned long long)numberOfRows;
-(id)willSelectRow:(id)arg1 ;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSArray *)sources;
-(void)setList:(NSArray *)arg1 ;
-(void)setIdentifiers:(NSMutableSet *)arg1 ;
-(void)setSourceListDataSource:(id)arg1 ;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5 ;
-(void)dataSourceDidUpdate;
-(id)noneString;
-(id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)reloadDevices;
-(void)setSources:(id)arg1 devices:(id)arg2 ;
-(id)_sourceForRow:(long long)arg1 ;
-(BOOL)_isSourceSelectable:(id)arg1 ;
@end

