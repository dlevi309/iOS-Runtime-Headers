/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <libobjc.A.dylib/CPListDataSource.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, UITableView, NSString;

@interface CPSDataSource : NSObject <CPListDataSource, UITableViewDataSource> {

	UITableView* _tableView;
	long long _rowAnimation;
	/*^block*/id _cellConfigureBlock;
	Class _cellClass;

}

@property (assign,nonatomic,__weak) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long rowAnimation;                      //@synthesize rowAnimation=_rowAnimation - In the implementation block
@property (nonatomic,copy) id cellConfigureBlock;                         //@synthesize cellConfigureBlock=_cellConfigureBlock - In the implementation block
@property (assign,nonatomic,__weak) Class cellClass;                      //@synthesize cellClass=_cellClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * items; 
-(id)init;
-(NSArray *)items;
-(UITableView *)tableView;
-(void)reloadData;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)reloadItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(Class)cellClass;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)insertSectionsAtIndexes:(id)arg1 ;
-(void)deleteSectionsAtIndexes:(id)arg1 ;
-(void)setCellClass:(Class)arg1 ;
-(id)cellConfigureBlock;
-(void)setCellConfigureBlock:(id)arg1 ;
-(long long)rowAnimation;
-(void)setRowAnimation:(long long)arg1 ;
@end

