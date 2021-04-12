/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CPSDataSource.h>
#import <libobjc.A.dylib/CPSessionConfigurationDelegate.h>

@class NSMutableArray, CPSessionConfiguration, NSString;

@interface CPSSectionedDataSource : CPSDataSource <CPSessionConfigurationDelegate> {

	BOOL _limitingWithSections;
	long long _maxVisibleSection;
	long long _numberOfVisibleItemsInLastSection;
	NSMutableArray* _sections;
	CPSessionConfiguration* _sessionConfiguration;

}

@property (nonatomic,retain) NSMutableArray * sections;                                  //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) CPSessionConfiguration * sessionConfiguration;              //@synthesize sessionConfiguration=_sessionConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(id)initWithSection:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(NSMutableArray *)sections;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(void)setSections:(NSMutableArray *)arg1 ;
-(void)deleteSectionAtIndex:(unsigned long long)arg1 ;
-(long long)_filteredNumberOfItemsGivenSection:(long long)arg1 numberOfItems:(long long)arg2 ;
-(id)sectionAtIndex:(long long)arg1 ;
-(id)initWithSections:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)insertSection:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)appendSection:(id)arg1 ;
-(CPSessionConfiguration *)sessionConfiguration;
-(void)setSessionConfiguration:(CPSessionConfiguration *)arg1 ;
-(void)updateSections:(id)arg1 ;
-(void)sessionConfiguration:(id)arg1 limitedUserInterfacesChanged:(unsigned long long)arg2 ;
-(BOOL)isLimitingLists;
-(id)_sanitizedSectionIndexTitleForTitle:(id)arg1 ;
@end

