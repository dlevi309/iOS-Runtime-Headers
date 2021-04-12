/*
* Generated on Thursday, January 14, 2021 at 2:21:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/CKBalloonChatItem.h>

@class NSUUID;

@interface CKTUConversationChatItem : CKBalloonChatItem

@property (nonatomic,readonly) char color; 
@property (nonatomic,__weak,readonly) NSUUID * tuConversationUUID; 
-(id)time;
-(id)sender;
-(char)color;
-(Class)balloonViewClass;
-(void)configureBalloonView:(id)arg1 ;
-(BOOL)shouldCacheSize;
-(BOOL)isFromMe;
-(NSUUID *)tuConversationUUID;
@end

