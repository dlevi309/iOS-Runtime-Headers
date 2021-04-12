/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@class IMHandle, IMAssistantHandleFromContact;

@interface IMAssistantChatParticipant : NSObject {

	IMHandle* _imHandle;
	IMAssistantHandleFromContact* _handleFromContact;

}

@property (nonatomic,readonly) IMHandle * imHandle;                                           //@synthesize imHandle=_imHandle - In the implementation block
@property (nonatomic,readonly) IMAssistantHandleFromContact * handleFromContact;              //@synthesize handleFromContact=_handleFromContact - In the implementation block
-(id)description;
-(IMHandle *)imHandle;
-(id)initWithIMHandle:(id)arg1 handleFromContact:(id)arg2 ;
-(IMAssistantHandleFromContact *)handleFromContact;
@end

