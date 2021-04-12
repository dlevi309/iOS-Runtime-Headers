/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class UICollectionViewUpdateItem, NSIndexPath, UITableViewUpdateGap;

@interface UIUpdateItem : NSObject {

	UICollectionViewUpdateItem* _collectionViewUpdateItem;
	BOOL _headerFooterOnly;
	int _action;
	NSIndexPath* _indexPath;
	long long _animation;
	UITableViewUpdateGap* _gap;

}

@property (assign,nonatomic,__weak) UITableViewUpdateGap * gap;                                    //@synthesize gap=_gap - In the implementation block
@property (nonatomic,readonly) UICollectionViewUpdateItem * collectionViewUpdateItem; 
@property (nonatomic,readonly) int action;                                                         //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                                            //@synthesize indexPath=_indexPath - In the implementation block
@property (assign,nonatomic) long long animation;                                                  //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) BOOL headerFooterOnly;                                                //@synthesize headerFooterOnly=_headerFooterOnly - In the implementation block
@property (nonatomic,readonly) BOOL isDecomposedFromReload; 
-(NSIndexPath *)indexPath;
-(int)action;
-(long long)animation;
-(BOOL)isSectionOperation;
-(long long)inverseCompareIndexPaths:(id)arg1 ;
-(long long)compareIndexPaths:(id)arg1 ;
-(void)setAnimation:(long long)arg1 ;
-(id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(long long)arg3 ;
-(BOOL)headerFooterOnly;
-(void)setHeaderFooterOnly:(BOOL)arg1 ;
-(UICollectionViewUpdateItem *)collectionViewUpdateItem;
-(BOOL)isDecomposedFromReload;
-(void)setGap:(UITableViewUpdateGap *)arg1 ;
-(id)_actionDescription;
-(UITableViewUpdateGap *)gap;
@end

