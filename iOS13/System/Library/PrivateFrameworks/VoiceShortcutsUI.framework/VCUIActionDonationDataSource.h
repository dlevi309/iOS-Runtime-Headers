/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <UIKit/UITableViewDataSource.h>

@protocol OS_dispatch_queue;
@class UITableView, NSObject, NSOrderedSet, NSString;

@interface VCUIActionDonationDataSource : NSObject <UITableViewDataSource> {

	UITableView* _tableView;
	Class _fetcherClass;
	NSObject*<OS_dispatch_queue> _queue;
	NSOrderedSet* _donations;

}

@property (nonatomic,readonly) Class fetcherClass;                              //@synthesize fetcherClass=_fetcherClass - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSOrderedSet * donations;                            //@synthesize donations=_donations - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                    //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(NSObject*<OS_dispatch_queue>)queue;
-(UITableView *)tableView;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(NSOrderedSet *)donations;
-(void)setDonations:(NSOrderedSet *)arg1 ;
-(id)initWithFetcher:(Class)arg1 ;
-(void)refreshDonations;
-(id)donationAtIndexPath:(id)arg1 ;
-(Class)fetcherClass;
@end

