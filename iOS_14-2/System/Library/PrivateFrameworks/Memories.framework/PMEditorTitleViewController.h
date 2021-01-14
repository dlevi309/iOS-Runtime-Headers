/*
* Generated on Thursday, January 14, 2021 at 2:27:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol TitleChangeInformable;
@class PMTitleEditorProvider, UITableView, UITableViewCell, NSString;

@interface PMEditorTitleViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate> {

	BOOL _sizeIsTransitioning;
	PMTitleEditorProvider* _titleProvider;
	id<TitleChangeInformable> _titleChangeInformableDelegate;
	UITableView* _tableView;
	UITableViewCell* _collectionViewControllerCell;
	long long _activeCellIndex;
	NSString* _activeCellText;

}

@property (nonatomic,retain) UITableViewCell * collectionViewControllerCell;                              //@synthesize collectionViewControllerCell=_collectionViewControllerCell - In the implementation block
@property (assign,nonatomic) long long activeCellIndex;                                                   //@synthesize activeCellIndex=_activeCellIndex - In the implementation block
@property (nonatomic,retain) NSString * activeCellText;                                                   //@synthesize activeCellText=_activeCellText - In the implementation block
@property (assign,nonatomic) BOOL sizeIsTransitioning;                                                    //@synthesize sizeIsTransitioning=_sizeIsTransitioning - In the implementation block
@property (nonatomic,retain) PMTitleEditorProvider * titleProvider;                                       //@synthesize titleProvider=_titleProvider - In the implementation block
@property (assign,nonatomic,__weak) id<TitleChangeInformable> titleChangeInformableDelegate;              //@synthesize titleChangeInformableDelegate=_titleChangeInformableDelegate - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                                     //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(UITableView *)tableView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)textDidChange:(id)arg1 ;
-(void)updateFonts;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(PMTitleEditorProvider *)titleProvider;
-(void)setTitleProvider:(PMTitleEditorProvider *)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)setTitleChangeInformableDelegate:(id<TitleChangeInformable>)arg1 ;
-(void)setActiveCellIndex:(long long)arg1 ;
-(void)setSizeIsTransitioning:(BOOL)arg1 ;
-(long long)activeCellIndex;
-(NSString *)activeCellText;
-(void)setActiveCellText:(NSString *)arg1 ;
-(id<TitleChangeInformable>)titleChangeInformableDelegate;
-(UITableViewCell *)collectionViewControllerCell;
-(void)setCollectionViewControllerCell:(UITableViewCell *)arg1 ;
-(BOOL)sizeIsTransitioning;
@end

