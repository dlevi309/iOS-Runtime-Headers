/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)time;
-(BOOL)canDelete;
-(IMHandle *)conversationInitiator;
-(BOOL)isFromMe;
-(TUConversation *)tuConversation;
-(NSUUID *)tuConversationUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)activeCall;
-(id)_initWithItem:(id)arg1 conversationInitiator:(id)arg2 ;
@end

