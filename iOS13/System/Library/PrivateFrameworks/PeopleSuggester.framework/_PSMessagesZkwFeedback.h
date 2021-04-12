/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSArray *)suggestions;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(id)initWithChatGuidEngagaged:(id)arg1 suggestions:(id)arg2 ;
-(id)feedbackPayload;
-(id)getTrialID;
-(unsigned long long)indexOfEngagedSuggestionForChatGuidEngaged;
-(id)reasonTypeForSuggestionIndex:(unsigned long long)arg1 ;
-(id)reasonForSuggestionIndex:(unsigned long long)arg1 ;
-(long long)feedbackActionTypeForSuggestionIndex:(unsigned long long)arg1 ;
-(NSString *)chatGuidEngaged;
@end

