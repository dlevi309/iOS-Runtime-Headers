/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _isDeviceLocked;
	id<AKToolsListViewControllerDelegate> _delegate;
	UITableView* _tableView;
	NSArray* _cellItemTypes;

}

@property (nonatomic,retain) UITableView * tableView;                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) NSArray * cellItemTypes;                                              //@synthesize cellItemTypes=_cellItemTypes - In the implementation block
@property (assign,nonatomic) BOOL isDeviceLocked;                                                //@synthesize isDeviceLocked=_isDeviceLocked - In the implementation block
@property (assign,nonatomic,__weak) id<AKToolsListViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL supportsOpacityEditing;                                        //@synthesize supportsOpacityEditing=_supportsOpacityEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultCellItemTypes;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<AKToolsListViewControllerDelegate>)delegate;
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(BOOL)isDeviceLocked;
-(void)setDelegate:(id<AKToolsListViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)supportsOpacityEditing;
-(void)setSupportsOpacityEditing:(BOOL)arg1 ;
-(void)_shapeButtonPressed:(id)arg1 ;
-(id)_buttonViewForShapes;
-(NSArray *)cellItemTypes;
-(id)_buttonViewForText;
-(void)addRowView:(id)arg1 toCellView:(id)arg2 ;
-(id)_buttonViewForSignature;
-(id)_buttonViewForLoupe;
-(id)_buttonViewForOpacity;
-(long long)_shapesCellIndexRow;
-(id)_buttonViewWithImage:(id)arg1 title:(id)arg2 tintColor:(id)arg3 ;
-(void)setCellItemTypes:(NSArray *)arg1 ;
-(void)_reloadCellItemTypes;
-(void)_updateDeviceLocked;
-(void)setIsDeviceLocked:(BOOL)arg1 ;
@end

