/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewController.h>
#import <SearchUI/SearchUITableHeaderViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SearchUI/SearchUIShowMoreSectionsDelegate.h>

@class NSString, NSMutableSet, NSArray, NSMutableOrderedSet;

@interface SearchUIResultsTableViewController : SearchUITableViewController <SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate, SearchUIShowMoreSectionsDelegate> {

	BOOL _shortenTopFloatingHeader;
	NSString* _queryString;
	NSMutableSet* _expandedSections;
	NSMutableSet* _sectionsThatHaveBeenExpanded;
	NSArray* _hiddenSections;
	NSMutableSet* _potentiallyVisibleCells;
	NSMutableOrderedSet* _latestVisibleResultsAccountedForInFeedback;
	unsigned long long _lastVisibleResultsFeedbackEvent;
	NSMutableOrderedSet* _potentiallyVisibleHeaders;
	NSArray* _latestVisibleHeadersAccountedForInFeedback;
	double _cachedHeaderHeight;

}

@property (nonatomic,retain) NSMutableSet * expandedSections;                                               //@synthesize expandedSections=_expandedSections - In the implementation block
@property (nonatomic,retain) NSMutableSet * sectionsThatHaveBeenExpanded;                                   //@synthesize sectionsThatHaveBeenExpanded=_sectionsThatHaveBeenExpanded - In the implementation block
@property (nonatomic,retain) NSArray * hiddenSections;                                                      //@synthesize hiddenSections=_hiddenSections - In the implementation block
@property (nonatomic,retain) NSMutableSet * potentiallyVisibleCells;                                        //@synthesize potentiallyVisibleCells=_potentiallyVisibleCells - In the implementation block
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
+(id)hiddenSectionsFromSections:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg2 ;
-(double)cachedHeaderHeight;
-(BOOL)sectionShouldBeExpanded:(id)arg1 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)setSectionsThatHaveBeenExpanded:(NSMutableSet *)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)init;
-(id)commandEnvironment;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(NSMutableOrderedSet *)potentiallyVisibleHeaders;
-(double)offScreenContentScrollDistance;
-(void)expandCellsIfNeeded;
-(void)scrollSectionToTop:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(NSMutableSet *)potentiallyVisibleCells;
-(void)purgeMemory;
-(void)sendVisibleFeedbackIfNecessary;
-(NSString *)queryString;
-(NSArray *)latestVisibleHeadersAccountedForInFeedback;
-(void)setQueryString:(NSString *)arg1 ;
-(void)showMoreSectionsWithShowMoreButtonRowModel:(id)arg1 ;
-(NSMutableOrderedSet *)latestVisibleResultsAccountedForInFeedback;
-(void)updateWithResultSections:(id)arg1 scrollToTop:(BOOL)arg2 ;
-(void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(id)visibleResultsWithinRegion:(CGRect)arg1 ;
-(void)performExpansion:(BOOL)arg1 withSectionIndex:(unsigned long long)arg2 ;
-(NSArray *)hiddenSections;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(void)purgeAndResetTable;
-(void)didEngageResult:(id)arg1 ;
-(NSMutableSet *)expandedSections;
-(void)setLastVisibleResultsFeedbackEvent:(unsigned long long)arg1 ;
-(void)setCachedHeaderHeight:(double)arg1 ;
-(NSMutableSet *)sectionsThatHaveBeenExpanded;
-(void)setHiddenSections:(NSArray *)arg1 ;
-(void)setLatestVisibleHeadersAccountedForInFeedback:(NSArray *)arg1 ;
-(void)setPotentiallyVisibleCells:(NSMutableSet *)arg1 ;
-(void)setPotentiallyVisibleHeaders:(NSMutableOrderedSet *)arg1 ;
-(BOOL)shortenTopFloatingHeader;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)setShouldUseInsetRoundedSections:(BOOL)arg1 ;
-(void)highlightResult:(id)arg1 ;
-(void)replaceResult:(id)arg1 withResult:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 reuseIfPossible:(BOOL)arg2 ;
-(void)setShortenTopFloatingHeader:(BOOL)arg1 ;
-(void)setExpandedSections:(NSMutableSet *)arg1 ;
-(void)toggleShowMoreForSection:(unsigned long long)arg1 ;
-(void)setLatestVisibleResultsAccountedForInFeedback:(NSMutableOrderedSet *)arg1 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(unsigned long long)lastVisibleResultsFeedbackEvent;
-(double)headerHeight;
-(BOOL)view:(id)arg1 isVisibleInBounds:(CGRect)arg2 ;
-(BOOL)updateMustAccountForLayout;
-(void)viewDidLayoutSubviews;
-(void)scrollTableToTop;
-(void)modalViewControllerClosed;
-(id)indexPathToSelectForKeyboardOnQuickReturn;
-(void)toggleExpansionForSection:(id)arg1 ;
@end

