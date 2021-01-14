/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray;

@interface PXSettingsTimelineTableViewController : UITableViewController {

	NSArray* _widgetSizes;

}

@property (nonatomic,retain) NSArray * widgetSizes;              //@synthesize widgetSizes=_widgetSizes - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(NSArray *)widgetSizes;
-(void)setWidgetSizes:(NSArray *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

