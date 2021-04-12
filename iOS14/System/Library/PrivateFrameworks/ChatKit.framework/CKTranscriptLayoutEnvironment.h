/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol NSCollectionLayoutEnvironment;
#import <ChatKit/ChatKit-Structs.h>
@class CKConversation, UICollectionView, CKChatItem;

@interface CKTranscriptLayoutEnvironment : NSObject {

	CKConversation* _conversation;
	id<NSCollectionLayoutEnvironment> _collectionLayoutEnvironment;
	UICollectionView* _collectionView;
	long long _layoutContext;
	CKChatItem* _previousItem;
	UIEdgeInsets _marginInsets;

}

@property (nonatomic,retain) CKConversation * conversation;                                              //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) id<NSCollectionLayoutEnvironment> collectionLayoutEnvironment;              //@synthesize collectionLayoutEnvironment=_collectionLayoutEnvironment - In the implementation block
@property (nonatomic,retain) UICollectionView * collectionView;                                          //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets marginInsets;                                                  //@synthesize marginInsets=_marginInsets - In the implementation block
@property (assign,nonatomic) long long layoutContext;                                                    //@synthesize layoutContext=_layoutContext - In the implementation block
@property (nonatomic,retain) CKChatItem * previousItem;                                                  //@synthesize previousItem=_previousItem - In the implementation block
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)init;
-(id<NSCollectionLayoutEnvironment>)collectionLayoutEnvironment;
-(long long)layoutContext;
-(UICollectionView *)collectionView;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)setLayoutContext:(long long)arg1 ;
-(void)setCollectionLayoutEnvironment:(id<NSCollectionLayoutEnvironment>)arg1 ;
-(CKConversation *)conversation;
-(UIEdgeInsets)marginInsets;
-(void)setMarginInsets:(UIEdgeInsets)arg1 ;
-(void)setPreviousItem:(CKChatItem *)arg1 ;
-(CKChatItem *)previousItem;
@end

