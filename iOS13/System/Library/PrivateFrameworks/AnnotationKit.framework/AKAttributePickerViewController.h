/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol AKAttributePickerViewControllerDelegate;
@class AKController, NSSet, UITableView, NSArray, NSString;

@interface AKAttributePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {

	AKController* _controller;
	id<AKAttributePickerViewControllerDelegate> _delegate;
	NSSet* _selectedAnnotations;
	UITableView* _tableView;
	NSArray* _rowViews;

}

@property (__weak) AKController * controller;                                                          //@synthesize controller=_controller - In the implementation block
@property (retain) UITableView * tableView;                                                            //@synthesize tableView=_tableView - In the implementation block
@property (retain) NSArray * rowViews;                                                                 //@synthesize rowViews=_rowViews - In the implementation block
@property (assign,nonatomic,__weak) id<AKAttributePickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * selectedAnnotations;                                              //@synthesize selectedAnnotations=_selectedAnnotations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AKAttributePickerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AKAttributePickerViewControllerDelegate>)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)_updatePreferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(NSSet *)selectedAnnotations;
-(void)setRowViews:(NSArray *)arg1 ;
-(void)setSelectedAnnotations:(NSSet *)arg1 ;
-(NSArray *)rowViews;
-(void)revalidateItems;
-(id)initWithController:(id)arg1 selectedAnnotations:(id)arg2 ;
-(void)updateLayoutForSelectedAnnotations;
-(void)_lineAttributesChanged:(id)arg1 ;
-(void)_attributeStyleChanged:(id)arg1 ;
@end

