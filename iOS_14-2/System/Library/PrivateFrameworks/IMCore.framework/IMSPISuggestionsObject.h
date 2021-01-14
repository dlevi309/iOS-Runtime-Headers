/*
* Generated on Thursday, January 14, 2021 at 2:24:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)chatGUID;
-(NSArray *)participants;
-(id)description;
-(NSString *)displayName;
-(id)initWithChatGuid:(id)arg1 displayName:(id)arg2 participants:(id)arg3 ;
@end

