/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMAssistantCore.framework/IMAssistantCore
*/


@class NSString, NSArray;

@interface IMAssistantMessageSearchChatParticipant : NSObject {

	BOOL _isMe;
	NSString* _handle;
	NSArray* _contactIdentifiers;

}

@property (nonatomic,copy,readonly) NSString * handle;                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy,readonly) NSArray * contactIdentifiers;              //@synthesize contactIdentifiers=_contactIdentifiers - In the implementation block
@property (nonatomic,readonly) BOOL isMe;                                      //@synthesize isMe=_isMe - In the implementation block
-(NSString *)handle;
-(NSArray *)contactIdentifiers;
-(BOOL)isMe;
-(id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(BOOL)arg3 ;
-(BOOL)matchesPerson:(id)arg1 withUnifiedContactIdentifiers:(id)arg2 ;
@end

