/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UICollectionViewUpdateItemApplying.h>

@protocol _UICollectionViewUpdateItemApplying, _UIDataSourceSnapshotTranslating;
@class UICollectionView, UITableView, NSString;

@interface _UIDiffableDataSourceViewUpdater : NSObject <_UICollectionViewUpdateItemApplying> {

	long long _tableViewRowAnimation;
	long long _sinkKind;
	id<_UICollectionViewUpdateItemApplying> _updatesSink;
	UICollectionView* _collectionView;
	id<_UIDataSourceSnapshotTranslating> _dataSourceSnapshot;
	UITableView* _tableView;

}

@property (assign,nonatomic,__weak) id<_UICollectionViewUpdateItemApplying> updatesSink;              //@synthesize updatesSink=_updatesSink - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                                //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) long long sinkKind;                                                      //@synthesize sinkKind=_sinkKind - In the implementation block
@property (nonatomic,retain) id<_UIDataSourceSnapshotTranslating> dataSourceSnapshot;                 //@synthesize dataSourceSnapshot=_dataSourceSnapshot - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long tableViewRowAnimation;                                         //@synthesize tableViewRowAnimation=_tableViewRowAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCollectionView:(id)arg1 ;
-(id<_UIDataSourceSnapshotTranslating>)dataSourceSnapshot;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(UITableView *)tableView;
-(long long)sinkKind;
-(id<_UICollectionViewUpdateItemApplying>)updatesSink;
-(void)_performDeleteUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)setTableViewRowAnimation:(long long)arg1 ;
-(void)setUpdatesSink:(id<_UICollectionViewUpdateItemApplying>)arg1 ;
-(id)targetView;
-(UICollectionView *)collectionView;
-(void)_reloadData;
-(void)_performInsertUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(id)initWithUpdatesSink:(id)arg1 collectionView:(id)arg2 tableView:(id)arg3 ;
-(long long)tableViewRowAnimation;
-(void)_deleteAllItems;
-(void)_performMoveUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performDeleteUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)setDataSourceSnapshot:(id<_UIDataSourceSnapshotTranslating>)arg1 ;
-(void)_performMoveUpdate:(id)arg1 onTableView:(id)arg2 ;
-(id)initWithTableView:(id)arg1 ;
-(void)_performReloadUpdate:(id)arg1 onCollectionView:(id)arg2 ;
-(void)_performInsertUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)setTableView:(UITableView *)arg1 ;
-(id)initWithCollectionViewUpdatesSink:(id)arg1 ;
-(void)setSinkKind:(long long)arg1 ;
-(void)_performUpdateWithCollectionViewUpdateItems:(id)arg1 dataSourceSnapshot:(id)arg2 updateHandler:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 viewPropertyAnimator:(id)arg5 customAnimationsProvider:(/*^block*/id)arg6 ;
-(void)_performReloadUpdate:(id)arg1 onTableView:(id)arg2 ;
-(void)_performViewUpdates:(id)arg1 ;
-(void)_willPerformDiff:(BOOL)arg1 ;
@end

