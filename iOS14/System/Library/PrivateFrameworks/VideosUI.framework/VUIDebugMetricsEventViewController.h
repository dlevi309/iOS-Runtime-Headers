/*
* Generated on Thursday, January 14, 2021 at 2:24:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UITableViewController.h>

@class VUIDebugMetricsEvent;

@interface VUIDebugMetricsEventViewController : UITableViewController {

	VUIDebugMetricsEvent* _event;

}

@property (nonatomic,retain) VUIDebugMetricsEvent * event;              //@synthesize event=_event - In the implementation block
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithEvent:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)performValidation;
-(void)viewDidLoad;
-(VUIDebugMetricsEvent *)event;
-(void)setEvent:(VUIDebugMetricsEvent *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

