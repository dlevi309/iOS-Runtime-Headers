/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

@class NSArray;


@protocol CPListDataSource <NSObject>
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(NSArray *)items;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1;
-(id)itemAtIndexPath:(id)arg1;

@end

