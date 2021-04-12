/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol AKToolsListViewControllerDelegate;
@class UITableView, NSArray, NSString;

@interface AKToolsListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _supportsOpacityEditing;
	id<AKToolsListViewControllerDelegate> _delegate;
	UITableView* _tableView;
	NSArray* _cellItemTypes;

}

@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * cellItemTypes;                                              //@synthesize cellItemTypes=_cellItemTypes - In the implementation block
@property (assign,nonatomic,__weak) id<AKToolsListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL supportsOpacityEditing;                                        //@synthesize supportsOpacityEditing=_supportsOpacityEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCellItemTypes;
-(id)initWithCoder:(id)arg1 ;
-(id<AKToolsListViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AKToolsListViewControllerDelegate>)arg1 ;
-(UITableView *)tableView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)setSupportsOpacityEditing:(BOOL)arg1 ;
-(BOOL)supportsOpacityEditing;
-(void)_shapeButtonPressed:(id)arg1 ;
-(id)_buttonViewForShapes;
-(NSArray *)cellItemTypes;
-(id)_buttonViewForText;
-(void)addRowView:(id)arg1 toCellView:(id)arg2 ;
-(id)_buttonViewForSignature;
-(id)_buttonViewForLoupe;
-(id)_buttonViewForOpacity;
-(long long)_shapesCellIndexRow;
-(id)_buttonViewWithImage:(id)arg1 title:(id)arg2 ;
-(void)setCellItemTypes:(NSArray *)arg1 ;
-(void)_reloadCellItemTypes;
@end

