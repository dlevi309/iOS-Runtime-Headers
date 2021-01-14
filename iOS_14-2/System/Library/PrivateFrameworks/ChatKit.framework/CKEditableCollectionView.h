/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionView.h>

@interface CKEditableCollectionView : UICollectionView {

	BOOL __ck_editing;
	UIEdgeInsets _marginInsets;

}

@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                 //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,setter=_ck_setEditing:,getter=_ck_isEditing,nonatomic) BOOL _ck_editing;              //@synthesize _ck_editing=__ck_editing - In the implementation block
-(UIEdgeInsets)safeAreaInsets;
-(id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_ck_setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(BOOL)_ck_isEditing;
-(void)_ck_setEditing:(BOOL)arg1 ;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
@end

