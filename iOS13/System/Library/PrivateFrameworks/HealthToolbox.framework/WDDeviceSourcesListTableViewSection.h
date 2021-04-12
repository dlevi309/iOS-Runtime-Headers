/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)list;
-(NSArray *)sources;
-(void)setSources:(NSArray *)arg1 ;
-(NSArray *)devices;
-(unsigned long long)numberOfRows;
-(NSMutableSet *)identifiers;
-(void)setIdentifiers:(NSMutableSet *)arg1 ;
-(void)setDevices:(NSArray *)arg1 ;
-(void)setList:(NSArray *)arg1 ;
-(void)applicationWillEnterForeground;
-(id)titleForHeader;
-(id)noneString;
-(id)titleForFooter;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(id)willSelectRow:(id)arg1 ;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setSourceListDataSource:(id)arg1 ;
-(void)_handleReturnedImage:(id)arg1 forSource:(id)arg2 cell:(id)arg3 tableView:(id)arg4 fetchError:(id)arg5 ;
-(id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)dataSourceDidUpdate;
-(void)reloadDevices;
-(void)setSources:(id)arg1 devices:(id)arg2 ;
-(id)_sourceForRow:(long long)arg1 ;
-(BOOL)_isSourceSelectable:(id)arg1 ;
@end

