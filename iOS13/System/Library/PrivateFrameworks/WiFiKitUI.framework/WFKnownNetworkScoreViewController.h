/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end

