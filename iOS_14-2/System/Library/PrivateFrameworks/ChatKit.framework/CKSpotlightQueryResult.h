/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)messageGUID;
-(CSSearchableItem *)item;
-(void)setConversation:(CKConversation *)arg1 ;
-(void)setItem:(CSSearchableItem *)arg1 ;
-(CKConversation *)conversation;
-(LPLinkMetadata *)linkMetadata;
-(void)setLinkMetadata:(LPLinkMetadata *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithSearchableItem:(id)arg1 inSection:(id)arg2 withConversation:(id)arg3 ;
-(NSString *)previewItemTitle;
-(NSURL *)previewItemURL;
-(BOOL)isEqual:(id)arg1 ;
@end

