/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFDatabaseSectionedResultsController.h>
#import <UIKit/UITableViewDataSource.h>

@class NSString;

@interface WFDatabaseTableViewResultsController : WFDatabaseSectionedResultsController <UITableViewDataSource> {

	BOOL _scrollToInsertions;
	BOOL _lastChangeIsUserDriven;
	BOOL _loaded;

}

@property (assign,getter=isLoaded,nonatomic) BOOL loaded;              //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic) BOOL scrollToInsertions;                  //@synthesize scrollToInsertions=_scrollToInsertions - In the implementation block
@property (assign,nonatomic) BOOL lastChangeIsUserDriven;              //@synthesize lastChangeIsUserDriven=_lastChangeIsUserDriven - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLoaded;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)lastChangeIsUserDriven;
-(void)setLastChangeIsUserDriven:(BOOL)arg1 ;
-(id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 inTableView:(id)arg4 ;
-(id)tableView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3 ;
-(BOOL)scrollToInsertions;
-(void)setScrollToInsertions:(BOOL)arg1 ;
@end

