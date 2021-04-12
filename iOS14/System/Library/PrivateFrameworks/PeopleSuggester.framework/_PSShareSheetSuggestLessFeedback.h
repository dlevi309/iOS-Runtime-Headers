/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class NSString;

@interface _PSShareSheetSuggestLessFeedback : NSObject {

	NSString* _bundleId;
	NSString* _conversationId;
	NSString* _derivedIntentId;
	NSString* _contactId;
	NSString* _handle;

}

@property (nonatomic,copy,readonly) NSString * bundleId;                     //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,copy,readonly) NSString * conversationId;               //@synthesize conversationId=_conversationId - In the implementation block
@property (nonatomic,copy,readonly) NSString * derivedIntentId;              //@synthesize derivedIntentId=_derivedIntentId - In the implementation block
@property (nonatomic,copy,readonly) NSString * contactId;                    //@synthesize contactId=_contactId - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                       //@synthesize handle=_handle - In the implementation block
-(NSString *)handle;
-(NSString *)bundleId;
-(NSString *)contactId;
-(NSString *)conversationId;
-(id)knowledgeEvent;
-(id)initWithBundleId:(id)arg1 conversationId:(id)arg2 derivedIntentId:(id)arg3 handle:(id)arg4 contactId:(id)arg5 ;
-(NSString *)derivedIntentId;
-(id)initWithBundleId:(id)arg1 conversationId:(id)arg2 handle:(id)arg3 contactId:(id)arg4 ;
@end

