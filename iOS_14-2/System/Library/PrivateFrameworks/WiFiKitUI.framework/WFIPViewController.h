/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
*/

#import <WiFiKitUI/WFInsetTableViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, NSString;

@interface WFIPViewController : WFInsetTableViewController <UITableViewDelegate, UITableViewDataSource> {

	BOOL _useInsetGroupedTableView;
	NSArray* _addresses;
	NSArray* _prefixes;

}

@property (nonatomic,retain) NSArray * addresses;                        //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,retain) NSArray * prefixes;                         //@synthesize prefixes=_prefixes - In the implementation block
@property (assign,nonatomic) BOOL useInsetGroupedTableView;              //@synthesize useInsetGroupedTableView=_useInsetGroupedTableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)addresses;
-(void)setPrefixes:(NSArray *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)viewDidLoad;
-(NSArray *)prefixes;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setAddresses:(NSArray *)arg1 ;
-(BOOL)useInsetGroupedTableView;
-(void)setUseInsetGroupedTableView:(BOOL)arg1 ;
-(id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2 useInsetGroupedTableView:(BOOL)arg3 ;
-(id)initWithAddresses:(id)arg1 prefixLengths:(id)arg2 ;
@end

