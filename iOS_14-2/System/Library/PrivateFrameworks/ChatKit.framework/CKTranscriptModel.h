/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKTranscriptModelDelegate;
@class CKConversation, NSArray, NSDictionary, NSDiffableDataSourceSnapshot;

@interface CKTranscriptModel : NSObject {

	id<CKTranscriptModelDelegate> _delegate;
	CKConversation* _conversation;
	NSArray* _chatItems;
	NSDictionary* _supplementaryKindToChatItemMap;

}

@property (nonatomic,retain) CKConversation * conversation;                               //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) NSArray * chatItems;                                         //@synthesize chatItems=_chatItems - In the implementation block
@property (nonatomic,retain) NSDictionary * supplementaryKindToChatItemMap;               //@synthesize supplementaryKindToChatItemMap=_supplementaryKindToChatItemMap - In the implementation block
@property (assign,nonatomic,__weak) id<CKTranscriptModelDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSDiffableDataSourceSnapshot * snapshot; 
+(id)transcriptSectionIdentifier;
-(NSDiffableDataSourceSnapshot *)snapshot;
-(id<CKTranscriptModelDelegate>)delegate;
-(void)setConversation:(CKConversation *)arg1 ;
-(NSArray *)chatItems;
-(void)setDelegate:(id<CKTranscriptModelDelegate>)arg1 ;
-(CKConversation *)conversation;
-(void)reload;
-(id)initWithConversation:(id)arg1 delegate:(id)arg2 ;
-(void)setChatItems:(NSArray *)arg1 ;
-(id)chatItemsWithIMChatItems:(id)arg1 ;
-(id)chatItemWithIMChatItem:(id)arg1 traitCollection:(id)arg2 ;
-(NSDictionary *)supplementaryKindToChatItemMap;
-(void)setSupplementaryKindToChatItemMap:(NSDictionary *)arg1 ;
@end

