/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HUSliderValueTableViewCellDelegate.h>

@protocol HUPrototypeLayoutOptionsEditorViewControllerDelegate;
@class HUGridLayoutOptions, NSArray, NSString;

@interface HUPrototypeLayoutOptionsEditorViewController : UITableViewController <HUSliderValueTableViewCellDelegate> {

	HUGridLayoutOptions* _layoutOptions;
	id<HUPrototypeLayoutOptionsEditorViewControllerDelegate> _delegate;
	NSArray* _layoutOptionsKeys;

}

@property (nonatomic,retain) NSArray * layoutOptionsKeys;                                                           //@synthesize layoutOptionsKeys=_layoutOptionsKeys - In the implementation block
@property (nonatomic,retain) HUGridLayoutOptions * layoutOptions;                                                   //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,nonatomic,__weak) id<HUPrototypeLayoutOptionsEditorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)_done:(id)arg1 ;
-(id<HUPrototypeLayoutOptionsEditorViewControllerDelegate>)delegate;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)setDelegate:(id<HUPrototypeLayoutOptionsEditorViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(HUGridLayoutOptions *)layoutOptions;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setLayoutOptions:(HUGridLayoutOptions *)arg1 ;
-(void)setLayoutOptionsKeys:(NSArray *)arg1 ;
-(id)_viewSizeSubclassDescription;
-(NSArray *)layoutOptionsKeys;
@end

