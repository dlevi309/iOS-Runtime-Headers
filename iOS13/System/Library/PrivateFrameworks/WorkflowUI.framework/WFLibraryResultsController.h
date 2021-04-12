/*
* Generated on Monday, March 1, 2021 at 2:34:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WFRunnableLibraryResultsController.h>
#import <libobjc.A.dylib/WFLibraryWorkflowCellDelegate.h>

@class NSString, UISearchBar, WFDatabaseResult, WFLibraryLayoutMetrics;

@interface WFLibraryResultsController : WFRunnableLibraryResultsController <WFLibraryWorkflowCellDelegate> {

	BOOL _searching;
	NSString* _searchText;
	UISearchBar* _legacySearchBar;
	WFDatabaseResult* _allWorkflows;

}

@property (nonatomic,readonly) WFDatabaseResult * allWorkflows;                                  //@synthesize allWorkflows=_allWorkflows - In the implementation block
@property (assign,nonatomic,__weak) id<WFLibraryWorkflowCellDelegate> cellDelegate; 
@property (nonatomic,copy) WFLibraryLayoutMetrics * cellLayoutMetrics; 
@property (nonatomic,copy) NSString * searchText;                                                //@synthesize searchText=_searchText - In the implementation block
@property (assign,getter=isSearching,nonatomic) BOOL searching;                                  //@synthesize searching=_searching - In the implementation block
@property (nonatomic,retain) UISearchBar * legacySearchBar;                                      //@synthesize legacySearchBar=_legacySearchBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)libraryWorkflowCellClass;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(void)setSearching:(BOOL)arg1 ;
-(BOOL)isSearching;
-(id)searchPredicate;
-(id)initWithWorkflows:(id)arg1 collectionView:(id)arg2 runCoordinator:(id)arg3 ;
-(void)visibleWorkflowsQueryChanged;
-(UISearchBar *)legacySearchBar;
-(void)setLegacySearchBar:(UISearchBar *)arg1 ;
-(WFDatabaseResult *)allWorkflows;
@end

