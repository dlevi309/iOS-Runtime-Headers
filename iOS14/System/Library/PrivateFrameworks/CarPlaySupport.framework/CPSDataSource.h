/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <libobjc.A.dylib/CPListDataSource.h>
#import <UIKit/UITableViewDataSource.h>

@class NSIndexPath, NSArray, UITableView, NSString;

@interface CPSDataSource : NSObject <CPListDataSource, UITableViewDataSource> {

	UITableView* _tableView;
	long long _rowAnimation;
	/*^block*/id _cellConfigureBlock;
	/*^block*/id _cellCreateBlock;

}

@property (assign,nonatomic,__weak) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long rowAnimation;                          //@synthesize rowAnimation=_rowAnimation - In the implementation block
@property (nonatomic,copy) id cellConfigureBlock;                             //@synthesize cellConfigureBlock=_cellConfigureBlock - In the implementation block
@property (nonatomic,copy) id cellCreateBlock;                                //@synthesize cellCreateBlock=_cellCreateBlock - In the implementation block
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) NSIndexPath * firstItemIndexPath; 
@property (nonatomic,readonly) NSArray * items; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(long long)numberOfItems;
-(id)indexPathForItemWithIdentifier:(id)arg1 ;
-(UITableView *)tableView;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(NSArray *)items;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)reloadData;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(NSIndexPath *)firstItemIndexPath;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)setRowAnimation:(long long)arg1 ;
-(void)setCellCreateBlock:(id)arg1 ;
-(void)setCellConfigureBlock:(id)arg1 ;
-(void)insertSectionsAtIndexes:(id)arg1 ;
-(void)deleteSectionsAtIndexes:(id)arg1 ;
-(id)cellCreateBlock;
-(id)cellConfigureBlock;
-(long long)rowAnimation;
@end

