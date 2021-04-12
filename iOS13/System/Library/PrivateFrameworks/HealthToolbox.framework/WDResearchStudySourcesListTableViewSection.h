/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSourcesListTableViewSection.h>

@class NSArray;

@interface WDResearchStudySourcesListTableViewSection : WDSourcesListTableViewSection {

	NSArray* _researchSources;

}

@property (nonatomic,copy) NSArray * researchSources;              //@synthesize researchSources=_researchSources - In the implementation block
-(unsigned long long)numberOfRows;
-(id)titleForHeader;
-(id)noneString;
-(id)titleForFooter;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setResearchSources:(NSArray *)arg1 ;
-(NSArray *)researchSources;
-(id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)dataSourceDidUpdate;
@end

