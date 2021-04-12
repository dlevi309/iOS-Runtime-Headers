/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface CKSearchCollectionView : UICollectionView {

	BOOL __ck_editing;
	BOOL _suppressDatasourceUpdates;
	BOOL _lockContentOffset;
	UIEdgeInsets _marginInsets;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                 //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing;              //@synthesize _ck_editing=__ck_editing - In the implementation block
@property (assign,nonatomic) BOOL suppressDatasourceUpdates;                                            //@synthesize suppressDatasourceUpdates=_suppressDatasourceUpdates - In the implementation block
@property (assign,nonatomic) BOOL lockContentOffset;                                                    //@synthesize lockContentOffset=_lockContentOffset - In the implementation block
-(id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3 ;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setLockContentOffset:(BOOL)arg1 ;
-(BOOL)lockContentOffset;
-(void)setDataSource:(id)arg1 ;
-(BOOL)suppressDatasourceUpdates;
-(void)setSuppressDatasourceUpdates:(BOOL)arg1 ;
-(BOOL)_ck_isEditing;
-(void)_ck_setEditing:(BOOL)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

