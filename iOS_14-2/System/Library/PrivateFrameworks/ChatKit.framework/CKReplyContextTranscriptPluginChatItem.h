/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKMessagePartChatItem.h>
#import <libobjc.A.dylib/CKReplyContext.h>

@class LPLinkMetadata;

@interface CKReplyContextTranscriptPluginChatItem : CKMessagePartChatItem <CKReplyContext> {

	LPLinkMetadata* _linkMetadata;

}

@property (nonatomic,readonly) LPLinkMetadata * linkMetadata;              //@synthesize linkMetadata=_linkMetadata - In the implementation block
-(BOOL)replyIsFromMe;
-(char)color;
-(Class)balloonViewClass;
-(void)configureBalloonView:(id)arg1 ;
-(id)description;
-(LPLinkMetadata *)linkMetadata;
-(BOOL)isReplyContextPreview;
-(id)mediaObject;
-(CKBalloonDescriptor_t)balloonDescriptor;
@end

