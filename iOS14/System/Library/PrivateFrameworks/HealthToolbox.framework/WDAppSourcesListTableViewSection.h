/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSourcesListTableViewSection.h>

@class NSArray;

@interface WDAppSourcesListTableViewSection : WDSourcesListTableViewSection {

	BOOL _uninstalledSourcesExist;
	NSArray* _installedSources;

}

@property (nonatomic,copy) NSArray * installedSources;                  //@synthesize installedSources=_installedSources - In the implementation block
@property (assign,nonatomic) BOOL uninstalledSourcesExist;              //@synthesize uninstalledSourcesExist=_uninstalledSourcesExist - In the implementation block
-(id)titleForHeader;
-(id)titleForFooter;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(unsigned long long)numberOfRows;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dataSourceDidUpdate;
-(id)noneString;
-(void)setInstalledSources:(NSArray *)arg1 ;
-(void)setUninstalledSourcesExist:(BOOL)arg1 ;
-(NSArray *)installedSources;
-(BOOL)uninstalledSourcesExist;
-(id)_uninstalledSourcesCellWithTableView:(id)arg1 ;
-(id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
@end

