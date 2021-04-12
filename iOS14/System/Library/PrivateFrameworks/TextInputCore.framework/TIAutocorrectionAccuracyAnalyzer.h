/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TITypingSessionAnalyzing.h>

@class TITypingSession, NSString;

@interface TIAutocorrectionAccuracyAnalyzer : NSObject <TITypingSessionAnalyzing> {

	TITypingSession* _currentSession;

}

@property (nonatomic,retain) TITypingSession * currentSession;              //@synthesize currentSession=_currentSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setCurrentSession:(TITypingSession *)arg1 ;
-(TITypingSession *)currentSession;
-(unsigned long long)evaluateConfidenceInSession:(id)arg1 alignedSession:(id)arg2 ;
-(BOOL)analyzeSession:(id)arg1 alignedSession:(id)arg2 withConfidence:(unsigned long long)arg3 ;
-(void)analyzeWordEntryAligned:(id)arg1 ;
-(void)registerEventSpec;
@end

