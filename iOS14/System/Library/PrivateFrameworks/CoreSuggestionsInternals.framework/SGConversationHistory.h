/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSArray, NSString;

@interface SGConversationHistory : NSObject {

	NSArray* _messages;
	NSString* _likelyLanguage;

}

@property (readonly) NSArray * messages;                     //@synthesize messages=_messages - In the implementation block
@property (readonly) NSString * likelyLanguage;              //@synthesize likelyLanguage=_likelyLanguage - In the implementation block
-(NSArray *)messages;
-(id)initWithMessages:(id)arg1 ;
-(NSString *)likelyLanguage;
@end

