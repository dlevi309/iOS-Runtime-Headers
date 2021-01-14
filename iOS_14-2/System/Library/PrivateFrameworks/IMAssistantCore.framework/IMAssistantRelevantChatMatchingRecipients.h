/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@class IMChat, NSArray;

@interface IMAssistantRelevantChatMatchingRecipients : NSObject {

	IMChat* _chat;
	NSArray* _resolvedPersons;

}

@property (nonatomic,retain) IMChat * chat;                        //@synthesize chat=_chat - In the implementation block
@property (nonatomic,copy) NSArray * resolvedPersons;              //@synthesize resolvedPersons=_resolvedPersons - In the implementation block
-(IMChat *)chat;
-(void)setChat:(IMChat *)arg1 ;
-(id)description;
-(NSArray *)resolvedPersons;
-(id)initWithChat:(id)arg1 resolvedPersons:(id)arg2 ;
-(void)setResolvedPersons:(NSArray *)arg1 ;
@end

