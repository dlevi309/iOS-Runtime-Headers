/*
* Generated on Thursday, January 14, 2021 at 2:25:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TIKeyboardInputManagerLogging.h>

@class NSString, TITypologyLog, TITypologyStatistic;

@interface TIKeyboardInputManagerLogger : NSObject <TIKeyboardInputManagerLogging> {

	NSString* _inputModeIdentifier;
	TITypologyLog* _typologyLog;
	TITypologyStatistic* _typologyStatistic;

}

@property (nonatomic,retain) NSString * inputModeIdentifier;                       //@synthesize inputModeIdentifier=_inputModeIdentifier - In the implementation block
@property (nonatomic,retain) TITypologyLog * typologyLog;                          //@synthesize typologyLog=_typologyLog - In the implementation block
@property (nonatomic,retain) TITypologyStatistic * typologyStatistic;              //@synthesize typologyStatistic=_typologyStatistic - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)writeToFileWithTypologyLog:(id)arg1 ;
+(BOOL)shouldSubmitStructuredDataReportForTypologyLog:(id)arg1 ;
+(void)submitAggregrateDictionaryReport:(id)arg1 inputModeIdentifier:(id)arg2 ;
+(id)generateStructuredDataReportForTypologyLog:(id)arg1 ;
+(void)submitStructuredDataReportForTypologyLog:(id)arg1 ;
+(void)pruneTypologyLogsToMaxNumBytes:(long long)arg1 satisfyingPredicate:(/*^block*/id)arg2 ;
+(id)writePropertyList:(id)arg1 withFilename:(id)arg2 ;
+(id)accessibilityConfigInfo;
+(void)writeHumanReadableTraceForTypologyLog:(id)arg1 ;
-(void)logCandidateResultSet:(id)arg1 forKeyboardState:(id)arg2 ;
-(void)setTypologyLog:(TITypologyLog *)arg1 ;
-(void)logKeyboardOutput:(id)arg1 keyboardConfiguration:(id)arg2 forKeyboardInput:(id)arg3 keyboardState:(id)arg4 ;
-(void)logHitKeyCode:(long long)arg1 forTouchEvent:(id)arg2 keyboardState:(id)arg3 ;
-(id)init;
-(void)setTypologyStatistic:(TITypologyStatistic *)arg1 ;
-(void)logReceivedSkipHitTestForTouchEvent:(id)arg1 forKeyboardState:(id)arg2 ;
-(TITypologyLog *)typologyLog;
-(void)logKeyboardConfig:(id)arg1 forSyncToKeyboardState:(id)arg2 ;
-(void)logReceivedTextAccepted:(id)arg1 ;
-(void)logRefinements:(id)arg1 forCandidate:(id)arg2 keyboardState:(id)arg3 ;
-(TITypologyStatistic *)typologyStatistic;
-(void)logReceivedCandidateRejected:(id)arg1 ;
-(void)logReceivedLastAcceptedCandidateCorrected;
-(void)logReplacements:(id)arg1 forString:(id)arg2 keyLayout:(id)arg3 ;
-(void)logKeyboardLayout:(id)arg1 name:(id)arg2 ;
-(void)logReceivedSetOriginalInput:(id)arg1 ;
-(void)disableTypologyLogIfNecessaryForKeyboardState:(id)arg1 ;
-(void)backgroundWriteLogsAndSubmitReport;
-(id)writeToFile;
-(NSString *)inputModeIdentifier;
-(void)setConfig:(id)arg1 ;
-(void)setInputModeIdentifier:(NSString *)arg1 ;
-(BOOL)shouldWriteToSyslogForKeyboardState:(id)arg1 ;
-(BOOL)shouldWriteToTypologyLogForKeyboardState:(id)arg1 ;
-(void)logKeyboardConfig:(id)arg1 textToCommit:(id)arg2 forAcceptedCandidate:(id)arg3 keyboardState:(id)arg4 ;
-(void)logAutocorrections:(id)arg1 forKeyboardState:(id)arg2 requestToken:(id)arg3 ;
-(void)logKeyboardConfig:(id)arg1 forAdjustedPhraseBoundaryInForwardDirection:(BOOL)arg2 granularity:(int)arg3 keyboardState:(id)arg4 ;
-(void)dealloc;
-(void)logToHumanReadableTrace:(id)arg1 ;
@end

