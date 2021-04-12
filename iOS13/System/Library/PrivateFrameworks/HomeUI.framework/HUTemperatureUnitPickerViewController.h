/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@class HFSimpleItemManager, NSString;

@interface HUTemperatureUnitPickerViewController : UITableViewController <HFItemManagerDelegate> {

	HFSimpleItemManager* _itemManager;

}

@property (nonatomic,retain) HFSimpleItemManager * itemManager;              //@synthesize itemManager=_itemManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(HFSimpleItemManager *)itemManager;
-(void)setItemManager:(HFSimpleItemManager *)arg1 ;
-(id)_controlItem;
-(void)itemManager:(id)arg1 didUpdateResultsForSourceItem:(id)arg2 ;
-(id)initWithUnitItem:(id)arg1 ;
-(long long)_tableRowToTemperatureUnit:(unsigned long long)arg1 ;
@end

