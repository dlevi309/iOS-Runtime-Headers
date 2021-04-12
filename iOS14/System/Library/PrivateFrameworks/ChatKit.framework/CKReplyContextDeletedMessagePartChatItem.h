/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKReplyContextTextMessagePartChatItem.h>
#import <libobjc.A.dylib/CKReplyContext.h>

@interface CKReplyContextDeletedMessagePartChatItem : CKReplyContextTextMessagePartChatItem <CKReplyContext>
-(BOOL)isEditable;
-(id)contact;
-(char)transcriptOrientation;
-(char)color;
-(BOOL)itemIsReplyContextPreview;
-(char)balloonOrientation;
-(CKBalloonDescriptor_t)balloonDescriptor;
-(BOOL)isFromMe;
-(id)loadTranscriptText;
-(CGSize)loadSizeThatFits:(CGSize)arg1 textAlignmentInsets:(out UIEdgeInsets*)arg2 ;
@end

