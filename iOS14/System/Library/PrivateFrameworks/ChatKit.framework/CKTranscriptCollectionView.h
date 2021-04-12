/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKEditableCollectionView.h>

@interface CKTranscriptCollectionView : CKEditableCollectionView {

	BOOL _ignoresContentOffsetChanges;
	BOOL _ignoresReloadDataRequests;
	BOOL _dynamicsDisabled;

}

@property (assign,nonatomic) BOOL ignoresContentOffsetChanges;              //@synthesize ignoresContentOffsetChanges=_ignoresContentOffsetChanges - In the implementation block
@property (assign,nonatomic) BOOL ignoresReloadDataRequests;                //@synthesize ignoresReloadDataRequests=_ignoresReloadDataRequests - In the implementation block
@property (assign,nonatomic) BOOL dynamicsDisabled;                         //@synthesize dynamicsDisabled=_dynamicsDisabled - In the implementation block
-(unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)dynamicsDisabled;
-(BOOL)ignoresReloadDataRequests;
-(void)setDynamicsDisabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)reloadData;
-(void)setIgnoresContentOffsetChanges:(BOOL)arg1 ;
-(void)setIgnoresReloadDataRequests:(BOOL)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(BOOL)ignoresContentOffsetChanges;
@end

