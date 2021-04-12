/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

@class NSIndexPath, NSArray;


@protocol CPListDataSource <NSObject>
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) NSIndexPath * firstItemIndexPath; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(long long)numberOfItems;
-(long long)numberOfItemsInSection:(long long)arg1;
-(id)itemAtIndexPath:(id)arg1;
-(long long)numberOfSections;
-(NSArray *)items;
-(NSIndexPath *)firstItemIndexPath;

@end

