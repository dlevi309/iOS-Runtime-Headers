/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class _PSFeedbackAction, _PSPredictionContext, NSArray, NSString;

@interface _PSFeedback : NSObject {

	BOOL _dryRun;
	float _numberOfVisibleSuggestions;
	_PSFeedbackAction* _action;
	double _delay;
	_PSPredictionContext* _context;
	NSArray* _suggestions;
	NSString* _sessionIdentifier;

}

@property (assign,nonatomic) BOOL dryRun;                                                //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,readonly) _PSFeedbackAction * action;                               //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) unsigned long long indexOfEngagedSuggestion; 
@property (nonatomic,readonly) double delay;                                             //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) _PSPredictionContext * context;                           //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * suggestions;                                    //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) float numberOfVisibleSuggestions;                         //@synthesize numberOfVisibleSuggestions=_numberOfVisibleSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionIdentifier;                        //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
+(id)feedbackForAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6 ;
-(double)delay;
-(_PSPredictionContext *)context;
-(_PSFeedbackAction *)action;
-(NSArray *)suggestions;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(NSString *)sessionIdentifier;
-(unsigned long long)indexOfEngagedSuggestion;
-(id)knowledgeEvent;
-(id)feedbackPayload;
-(id)getTrialID;
-(id)initWithAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6 ;
-(float)numberOfVisibleSuggestions;
@end

