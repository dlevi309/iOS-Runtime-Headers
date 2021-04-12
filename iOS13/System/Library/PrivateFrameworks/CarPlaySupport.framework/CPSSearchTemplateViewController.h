/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UISearchContainerViewController.h>
#import <UIKit/UISearchResultsUpdating.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <libobjc.A.dylib/CPListTemplateDelegate.h>
#import <libobjc.A.dylib/CPSBaseTemplateViewController.h>
#import <libobjc.A.dylib/CPSearchTemplateProviding.h>

@protocol CPSTemplateViewControllerDelegate, CPTemplateDelegate;
@class NAFuture, CPTemplate, CPSearchTemplate, NSString;

@interface CPSSearchTemplateViewController : UISearchContainerViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CPListTemplateDelegate, CPSBaseTemplateViewController, CPSearchTemplateProviding> {

	BOOL _didPop;
	BOOL _didDisappear;
	NAFuture* _templateProviderFuture;
	id<CPSTemplateViewControllerDelegate> _viewControllerDelegate;
	CPTemplate* _associatedTemplate;
	id<CPTemplateDelegate> _templateDelegate;

}

@property (nonatomic,readonly) CPSearchTemplate * searchTemplate; 
@property (nonatomic,__weak,readonly) id<CPSearchClientTemplateDelegate> searchTemplateDelegate; 
@property (assign,nonatomic) BOOL didPop;                                                                      //@synthesize didPop=_didPop - In the implementation block
@property (assign,nonatomic) BOOL didDisappear;                                                                //@synthesize didDisappear=_didDisappear - In the implementation block
@property (assign,nonatomic,__weak) id<CPSTemplateViewControllerDelegate> viewControllerDelegate;              //@synthesize viewControllerDelegate=_viewControllerDelegate - In the implementation block
@property (nonatomic,retain) CPTemplate * associatedTemplate;                                                  //@synthesize associatedTemplate=_associatedTemplate - In the implementation block
@property (nonatomic,retain) id<CPTemplateDelegate> templateDelegate;                                          //@synthesize templateDelegate=_templateDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NAFuture * templateProviderFuture;                                              //@synthesize templateProviderFuture=_templateProviderFuture - In the implementation block
-(void)_cleanup;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(id<CPSTemplateViewControllerDelegate>)viewControllerDelegate;
-(void)setViewControllerDelegate:(id<CPSTemplateViewControllerDelegate>)arg1 ;
-(BOOL)didDisappear;
-(void)setDidDisappear:(BOOL)arg1 ;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NAFuture *)templateProviderFuture;
-(CPTemplate *)associatedTemplate;
-(void)_cps_viewControllerWasPopped;
-(void)setAssociatedTemplate:(CPTemplate *)arg1 ;
-(id)initWithSearchController:(id)arg1 searchTemplate:(id)arg2 templateDelegate:(id)arg3 ;
-(BOOL)didPop;
-(void)setDidPop:(BOOL)arg1 ;
-(id<CPSearchClientTemplateDelegate>)searchTemplateDelegate;
-(CPSearchTemplate *)searchTemplate;
@end

