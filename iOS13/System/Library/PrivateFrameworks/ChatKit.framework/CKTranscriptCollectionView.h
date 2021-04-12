/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView {

	BOOL _ignoresContentOffsetChanges;
	BOOL _dynamicsDisabled;

}

@property (assign,nonatomic) BOOL ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
@property (assign,nonatomic) BOOL dynamicsDisabled;                         //@synthesize dynamicsDisabled=_dynamicsDisabled - In the implementation block
-(void)setContentSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadData;
-(void)setContentOffset:(CGPoint)arg1 ;
-(unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setDynamicsDisabled:(BOOL)arg1 ;
-(void)setIgnoresContentOffsetChanges:(BOOL)arg1 ;
-(BOOL)ignoresContentOffsetChanges;
-(BOOL)dynamicsDisabled;
@end

