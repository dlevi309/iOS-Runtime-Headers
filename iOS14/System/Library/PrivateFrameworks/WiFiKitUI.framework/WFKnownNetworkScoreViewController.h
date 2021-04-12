/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSDictionary;

@interface WFKnownNetworkScoreViewController : UITableViewController {

	NSDictionary* _score;

}

@property (nonatomic,retain) NSDictionary * score;              //@synthesize score=_score - In the implementation block
-(NSDictionary *)score;
-(void)setScore:(NSDictionary *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

