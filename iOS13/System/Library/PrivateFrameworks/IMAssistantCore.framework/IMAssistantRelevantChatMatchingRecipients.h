/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@class IMChat, NSArray;

@interface IMAssistantRelevantChatMatchingRecipients : NSObject {

	IMChat* _chat;
	NSArray* _resolvedPersons;

}

@property (nonatomic,retain) IMChat * chat;                        //@synthesize chat=_chat - In the implementation block
@property (nonatomic,copy) NSArray * resolvedPersons;              //@synthesize resolvedPersons=_resolvedPersons - In the implementation block
-(id)description;
-(void)setChat:(IMChat *)arg1 ;
-(IMChat *)chat;
-(NSArray *)resolvedPersons;
-(id)initWithChat:(id)arg1 resolvedPersons:(id)arg2 ;
-(void)setResolvedPersons:(NSArray *)arg1 ;
@end

