/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSDictionary;

@interface VUIDebugMetricsDictionaryViewController : UITableViewController {

	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(void)setDictionary:(NSDictionary *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)sortedKeys;
@end

