/*
* Generated on Thursday, January 14, 2021 at 2:20:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITableViewUpdateGap *)gap;
-(void)setGap:(UITableViewUpdateGap *)arg1 ;
-(long long)animation;
-(NSIndexPath *)indexPath;
-(void)setAnimation:(long long)arg1 ;
-(int)action;
-(BOOL)headerFooterOnly;
-(long long)inverseCompareIndexPaths:(id)arg1 ;
-(UICollectionViewUpdateItem *)collectionViewUpdateItem;
-(BOOL)isSectionOperation;
-(id)_actionDescription;
-(long long)compareIndexPaths:(id)arg1 ;
-(BOOL)isDecomposedFromReload;
-(void)setHeaderFooterOnly:(BOOL)arg1 ;
-(id)initWithAction:(int)arg1 forIndexPath:(id)arg2 animation:(long long)arg3 ;
@end

