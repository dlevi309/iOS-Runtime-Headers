/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/


@class _PSMapsFeedbackAction, _PSMapsPredictionContext, NSArray;

@interface _PSMapsFeedback : NSObject {

	BOOL _dryRun;
	_PSMapsFeedbackAction* _action;
	_PSMapsPredictionContext* _context;
	NSArray* _suggestions;

}

@property (assign,nonatomic) BOOL dryRun;                                                //@synthesize dryRun=_dryRun - In the implementation block
@property (nonatomic,readonly) _PSMapsFeedbackAction * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) _PSMapsPredictionContext * context;                       //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSArray * suggestions;                                    //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,readonly) unsigned long long indexOfEngagedSuggestion; 
-(void)setDryRun:(BOOL)arg1 ;
-(NSArray *)suggestions;
-(id)feedbackPayload;
-(_PSMapsFeedbackAction *)action;
-(_PSMapsPredictionContext *)context;
-(id)getTrialID;
-(id)knowledgeEvent;
-(unsigned long long)indexOfEngagedSuggestion;
-(id)initWithFeedbackAction:(id)arg1 predictionContext:(id)arg2 suggestions:(id)arg3 ;
-(BOOL)dryRun;
@end

