/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
*/


@class ATSSuggestion, NSString;

@interface ATSFeedback : NSObject {

	long long _action;
	ATSSuggestion* _suggestion;
	NSString* _automationIdentifier;

}

@property (assign,nonatomic) long long action;                             //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) ATSSuggestion * suggestion;                   //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) NSString * automationIdentifier;              //@synthesize automationIdentifier=_automationIdentifier - In the implementation block
+(id)feedbackForAction:(long long)arg1 suggestion:(id)arg2 automationIdentifier:(id)arg3 ;
-(ATSSuggestion *)suggestion;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(id)description;
-(void)setSuggestion:(ATSSuggestion *)arg1 ;
-(void)submitTelemetryFeedback;
-(void)setAutomationIdentifier:(NSString *)arg1 ;
-(NSString *)automationIdentifier;
@end

