/*
* Generated on Monday, March 1, 2021 at 2:31:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKBalloonChatItem.h>

@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (nonatomic,readonly) char color; 
@property (nonatomic,__weak,readonly) NSUUID * tuConversationUUID; 
-(id)time;
-(char)color;
-(id)sender;
-(BOOL)isFromMe;
-(Class)balloonViewClass;
-(void)configureBalloonView:(id)arg1 ;
-(NSUUID *)tuConversationUUID;
-(BOOL)shouldCacheSize;
@end

