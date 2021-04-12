/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AutomationSuggestions.framework/AutomationSuggestions
*/


@class ActionRetriever, RTRoutineManager, ATSConfig;

@interface ATSSuggester : NSObject {

	ActionRetriever* _actionRetriever;
	RTRoutineManager* _rtRoutineManager;
	ATSConfig* _atsConfig;

}

@property (nonatomic,retain) ActionRetriever * actionRetriever;                //@synthesize actionRetriever=_actionRetriever - In the implementation block
@property (nonatomic,retain) RTRoutineManager * rtRoutineManager;              //@synthesize rtRoutineManager=_rtRoutineManager - In the implementation block
@property (nonatomic,retain) ATSConfig * atsConfig;                            //@synthesize atsConfig=_atsConfig - In the implementation block
-(id)suggestions;
-(id)init;
-(id)initWithConfigFilePath:(id)arg1 ;
-(ATSConfig *)atsConfig;
-(void)setAtsConfig:(ATSConfig *)arg1 ;
-(id)suggestionsWithParameters:(id)arg1 databasePath:(id)arg2 ;
-(id)suggestionsWithLimit:(unsigned long long)arg1 minimumAbsoluteSupport:(unsigned long long)arg2 minimumSupport:(double)arg3 minimumConfidence:(double)arg4 minimumLift:(double)arg5 minimumConviction:(double)arg6 minimumRulePowerFactor:(double)arg7 minimumUniqueDaysLastWeek:(unsigned long long)arg8 minimumUniqueDaysTotal:(unsigned long long)arg9 databasePath:(id)arg10 ;
-(id)suggestionsWithLimit:(unsigned long long)arg1 minimumAbsoluteSupport:(unsigned long long)arg2 ;
-(void)provideSuggestionFeedback:(id)arg1 ;
-(ActionRetriever *)actionRetriever;
-(void)setActionRetriever:(ActionRetriever *)arg1 ;
-(RTRoutineManager *)rtRoutineManager;
-(void)setRtRoutineManager:(RTRoutineManager *)arg1 ;
@end

