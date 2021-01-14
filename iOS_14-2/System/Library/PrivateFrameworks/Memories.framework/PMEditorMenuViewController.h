/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/PMEditorBasePlayerViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol PMEditorMenuViewControllerDelegate;
@class VEKProduction, PMTitleEditorProvider, UITableView, NSIndexPath, NSString;

@interface PMEditorMenuViewController : PMEditorBasePlayerViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _showingActivityIndicatorForContentEditor;
	VEKProduction* _production;
	PMTitleEditorProvider* _titleProvider;
	id<PMEditorMenuViewControllerDelegate> _menuDelegate;
	UITableView* _tableView;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,retain) VEKProduction * production;                                              //@synthesize production=_production - In the implementation block
@property (nonatomic,retain) PMTitleEditorProvider * titleProvider;                                   //@synthesize titleProvider=_titleProvider - In the implementation block
@property (assign,nonatomic,__weak) id<PMEditorMenuViewControllerDelegate> menuDelegate;              //@synthesize menuDelegate=_menuDelegate - In the implementation block
@property (assign,nonatomic) BOOL showingActivityIndicatorForContentEditor;                           //@synthesize showingActivityIndicatorForContentEditor=_showingActivityIndicatorForContentEditor - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                         //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(VEKProduction *)production;
-(void)_updateFonts;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(PMTitleEditorProvider *)titleProvider;
-(void)setTitleProvider:(PMTitleEditorProvider *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(void)setProduction:(VEKProduction *)arg1 ;
-(void)popFromNavigationController;
-(void)setMenuDelegate:(id<PMEditorMenuViewControllerDelegate>)arg1 ;
-(void)setShowingActivityIndicatorForContentEditor:(BOOL)arg1 ;
-(id<PMEditorMenuViewControllerDelegate>)menuDelegate;
-(id)_normalizedIndexPathForRow:(long long)arg1 inSection:(long long)arg2 ;
-(id)_getTimeStringFromSeconds:(double)arg1 ;
-(BOOL)showingActivityIndicatorForContentEditor;
@end

