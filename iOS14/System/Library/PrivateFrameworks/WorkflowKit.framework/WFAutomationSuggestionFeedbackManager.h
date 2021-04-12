/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <libobjc.A.dylib/WFApplicationStateObserver.h>

@class NSMutableDictionary;

@interface WFAutomationSuggestionFeedbackManager : NSObject <WFApplicationStateObserver> {

	NSMutableDictionary* _feedbackMapping;
	NSMutableDictionary* _identifierMapping;

}

@property (nonatomic,retain) NSMutableDictionary * feedbackMapping;                //@synthesize feedbackMapping=_feedbackMapping - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * identifierMapping;              //@synthesize identifierMapping=_identifierMapping - In the implementation block
+(id)sharedManager;
+(id)trialIDWithSerializedSuggestion:(id)arg1 ;
+(id)trialIDWithSuggestion:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)identifierMapping;
-(void)setIdentifierMapping:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2 ;
-(BOOL)isMockDataEnabled;
-(void)addFeedbackWithType:(unsigned long long)arg1 serializedSuggestion:(id)arg2 automationIdentifier:(id)arg3 ;
-(void)reportFeedback;
-(void)trackSuggestion:(id)arg1 source:(unsigned long long)arg2 completed:(BOOL)arg3 visible:(BOOL)arg4 interacted:(BOOL)arg5 ;
-(void)trackRoutineWithIdentifier:(id)arg1 source:(unsigned long long)arg2 completed:(BOOL)arg3 interacted:(BOOL)arg4 ;
-(NSMutableDictionary *)feedbackMapping;
-(void)setFeedbackMapping:(NSMutableDictionary *)arg1 ;
@end

