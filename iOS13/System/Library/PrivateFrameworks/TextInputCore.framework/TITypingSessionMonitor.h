/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TITypingSessionMonitoringProtocol.h>
#import <libobjc.A.dylib/TITypingSessionAggregatedEventSourcing.h>

@protocol OS_dispatch_queue;
@class NSObject, TITypingSession, TITypingDESRecordWriter, NSLocale, NSPointerArray, TIKeyboardLayout, NSString;

@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol, TITypingSessionAggregatedEventSourcing> {

	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _useDODML;
	TITypingSession* _currentTypingSession;
	TITypingDESRecordWriter* _desRecordWriter;
	NSLocale* _locale;
	NSPointerArray* _aggregateEventsObservers;
	TIKeyboardLayout* _currentLayout;

}

@property (nonatomic,retain) TITypingSession * currentTypingSession;                 //@synthesize currentTypingSession=_currentTypingSession - In the implementation block
@property (nonatomic,retain) TITypingDESRecordWriter * desRecordWriter;              //@synthesize desRecordWriter=_desRecordWriter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                      //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSPointerArray * aggregateEventsObservers;              //@synthesize aggregateEventsObservers=_aggregateEventsObservers - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * currentLayout;                       //@synthesize currentLayout=_currentLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldRecordSession:(id)arg1 ;
+(id)temporaryKeyboardsDirectory;
+(id)pathForTimeTaggedFileName:(id)arg1 ;
+(id)loadAllStoredSessions;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(TIKeyboardLayout *)currentLayout;
-(void)setCurrentLayout:(TIKeyboardLayout *)arg1 ;
-(void)layoutDidChange:(id)arg1 keyboardState:(id)arg2 ;
-(void)addAggregatedEventObserver:(id)arg1 ;
-(void)keyboardDidSuspend;
-(id)initWithLocale:(id)arg1 useDODML:(BOOL)arg2 ;
-(TITypingSession *)currentTypingSession;
-(TITypingDESRecordWriter *)desRecordWriter;
-(void)setCurrentTypingSession:(TITypingSession *)arg1 ;
-(void)setDesRecordWriter:(TITypingDESRecordWriter *)arg1 ;
-(NSPointerArray *)aggregateEventsObservers;
-(void)setAggregateEventsObservers:(NSPointerArray *)arg1 ;
@end

