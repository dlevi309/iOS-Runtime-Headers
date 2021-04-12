/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSString, CSSearchableItem, CKConversation, LPLinkMetadata, NSURL;

@interface CKSpotlightQueryResult : NSObject <QLPreviewItem> {

	NSString* _identifier;
	CSSearchableItem* _item;
	CKConversation* _conversation;
	LPLinkMetadata* _linkMetadata;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) CSSearchableItem * item;                    //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;              //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,readonly) NSString * messageGUID; 
@property (nonatomic,retain) LPLinkMetadata * linkMetadata;              //@synthesize linkMetadata=_linkMetadata - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
-(NSString *)identifier;
-(CSSearchableItem *)item;
-(void)setItem:(CSSearchableItem *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(CKConversation *)conversation;
-(void)setConversation:(CKConversation *)arg1 ;
-(NSString *)messageGUID;
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
-(LPLinkMetadata *)linkMetadata;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(id)initWithSearchableItem:(id)arg1 inSection:(id)arg2 withConversation:(id)arg3 ;
@end

