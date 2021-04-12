/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(UITableView *)tableView;
-(void)_updatePreferredContentSize;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(UIBarButtonItem *)cancelButtonItem;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(void)_dismissViewControllerAnimated:(BOOL)arg1 ;
-(void)updateWithViewElement:(id)arg1 ;
-(id)initWithViewElement:(id)arg1 ;
-(void)_cancelButtonTouchUpInside:(id)arg1 ;
-(void)setExpandedRow:(long long)arg1 ;
-(CGSize)calculatedPreferredContentSize;
-(id)_modalPresenterPresentedViewController;
-(NSArray *)popoverEntries;
-(double)_heightForOptionAtRow:(unsigned long long)arg1 ;
-(void)setPopoverEntries:(NSArray *)arg1 ;
-(long long)expandedRow;
-(VUIPopoverDescriptor *)popoverDescriptor;
@end

