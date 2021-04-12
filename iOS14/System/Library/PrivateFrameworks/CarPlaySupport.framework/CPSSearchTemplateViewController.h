/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@class NAFuture, CPTemplate, CPListTemplate, CPSearchTemplate, NSString;

@interface CPSSearchTemplateViewController : UISearchContainerViewController <UISearchResultsUpdating, UISearchBarDelegate, UISearchControllerDelegate, CPListTemplateDelegate, CPSBaseTemplateViewController, CPSearchTemplateProviding> {

	BOOL _didPop;
	BOOL _didDisappear;
	NAFuture* _templateProviderFuture;
	id<CPSTemplateViewControllerDelegate> _viewControllerDelegate;
	CPTemplate* _associatedTemplate;
	id<CPTemplateDelegate> _templateDelegate;
	CPListTemplate* _listTemplate;

}

@property (nonatomic,retain) CPListTemplate * listTemplate;                                                    //@synthesize listTemplate=_listTemplate - In the implementation block
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_cleanup;
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)didDismissSearchController:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setViewControllerDelegate:(id<CPSTemplateViewControllerDelegate>)arg1 ;
-(BOOL)didPop;
-(void)viewDidLoad;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)didDisappear;
-(void)setDidDisappear:(BOOL)arg1 ;
-(BOOL)searchBarShouldEndEditing:(id)arg1 ;
-(id<CPSTemplateViewControllerDelegate>)viewControllerDelegate;
-(id<CPTemplateDelegate>)templateDelegate;
-(void)setTemplateDelegate:(id<CPTemplateDelegate>)arg1 ;
-(NAFuture *)templateProviderFuture;
-(CPListTemplate *)listTemplate;
-(void)setListTemplate:(CPListTemplate *)arg1 ;
-(void)listTemplate:(id)arg1 didSelectListItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CPTemplate *)associatedTemplate;
-(void)setAssociatedTemplate:(CPTemplate *)arg1 ;
-(void)_cps_viewControllerWasPopped;
-(id)initWithSearchTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3 interactionModel:(unsigned long long)arg4 ;
-(void)setDidPop:(BOOL)arg1 ;
-(id<CPSearchClientTemplateDelegate>)searchTemplateDelegate;
-(CPSearchTemplate *)searchTemplate;
-(BOOL)_isSceneActive;
@end

