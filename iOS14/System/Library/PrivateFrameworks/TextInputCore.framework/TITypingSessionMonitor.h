/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/TITypingSessionMonitoringProtocol.h>
#import <libobjc.A.dylib/TITypingSessionAggregatedEventSourcing.h>

@protocol OS_dispatch_queue, TITypingSessionDelegate;
@class NSObject, TITypingSession, TITypingDESRecordWriter, NSLocale, NSPointerArray, TIKeyboardLayout, NSString;

@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol, TITypingSessionAggregatedEventSourcing> {

	NSObject*<OS_dispatch_queue> _workQueue;
	BOOL _useDODML;
	id<TITypingSessionDelegate> _delegate;
	TITypingSession* _currentTypingSession;
	TITypingDESRecordWriter* _desRecordWriter;
	NSLocale* _locale;
	NSPointerArray* _aggregateEventsObservers;
	TIKeyboardLayout* _currentLayout;

}

@property (nonatomic,retain) TITypingSession * currentTypingSession;                   //@synthesize currentTypingSession=_currentTypingSession - In the implementation block
@property (nonatomic,retain) TITypingDESRecordWriter * desRecordWriter;                //@synthesize desRecordWriter=_desRecordWriter - In the implementation block
@property (nonatomic,retain) NSLocale * locale;                                        //@synthesize locale=_locale - In the implementation block
@property (nonatomic,retain) NSPointerArray * aggregateEventsObservers;                //@synthesize aggregateEventsObservers=_aggregateEventsObservers - In the implementation block
@property (nonatomic,retain) TIKeyboardLayout * currentLayout;                         //@synthesize currentLayout=_currentLayout - In the implementation block
@property (assign,nonatomic,__weak) id<TITypingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pathForTimeTaggedFileName:(id)arg1 ;
+(BOOL)shouldRecordSession:(id)arg1 ;
+(id)temporaryKeyboardsDirectory;
+(id)loadAllStoredSessions;
-(NSLocale *)locale;
-(NSPointerArray *)aggregateEventsObservers;
-(void)setLocale:(NSLocale *)arg1 ;
-(id<TITypingSessionDelegate>)delegate;
-(void)setAggregateEventsObservers:(NSPointerArray *)arg1 ;
-(TIKeyboardLayout *)currentLayout;
-(TITypingSession *)currentTypingSession;
-(void)setCurrentLayout:(TIKeyboardLayout *)arg1 ;
-(id)initWithLocale:(id)arg1 useDODML:(BOOL)arg2 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)setDelegate:(id<TITypingSessionDelegate>)arg1 ;
-(void)layoutDidChange:(id)arg1 keyboardState:(id)arg2 ;
-(void)addAggregatedEventObserver:(id)arg1 ;
-(void)setCurrentTypingSession:(TITypingSession *)arg1 ;
-(void)keyboardDidSuspend;
-(void)setDesRecordWriter:(TITypingDESRecordWriter *)arg1 ;
-(TITypingDESRecordWriter *)desRecordWriter;
@end

