/*
* Generated on Thursday, January 14, 2021 at 2:28:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFCompactDialogViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegatePrivate.h>
#import <libobjc.A.dylib/WFCompactPlatterContentClippingDelegate.h>

@class UITableView, NSMutableArray, WFChooseFromListDialogCell, NSCache, NSString;

@interface WFChooseFromListDialogViewController : WFCompactDialogViewController <UITableViewDataSource, UITableViewDelegatePrivate, WFCompactPlatterContentClippingDelegate> {

	UITableView* _listTableView;
	NSMutableArray* _selectedItems;
	WFChooseFromListDialogCell* _prototypeCell;
	NSCache* _imageCache;

}

@property (assign,nonatomic,__weak) UITableView * listTableView;                      //@synthesize listTableView=_listTableView - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedItems;                          //@synthesize selectedItems=_selectedItems - In the implementation block
@property (nonatomic,retain) WFChooseFromListDialogCell * prototypeCell;              //@synthesize prototypeCell=_prototypeCell - In the implementation block
@property (nonatomic,retain) NSCache * imageCache;                                    //@synthesize imageCache=_imageCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(NSMutableArray *)selectedItems;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setSelectedItems:(NSMutableArray *)arg1 ;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(id)initWithRequest:(id)arg1 ;
-(NSCache *)imageCache;
-(void)setImageCache:(NSCache *)arg1 ;
-(void)loadView;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)platterView:(id)arg1 didUpdateContentVerticalOffset:(double)arg2 ;
-(void)finishWithSelectedItems;
-(double)contentHeightForWidth:(double)arg1 withMaximumVisibleHeight:(double)arg2 ;
-(UITableView *)listTableView;
-(void)setListTableView:(UITableView *)arg1 ;
-(WFChooseFromListDialogCell *)prototypeCell;
-(void)setPrototypeCell:(WFChooseFromListDialogCell *)arg1 ;
@end

