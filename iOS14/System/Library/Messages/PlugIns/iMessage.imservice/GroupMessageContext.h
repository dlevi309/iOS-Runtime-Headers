/*
* Generated on Thursday, January 14, 2021 at 2:27:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
*/


@class NSDictionary;

@interface GroupMessageContext : NSObject {

	BOOL _groupChat;
	NSDictionary* _groupPayload;
	NSDictionary* _additionalPayload;

}

@property (nonatomic,readonly) NSDictionary * groupPayload;                    //@synthesize groupPayload=_groupPayload - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalPayload;               //@synthesize additionalPayload=_additionalPayload - In the implementation block
@property (getter=isGroupChat,nonatomic,readonly) BOOL groupChat;              //@synthesize groupChat=_groupChat - In the implementation block
-(BOOL)isGroupChat;
-(NSDictionary *)additionalPayload;
-(id)initWithGroupPayload:(id)arg1 additionalPayload:(id)arg2 isGroupChat:(BOOL)arg3 ;
-(NSDictionary *)groupPayload;
@end

