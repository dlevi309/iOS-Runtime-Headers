/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKit/UITableViewDataSource.h>

@protocol UITableViewDataSource;
@class NSString;

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource> {

	BOOL _limitingWithSections;
	long long _maxVisibleSection;
	long long _numberOfVisibleItemsInLastSection;
	long long _filterType;
	id<UITableViewDataSource> _tableDataSource;

}

@property (assign,nonatomic) long long filterType;                                   //@synthesize filterType=_filterType - In the implementation block
@property (assign,nonatomic) id<UITableViewDataSource> tableDataSource;              //@synthesize tableDataSource=_tableDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(long long)filterType;
-(void)setFilterType:(long long)arg1 ;
-(long long)_filteredNumberOfItemsGivenSection:(long long)arg1 numberOfItems:(long long)arg2 ;
-(id<UITableViewDataSource>)tableDataSource;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setTableDataSource:(id<UITableViewDataSource>)arg1 ;
@end

