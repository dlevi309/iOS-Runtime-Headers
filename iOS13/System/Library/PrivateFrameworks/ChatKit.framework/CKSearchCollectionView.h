/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface CKSearchCollectionView : UICollectionView {

	BOOL _editing;
	BOOL _suppressDatasourceUpdates;
	BOOL _lockContentOffset;
	UIEdgeInsets _marginInsets;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets;                   //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;               //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL suppressDatasourceUpdates;              //@synthesize suppressDatasourceUpdates=_suppressDatasourceUpdates - In the implementation block
@property (assign,nonatomic) BOOL lockContentOffset;                      //@synthesize lockContentOffset=_lockContentOffset - In the implementation block
-(void)setDataSource:(id)arg1 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)isEditing;
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3 ;
-(void)setEditing:(BOOL)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(BOOL)suppressDatasourceUpdates;
-(void)setSuppressDatasourceUpdates:(BOOL)arg1 ;
-(void)setLockContentOffset:(BOOL)arg1 ;
-(BOOL)lockContentOffset;
@end

