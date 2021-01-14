/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSDictionary;

@interface PXSuggestersDebugViewController : UITableViewController {

	NSArray* _items;
	NSDictionary* _options;

}
-(id)initWithOptions:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg1 withItem:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)_fetchSuggesters;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

