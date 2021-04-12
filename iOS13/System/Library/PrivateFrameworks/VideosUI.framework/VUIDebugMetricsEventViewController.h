/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UITableViewController.h>

@class VUIDebugMetricsEvent;

@interface VUIDebugMetricsEventViewController : UITableViewController {

	VUIDebugMetricsEvent* _event;

}

@property (nonatomic,retain) VUIDebugMetricsEvent * event;              //@synthesize event=_event - In the implementation block
-(VUIDebugMetricsEvent *)event;
-(void)setEvent:(VUIDebugMetricsEvent *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)performValidation;
@end

