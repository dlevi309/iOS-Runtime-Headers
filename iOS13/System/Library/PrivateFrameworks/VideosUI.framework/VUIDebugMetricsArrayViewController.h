/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <UIKitCore/UITableViewController.h>

@class NSArray, NSDictionary;

@interface VUIDebugMetricsArrayViewController : UITableViewController {

	NSArray* _array;
	NSDictionary* _cachedKeysOrder;

}

@property (nonatomic,retain) NSDictionary * cachedKeysOrder;              //@synthesize cachedKeysOrder=_cachedKeysOrder - In the implementation block
@property (nonatomic,retain) NSArray * array;                             //@synthesize array=_array - In the implementation block
-(id)init;
-(id)object;
-(NSArray *)array;
-(void)setObject:(id)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(void)viewDidLoad;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)generateCachedKeys;
-(void)setCachedKeysOrder:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedKeysOrder;
@end

