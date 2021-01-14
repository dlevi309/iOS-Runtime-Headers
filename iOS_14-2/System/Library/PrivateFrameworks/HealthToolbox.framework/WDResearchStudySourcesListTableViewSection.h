/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/WDSourcesListTableViewSection.h>

@class NSArray;

@interface WDResearchStudySourcesListTableViewSection : WDSourcesListTableViewSection {

	NSArray* _researchSources;

}

@property (nonatomic,copy) NSArray * researchSources;              //@synthesize researchSources=_researchSources - In the implementation block
-(id)titleForHeader;
-(id)titleForFooter;
-(id)cellForRow:(unsigned long long)arg1 table:(id)arg2 ;
-(unsigned long long)numberOfRows;
-(void)didSelectRow:(unsigned long long)arg1 representedByCell:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)dataSourceDidUpdate;
-(id)noneString;
-(id)_sourceCellForRow:(unsigned long long)arg1 tableView:(id)arg2 ;
-(void)setResearchSources:(NSArray *)arg1 ;
-(NSArray *)researchSources;
@end

