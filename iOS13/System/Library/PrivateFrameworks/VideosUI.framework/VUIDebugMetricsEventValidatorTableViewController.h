/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSDictionary, NSArray;

@interface VUIDebugMetricsEventValidatorTableViewController : UITableViewController {

	NSDictionary* _event;
	NSArray* _results;

}

@property (nonatomic,retain) NSDictionary * event;              //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSArray * results;                 //@synthesize results=_results - In the implementation block
-(NSArray *)results;
-(NSDictionary *)event;
-(void)setEvent:(NSDictionary *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setResults:(NSArray *)arg1 ;
-(void)_reloadResults:(id)arg1 ;
@end

