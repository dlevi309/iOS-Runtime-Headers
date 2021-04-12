/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@class NSString, NSArray;

@interface IMSPISuggestionsObject : NSObject {

	NSString* _chatGUID;
	NSString* _displayName;
	NSArray* _participants;

}

@property (readonly) NSString * chatGUID;                 //@synthesize chatGUID=_chatGUID - In the implementation block
@property (readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (readonly) NSArray * participants;              //@synthesize participants=_participants - In the implementation block
-(id)description;
-(NSString *)displayName;
-(NSArray *)participants;
-(NSString *)chatGUID;
-(id)initWithChatGuid:(id)arg1 displayName:(id)arg2 participants:(id)arg3 ;
@end

