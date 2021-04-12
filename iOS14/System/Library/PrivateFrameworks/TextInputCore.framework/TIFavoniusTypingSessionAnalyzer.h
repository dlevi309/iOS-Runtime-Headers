/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TITypingSessionAnalyzing.h>

@protocol TIUserModeling;
@class TITypingSession, NSString, TIKeyboardState;

@interface TIFavoniusTypingSessionAnalyzer : NSObject <TITypingSessionAnalyzing> {

	int _lastMessageWordsEntered;
	id<TIUserModeling> _userModel;
	TITypingSession* _currentSession;
	NSString* _lastMessage;
	TIKeyboardState* _lastMessageKeyboardState;
	double _lastMessageStartTime;
	double _lastMessageEndTime;

}

@property (nonatomic,retain) TITypingSession * currentSession;                               //@synthesize currentSession=_currentSession - In the implementation block
@property (nonatomic,retain) NSString * lastMessage;                                         //@synthesize lastMessage=_lastMessage - In the implementation block
@property (assign,nonatomic,__weak) TIKeyboardState * lastMessageKeyboardState;              //@synthesize lastMessageKeyboardState=_lastMessageKeyboardState - In the implementation block
@property (assign,nonatomic) double lastMessageStartTime;                                    //@synthesize lastMessageStartTime=_lastMessageStartTime - In the implementation block
@property (assign,nonatomic) double lastMessageEndTime;                                      //@synthesize lastMessageEndTime=_lastMessageEndTime - In the implementation block
@property (assign,nonatomic) int lastMessageWordsEntered;                                    //@synthesize lastMessageWordsEntered=_lastMessageWordsEntered - In the implementation block
@property (nonatomic,retain) id<TIUserModeling> userModel;                                   //@synthesize userModel=_userModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)favoniusTypingSessionAnalyzerForUserModel:(id)arg1 ;
-(id)initWithUserModel:(id)arg1 ;
-(double)lastMessageEndTime;
-(double)lastMessageStartTime;
-(TIKeyboardState *)lastMessageKeyboardState;
-(void)reportLastMessage;
-(void)addIntegerToTransientCounter:(int)arg1 forKey:(id)arg2 andContext:(id)arg3 andCandidateString:(id)arg4 ;
-(void)setLastMessageWordsEntered:(int)arg1 ;
-(void)handleWordEntry:(id)arg1 ;
-(void)addDoubleToTransientCounter:(double)arg1 forKey:(id)arg2 andContext:(id)arg3 andCandidateString:(id)arg4 ;
-(BOOL)updatePQTCountersForCandidate:(id)arg1 withText:(id)arg2 andContext:(id)arg3 ;
-(int)durationInMillisecondsFromStartTime:(double)arg1 endTime:(double)arg2 ;
-(void)setLastMessageStartTime:(double)arg1 ;
-(void)logPathedCandidate:(id)arg1 forKey:(id)arg2 isCompletion:(BOOL)arg3 ;
-(void)setLastMessageEndTime:(double)arg1 ;
-(void)setLastMessage:(NSString *)arg1 ;
-(int)lastMessageWordsEntered;
-(void)updateSourceCountersForCandidate:(id)arg1 withText:(id)arg2 andContext:(id)arg3 hasPQTSource:(BOOL)arg4 ;
-(void)setUserModel:(id<TIUserModeling>)arg1 ;
-(void)setCurrentSession:(TITypingSession *)arg1 ;
-(id<TIUserModeling>)userModel;
-(void)incrementTransientCounterForKey:(id)arg1 andContext:(id)arg2 andCandidateString:(id)arg3 ;
-(void)trackMessagesForAction:(id)arg1 ;
-(void)setLastMessageKeyboardState:(TIKeyboardState *)arg1 ;
-(void)updateDurationCounterForWord:(id)arg1 forTypingContext:(id)arg2 ;
-(void)handleDeleteWord:(id)arg1 nextAction:(id)arg2 ;
-(NSString *)lastMessage;
-(TITypingSession *)currentSession;
-(unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2 ;
-(void)handlePath:(id)arg1 ;
-(BOOL)isPathable:(id)arg1 context:(id)arg2 ;
-(id)deleteLengthMetrics:(id)arg1 nextWordEntryCandText:(id)arg2 ;
-(BOOL)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3 ;
@end

