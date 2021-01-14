/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class NSString, NSArray;

@interface _PSMessagesZkwFeedback : NSObject {

	BOOL _dryRun;
	NSString* _chatGuidEngaged;
	NSArray* _suggestions;

}

@property (assign,nonatomic) BOOL dryRun;                                    //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,copy,readonly) NSString * chatGuidEngaged;              //@synthesize chatGuidEngaged=_chatGuidEngaged - In the implementation block
@property (nonatomic,copy,readonly) NSArray * suggestions;                   //@synthesize suggestions=_suggestions - In the implementation block
-(void)setDryRun:(BOOL)arg1 ;
-(NSArray *)suggestions;
-(id)feedbackPayload;
-(unsigned long long)indexOfEngagedSuggestionForChatGuidEngaged;
-(id)reasonTypeForSuggestionIndex:(unsigned long long)arg1 ;
-(id)reasonForSuggestionIndex:(unsigned long long)arg1 ;
-(NSString *)chatGuidEngaged;
-(long long)feedbackActionTypeForSuggestionIndex:(unsigned long long)arg1 ;
-(id)initWithChatGuidEngagaged:(id)arg1 suggestions:(id)arg2 ;
-(id)getTrialID;
-(BOOL)dryRun;
@end

