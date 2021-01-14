/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/flowDispositionObserver.h>

@class NSDate, NSMutableDictionary, NSMutableSet, NSString;

@interface cellFlowObserver : NSObject <flowDispositionObserver> {

	int _classCounter[32];
	int _classFlags;
	int _intialClassFlags;
	int _everSetClassFlags;
	int _everReportedClassFlags;
	int _lastReportedClassFlags;
	unsigned _dampeningMsecs;
	NSDate* _lastReportTimestamp;
	BOOL _dampening;
	unsigned _seqno;
	NSMutableDictionary* _foregroundAppObservelist;
	NSMutableDictionary* _perAppMaxRRCTimeSecs;
	BOOL _flowSnapshotActive;
	NSMutableSet* _flowSnapshotApps;
	unsigned _flowSnapshotFlags;
	double _flowSnapshotAccumulatedTCEnabledTime;
	NSDate* _flowSnapshotTCEnabledStartTime;
	BOOL _enabled;
	BOOL _foreground;

}

@property (assign,nonatomic) BOOL enabled;                          //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL foreground;                       //@synthesize foreground=_foreground - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)enabled;
-(void)setForeground:(BOOL)arg1 ;
-(void)beginTrafficClassFlowSnapshot;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id)infoDir;
-(BOOL)performDisposition:(unsigned)arg1 present:(BOOL)arg2 ;
-(NSString *)description;
-(unsigned)noteFlow:(id)arg1 snapshot:(id)arg2 present:(BOOL)arg3 trackedBy:(id)arg4 ;
-(void)noteNewUsage:(unsigned)arg1 ;
-(void)configurePolicies:(id)arg1 ;
-(BOOL)foreground;
-(void)resetTrafficClassFlowSnapshot:(BOOL)arg1 ;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3 ;
-(void)endTrafficClassFlowSnapshot:(id)arg1 periodUsecs:(unsigned long long)arg2 reply:(/*^block*/id)arg3 ;
@end

