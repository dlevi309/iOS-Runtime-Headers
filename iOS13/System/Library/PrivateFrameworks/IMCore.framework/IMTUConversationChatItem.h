/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, TUConversation, NSUUID, NSDate;

@interface IMTUConversationChatItem : IMTranscriptChatItem {

	IMHandle* _conversationInitiator;

}

@property (nonatomic,__weak,readonly) TUConversation * tuConversation; 
@property (nonatomic,readonly) NSUUID * tuConversationUUID; 
@property (nonatomic,readonly) IMHandle * conversationInitiator;                    //@synthesize conversationInitiator=_conversationInitiator - In the implementation block
@property (nonatomic,readonly) BOOL isFromMe; 
@property (nonatomic,readonly) NSDate * time; 
-(Class)__ck_chatItemClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)time;
-(BOOL)isFromMe;
-(BOOL)canDelete;
-(TUConversation *)tuConversation;
-(NSUUID *)tuConversationUUID;
-(IMHandle *)conversationInitiator;
-(id)_initWithItem:(id)arg1 conversationInitiator:(id)arg2 ;
-(id)activeCall;
@end

