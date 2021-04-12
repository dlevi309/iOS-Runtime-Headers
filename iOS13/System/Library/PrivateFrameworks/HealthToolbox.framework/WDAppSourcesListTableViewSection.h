/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)numberOfRows;
-(id)titleForHeader;
-(id)noneString;
-(id)titleForFooter;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)dataSourceDidUpdate;
-(void)setInstalledSources:(NSArray *)arg1 ;
-(void)setUninstalledSourcesExist:(BOOL)arg1 ;
-(NSArray *)installedSources;
-(BOOL)uninstalledSourcesExist;
-(id)_uninstalledSourcesCellWithTableView:(id)arg1 ;
@end

