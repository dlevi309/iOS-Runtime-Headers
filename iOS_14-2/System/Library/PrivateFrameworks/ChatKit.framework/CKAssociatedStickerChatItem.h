/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKAssociatedMessageChatItem.h>

@class CKMediaObject, NSString;

@interface CKAssociatedStickerChatItem : CKAssociatedMessageChatItem {

	CKMediaObject* _mediaObject;

}

@property (nonatomic,retain) CKMediaObject * mediaObject;                 //@synthesize mediaObject=_mediaObject - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferGUID; 
-(void)setMediaObject:(CKMediaObject *)arg1 ;
-(char)transcriptOrientation;
-(id)IMAssociatedStickerChatItem;
-(Class)cellClass;
-(id)initWithIMChatItem:(id)arg1 maxWidth:(double)arg2 ;
-(NSString *)transferGUID;
-(CKMediaObject *)mediaObject;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
@end

