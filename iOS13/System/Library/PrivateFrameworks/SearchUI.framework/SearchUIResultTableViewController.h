/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewController.h>
#import <SearchUI/SearchUITableHeaderViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSString, NSMutableSet, NSMutableOrderedSet, NSArray;

@interface SearchUIResultTableViewController : SearchUITableViewController <SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _shortenTopFloatingHeader;
	NSString* _queryString;
	NSMutableSet* _expandedSections;
	NSMutableSet* _sectionsThatHaveBeenExpanded;
	NSMutableOrderedSet* _potentiallyVisibleCells;
	NSMutableOrderedSet* _latestVisibleResultsAccountedForInFeedback;
	unsigned long long _lastVisibleResultsFeedbackEvent;
	NSMutableOrderedSet* _potentiallyVisibleHeaders;
	NSArray* _latestVisibleHeadersAccountedForInFeedback;
	double _cachedHeaderHeight;

}

@property (nonatomic,retain) NSMutableSet * expandedSections;                                               //@synthesize expandedSections=_expandedSections - In the implementation block
@property (nonatomic,retain) NSMutableSet * sectionsThatHaveBeenExpanded;                                   //@synthesize sectionsThatHaveBeenExpanded=_sectionsThatHaveBeenExpanded - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * potentiallyVisibleCells;                                 //@synthesize potentiallyVisibleCells=_potentiallyVisibleCells - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * latestVisibleResultsAccountedForInFeedback;              //@synthesize latestVisibleResultsAccountedForInFeedback=_latestVisibleResultsAccountedForInFeedback - In the implementation block
@property (assign,nonatomic) unsigned long long lastVisibleResultsFeedbackEvent;                            //@synthesize lastVisibleResultsFeedbackEvent=_lastVisibleResultsFeedbackEvent - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * potentiallyVisibleHeaders;                               //@synthesize potentiallyVisibleHeaders=_potentiallyVisibleHeaders - In the implementation block
@property (nonatomic,retain) NSArray * latestVisibleHeadersAccountedForInFeedback;                          //@synthesize latestVisibleHeadersAccountedForInFeedback=_latestVisibleHeadersAccountedForInFeedback - In the implementation block
@property (assign,nonatomic) double cachedHeaderHeight;                                                     //@synthesize cachedHeaderHeight=_cachedHeaderHeight - In the implementation block
@property (nonatomic,readonly) double headerHeight; 
@property (nonatomic,retain) NSString * queryString;                                                        //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) BOOL shortenTopFloatingHeader;                                                 //@synthesize shortenTopFloatingHeader=_shortenTopFloatingHeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)fetchContactsIfNeededForTableModel:(id)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(double)headerHeight;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(void)didEngageResult:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(double)offScreenContentScrollDistance;
-(BOOL)sectionIsClearable:(id)arg1 ;
-(void)clearResultsFromSection:(id)arg1 ;
-(void)toggleExpansionForSection:(id)arg1 ;
-(id)viewControllerForIndexPath:(id)arg1 isPeek:(BOOL)arg2 ;
-(id)fallbackPeekViewControllerForIndexPath:(id)arg1 ;
-(unsigned long long)handleSelectionAtIndexPath:(id)arg1 wasPop:(BOOL)arg2 ;
-(BOOL)updateMustAccountForLayout;
-(void)toggleShowMoreForSection:(unsigned long long)arg1 ;
-(void)purgeMemory;
-(void)modalViewControllerClosed;
-(void)setExpandedSections:(NSMutableSet *)arg1 ;
-(void)setSectionsThatHaveBeenExpanded:(NSMutableSet *)arg1 ;
-(void)setPotentiallyVisibleCells:(NSMutableOrderedSet *)arg1 ;
-(void)setLatestVisibleResultsAccountedForInFeedback:(NSMutableOrderedSet *)arg1 ;
-(void)setPotentiallyVisibleHeaders:(NSMutableOrderedSet *)arg1 ;
-(void)setLatestVisibleHeadersAccountedForInFeedback:(NSArray *)arg1 ;
-(void)setCachedHeaderHeight:(double)arg1 ;
-(void)purgeAndResetTable;
-(void)expandCellsIfNeeded;
-(void)sendVisibleFeedbackIfNecessary;
-(NSMutableOrderedSet *)latestVisibleResultsAccountedForInFeedback;
-(void)setLastVisibleResultsFeedbackEvent:(unsigned long long)arg1 ;
-(NSMutableSet *)expandedSections;
-(NSMutableSet *)sectionsThatHaveBeenExpanded;
-(void)scrollTableToTop;
-(BOOL)sectionShouldBeExpanded:(id)arg1 ;
-(NSMutableOrderedSet *)potentiallyVisibleHeaders;
-(NSMutableOrderedSet *)potentiallyVisibleCells;
-(void)scrollSectionToTop:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(unsigned long long)handleSelectionOfResult:(id)arg1 ;
-(BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)arg1 performOpenIfSo:(BOOL)arg2 ;
-(BOOL)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)arg1 ;
-(BOOL)shortenTopFloatingHeader;
-(double)cachedHeaderHeight;
-(void)performExpansion:(BOOL)arg1 withSectionIndex:(unsigned long long)arg2 ;
-(BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg1 ;
-(id)indexPathToSelectForKeyboardOnQuickReturn;
-(BOOL)view:(id)arg1 isVisibleInBounds:(CGRect)arg2 ;
-(unsigned long long)lastVisibleResultsFeedbackEvent;
-(NSArray *)latestVisibleHeadersAccountedForInFeedback;
-(void)updateWithResultSections:(id)arg1 scrollToTop:(BOOL)arg2 ;
-(void)setShortenTopFloatingHeader:(BOOL)arg1 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 ;
@end

