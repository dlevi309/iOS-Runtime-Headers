/*
* Generated on Thursday, January 14, 2021 at 2:27:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
*/

#import <UIKitCore/UITableViewController.h>

@class NSDictionary;

@interface MultiValuePrefsController : UITableViewController {

	NSDictionary* _menuDict;

}

@property (nonatomic,retain) NSDictionary * menuDict;              //@synthesize menuDict=_menuDict - In the implementation block
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setMenuDict:(NSDictionary *)arg1 ;
-(void)setMultiValue:(id)arg1 ;
-(NSDictionary *)menuDict;
@end

