/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosExtrasTemplateViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, UIImageView, NSArray, NSMapTable, NSIndexPath, VideosExtrasViewElementViewController, NSString;

@interface VideosExtrasListTemplateViewController : VideosExtrasTemplateViewController <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	BOOL _tableViewLeft;
	UIImageView* _vignetteView;
	BOOL _relatedContentEmbedded;
	NSArray* _masterViewConstraints;
	NSArray* _detailViewConstraints;
	NSMapTable* _relatedContentViewControllerMap;
	NSIndexPath* _autohighlightIndexPath;
	VideosExtrasViewElementViewController* _relatedContentViewController;

}

@property (nonatomic,retain) VideosExtrasViewElementViewController * relatedContentViewController;              //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)relatedContentViewControllerForElement:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)templateElement;
-(BOOL)showsPlaceholder;
-(void)_prepareLayout;
-(BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1 ;
-(id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3 ;
-(void)_configureBannerWithElement:(id)arg1 ;
-(void)setRelatedContentViewController:(VideosExtrasViewElementViewController *)arg1 ;
-(void)_updateForTemplate:(id)arg1 ;
-(void)_updateRelatedContent:(id)arg1 forListItem:(id)arg2 ;
-(VideosExtrasViewElementViewController *)relatedContentViewController;
-(void)_embedRelatedContentViewController;
-(void)_unembedRelatedContent;
-(void)_pushRelatedViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setDetailContraints;
-(void)_setRelatedContentEmbedded:(BOOL)arg1 ;
-(void)_addConstraintsToTableView:(id)arg1 ;
-(void)_configureVignette:(BOOL)arg1 ;
-(void)_setNavigationConstraints;
@end

