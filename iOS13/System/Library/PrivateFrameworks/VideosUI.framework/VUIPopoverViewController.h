/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class VUIPopoverDescriptor, NSArray, UIBarButtonItem, UITableView, NSString;

@interface VUIPopoverViewController : _TVBgImageLoadingViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _ignoreDismissalOnExpansionOrContraction;
	BOOL _supportsAutoDismiss;
	VUIPopoverDescriptor* _popoverDescriptor;
	long long _expandedRow;
	NSArray* _popoverEntries;
	UIBarButtonItem* _cancelButtonItem;

}

@property (assign,nonatomic) long long expandedRow;                                   //@synthesize expandedRow=_expandedRow - In the implementation block
@property (nonatomic,copy) NSArray * popoverEntries;                                  //@synthesize popoverEntries=_popoverEntries - In the implementation block
@property (nonatomic,readonly) UITableView * tableView; 
@property (nonatomic,readonly) UIBarButtonItem * cancelButtonItem;                    //@synthesize cancelButtonItem=_cancelButtonItem - In the implementation block
@property (nonatomic,readonly) CGSize calculatedPreferredContentSize; 
@property (nonatomic,readonly) VUIPopoverDescriptor * popoverDescriptor;              //@synthesize popoverDescriptor=_popoverDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)_updatePreferredContentSize;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(UIBarButtonItem *)cancelButtonItem;
-(void)updateWithViewElement:(id)arg1 ;
-(id)_modalPresenterPresentedViewController;
-(void)_cancelButtonTouchUpInside:(id)arg1 ;
-(void)setExpandedRow:(long long)arg1 ;
-(CGSize)calculatedPreferredContentSize;
-(NSArray *)popoverEntries;
-(double)_heightForOptionAtRow:(unsigned long long)arg1 ;
-(void)setPopoverEntries:(NSArray *)arg1 ;
-(long long)expandedRow;
-(VUIPopoverDescriptor *)popoverDescriptor;
@end

