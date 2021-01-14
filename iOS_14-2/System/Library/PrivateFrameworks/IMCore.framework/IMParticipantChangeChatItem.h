/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle;

@interface IMParticipantChangeChatItem : IMTranscriptChatItem {

	IMHandle* _sender;
	IMHandle* _otherHandle;

}

@property (nonatomic,readonly) long long changeType; 
@property (nonatomic,readonly) IMHandle * sender;                   //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) IMHandle * otherHandle;              //@synthesize otherHandle=_otherHandle - In the implementation block
-(Class)__ck_chatItemClass;
-(IMHandle *)sender;
-(long long)changeType;
-(IMHandle *)otherHandle;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 otherHandle:(id)arg3 ;
@end

