/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

