/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setResults:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(NSArray *)results;
-(id)initWithEvent:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSDictionary *)event;
-(void)setEvent:(NSDictionary *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_reloadResults:(id)arg1 ;
@end

