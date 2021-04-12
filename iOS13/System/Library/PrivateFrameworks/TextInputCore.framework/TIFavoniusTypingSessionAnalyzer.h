/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TITypingSessionAnalyzing.h>

@protocol TIUserModeling;
@class TITypingSession, TITypingSessionAligned, NSString;

@interface TIFavoniusTypingSessionAnalyzer : NSObject <TITypingSessionAnalyzing> {

	TITypingSession* _lastSessionAnalyzed;
	TITypingSessionAligned* _lastAlignmentAnalyzed;
	id<TIUserModeling> _userModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<TIUserModeling> userModel;                                //@synthesize userModel=_userModel - In the implementation block
@property (nonatomic,retain) TITypingSession * lastSessionAnalyzed;                       //@synthesize lastSessionAnalyzed=_lastSessionAnalyzed - In the implementation block
@property (nonatomic,retain) TITypingSessionAligned * lastAlignmentAnalyzed;              //@synthesize lastAlignmentAnalyzed=_lastAlignmentAnalyzed - In the implementation block
-(BOOL)analyze:(id)arg1 alignedSession:(id)arg2 ;
-(id<TIUserModeling>)userModel;
-(void)setUserModel:(id<TIUserModeling>)arg1 ;
-(TITypingSession *)lastSessionAnalyzed;
-(void)setLastSessionAnalyzed:(TITypingSession *)arg1 ;
-(TITypingSessionAligned *)lastAlignmentAnalyzed;
-(void)setLastAlignmentAnalyzed:(TITypingSessionAligned *)arg1 ;
-(id)initWithUserModel:(id)arg1 ;
-(unsigned long long)canAnalyze:(id)arg1 alignedSession:(id)arg2 ;
-(void)addToTransientCounter:(int)arg1 forKey:(id)arg2 andContext:(id)arg3 andCandidateString:(id)arg4 ;
-(void)incrementTransientCounterForKey:(id)arg1 andContext:(id)arg2 andCandidateString:(id)arg3 ;
-(BOOL)isPathable:(id)arg1 context:(id)arg2 ;
-(void)updateDurationCounterForWord:(id)arg1 forTypingContext:(id)arg2 ;
-(void)logPathedCandidate:(id)arg1 forKey:(id)arg2 withConfidence:(unsigned long long)arg3 isCompletion:(BOOL)arg4 ;
-(BOOL)handleWordEntry:(id)arg1 withConfidence:(unsigned long long)arg2 ;
-(id)deleteLengthMetrics:(id)arg1 nextWordEntryCandText:(id)arg2 ;
-(BOOL)handleDeleteWord:(id)arg1 nextAction:(id)arg2 withConfidence:(unsigned long long)arg3 ;
-(BOOL)handlePath:(id)arg1 ;
@end

