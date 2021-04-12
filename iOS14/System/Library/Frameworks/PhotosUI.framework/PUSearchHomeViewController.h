/*
* Generated on Thursday, January 14, 2021 at 2:22:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUICore/PXGadgetUIViewController.h>
#import <UIKit/UISearchControllerDelegate.h>

@protocol PXViewControllerEventTracker;
@class PXProgrammaticNavigationDestination, PUSearchHomeGadgetDataSourceManager, NSString;

@interface PUSearchHomeViewController : PXGadgetUIViewController <UISearchControllerDelegate> {

	BOOL _shouldActiveSearchFieldUponAppearing;
	PXProgrammaticNavigationDestination* _px_navigationDestination;
	PUSearchHomeGadgetDataSourceManager* _searchHomeDataSourceManager;
	id<PXViewControllerEventTracker> _searchControllerEventTracker;

}

@property (nonatomic,retain) PUSearchHomeGadgetDataSourceManager * searchHomeDataSourceManager;              //@synthesize searchHomeDataSourceManager=_searchHomeDataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL shouldActiveSearchFieldUponAppearing;                                      //@synthesize shouldActiveSearchFieldUponAppearing=_shouldActiveSearchFieldUponAppearing - In the implementation block
@property (nonatomic,retain) id<PXViewControllerEventTracker> searchControllerEventTracker;                  //@synthesize searchControllerEventTracker=_searchControllerEventTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)gadgetSpecClass;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_activateSearchField;
-(void)didDismissSearchController:(id)arg1 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<PXViewControllerEventTracker>)searchControllerEventTracker;
-(id)nextExistingParticipantOnRouteToDestination:(id)arg1 ;
-(void)setSearchControllerEventTracker:(id<PXViewControllerEventTracker>)arg1 ;
-(void)_clearSearchField;
-(void)ppt_prepareForSearchTest:(/*^block*/id)arg1 ;
-(void)_configureSearchNavigationBar;
-(void)ppt_prepareForSearchScrollingTestWithSearchText:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performRecentSearchNew:(id)arg1 ;
-(void)viewDidLoad;
-(void)setSearchHomeDataSourceManager:(PUSearchHomeGadgetDataSourceManager *)arg1 ;
-(void)_notifyAnalyticsSearchAction:(unsigned long long)arg1 ;
-(void)selectZeroKeyword:(id)arg1 ;
-(unsigned long long)routingOptionsForDestination:(id)arg1 ;
-(long long)scrollAnimationIdentifier;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)pu_scrollToInitialPositionAnimated:(BOOL)arg1 ;
-(BOOL)shouldActiveSearchFieldUponAppearing;
-(void)performRecentSearch:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(PUSearchHomeGadgetDataSourceManager *)searchHomeDataSourceManager;
-(void)presentOneYearAgo;
-(id)px_navigationDestination;
-(void)presentForSearchHashtag:(id)arg1 ;
-(id)px_gridPresentation;
-(void)ppt_dismissKeyboard;
-(void)setShouldActiveSearchFieldUponAppearing:(BOOL)arg1 ;
-(void)presentSiriSearchRequest:(id)arg1 resultCount:(unsigned long long)arg2 ;
-(void)gadget:(id)arg1 didChange:(unsigned long long)arg2 ;
-(BOOL)shouldPreventPlaceholder;
-(void)ppt_prepareZeroKeywordRequest:(/*^block*/id)arg1 ;
-(void)didPresentSearchController:(id)arg1 ;
@end

