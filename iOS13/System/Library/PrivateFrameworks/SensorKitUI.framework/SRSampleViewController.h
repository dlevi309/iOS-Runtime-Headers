/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSString;

@interface SRSampleViewController : UITableViewController {

	NSArray* _items;
	NSString* _note;

}

@property (nonatomic,retain) NSArray * items;              //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * note;              //@synthesize note=_note - In the implementation block
-(id)init;
-(void)dealloc;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSString *)note;
-(void)setNote:(NSString *)arg1 ;
-(id)prepareEndRowWithText:(id)arg1 detailText:(id)arg2 ;
-(id)sortedKeysForDictionary:(id)arg1 ;
-(id)prepareExtendedRowWithText:(id)arg1 ;
@end

