/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <libobjc.A.dylib/flowDispositionObserver.h>

@class NSDate, ManagedEventHandler, NSString;

@interface wifiFlowObserver : NSObject <flowDispositionObserver> {

	wifiPropertyCounts _foregroundCounts;
	wifiPropertyCounts _backgroundCounts;
	unsigned _dampeningMsecs;
	NSDate* _lastReportTimestamp;
	BOOL _dampening;
	unsigned _seqno;
	ManagedEventHandler* _managedEventHandler;
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
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(id)infoDir;
-(void)_noteNewUsage;
-(BOOL)addClassification:(id)arg1 context:(wifiPropertyCounts*)arg2 ;
-(NSString *)description;
-(BOOL)removeClassification:(id)arg1 context:(wifiPropertyCounts*)arg2 ;
-(unsigned)noteFlow:(id)arg1 snapshot:(id)arg2 present:(BOOL)arg3 trackedBy:(id)arg4 ;
-(void)configurePolicies:(id)arg1 ;
-(BOOL)foreground;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3 ;
@end

