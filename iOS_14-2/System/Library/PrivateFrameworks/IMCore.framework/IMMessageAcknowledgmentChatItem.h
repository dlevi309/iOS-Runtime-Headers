/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMAssociatedMessageChatItem.h>

@interface IMMessageAcknowledgmentChatItem : IMAssociatedMessageChatItem {

	long long _messageAcknowledgmentType;

}

@property (nonatomic,readonly) long long messageAcknowledgmentType;              //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
-(Class)__ck_chatItemClass;
-(long long)messageAcknowledgmentType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 messageAcknowledgmentType:(long long)arg3 ;
@end

