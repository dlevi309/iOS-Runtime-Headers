/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICollectionViewUpdateItemApplying.h>

@protocol _UICollectionViewUpdateItemApplying;
@class UICollectionView, _UIDataSourceSnapshotter, UITableView, NSString;

@interface _UIDiffableDataSourceViewUpdater : NSObject <_UICollectionViewUpdateItemApplying> {

	long long _tableViewRowAnimation;
	long long _sinkKind;
	id<_UICollectionViewUpdateItemApplying> _updatesSink;
	UICollectionView* _collectionView;
	_UIDataSourceSnapshotter* _dataSourceSnapshotter;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<_UICollectionViewUpdateItemApplying> updatesSink;              //@synthesize updatesSink=_updatesSink - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) long long sinkKind;                                                      //@synthesize sinkKind=_sinkKind - In the implementation block
@property (nonatomic,retain) _UIDataSourceSnapshotter * dataSourceSnapshotter;                        //@synthesize dataSourceSnapshotter=_dataSourceSnapshotter - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long tableViewRowAnimation;                                         //@synthesize tableViewRowAnimation=_tableViewRowAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)tableView;
-(UICollectionView *)collectionView;
-(_UIDataSourceSnapshotter *)dataSourceSnapshotter;
-(void)setDataSourceSnapshotter:(_UIDataSourceSnapshotter *)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
-(id)initWithTableView:(id)arg1 ;
-(id)initWithCollectionViewUpdatesSink:(id)arg1 ;
-(void)_deleteAllItems;
-(id)targetView;
-(void)_performUpdateWithCollectionViewUpdateItems:(id)arg1 dataSourceSnapshotter:(id)arg2 updateHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_reloadData;
-(void)setTableViewRowAnimation:(long long)arg1 ;
-(long long)tableViewRowAnimation;
-(id)initWithUpdatesSink:(id)arg1 collectionView:(id)arg2 tableView:(id)arg3 ;
-(void)_performViewUpdates:(id)arg1 ;
-(id<_UICollectionViewUpdateItemApplying>)updatesSink;
-(long long)sinkKind;
-(void)_performInsertUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performInsertUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)_performMoveUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performMoveUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)_performDeleteUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performDeleteUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)_performReloadUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performReloadUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)_willPerformDiff:(BOOL)arg1 ;
-(void)setSinkKind:(long long)arg1 ;
-(void)setUpdatesSink:(id<_UICollectionViewUpdateItemApplying>)arg1 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
@end

