/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isMe;
-(NSString *)handle;
-(NSArray *)contactIdentifiers;
-(id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(BOOL)arg3 ;
-(BOOL)matchesPerson:(id)arg1 withUnifiedContactIdentifiers:(id)arg2 ;
@end

