/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <PeopleSuggester/_PSFeedbackAction.h>

@class NSString;

@interface _PSMapsFeedbackAction : _PSFeedbackAction {

	NSString* _contactId;
	NSString* _handle;

}

@property (nonatomic,copy,readonly) NSString * contactId;              //@synthesize contactId=_contactId - In the implementation block
@property (nonatomic,copy,readonly) NSString * handle;                 //@synthesize handle=_handle - In the implementation block
+(id)engagementWithSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2 ;
+(id)engagementWithNonSuggestionWithContactIdentifier:(id)arg1 handle:(id)arg2 ;
-(NSString *)handle;
-(NSString *)contactId;
-(id)initWithContactIdentifier:(id)arg1 handle:(id)arg2 type:(long long)arg3 ;
@end

