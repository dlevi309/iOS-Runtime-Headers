/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
*/

#import <libobjc.A.dylib/ATSessionConnection.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, OS_dispatch_group, ATMessageLink;
@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSHashTable, NSObject, NSXPCConnection, NSString, NSError, NSXPCListenerEndpoint;

@interface ATSession : NSObject <ATSessionConnection, NSSecureCoding> {

	NSMutableArray* _sessionTasks;
	NSMutableDictionary* _sessionTasksByIdentifier;
	NSMutableSet* _observing;
	NSHashTable* _observers;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _group;
	NSXPCConnection* _connection;
	double _startTime;
	double _finishTime;
	BOOL _suspended;
	BOOL _finished;
	BOOL _running;
	BOOL _cancelled;
	NSString* _sessionTypeIdentifier;
	NSString* _sessionIdentifier;
	NSString* _localizedDescription;
	NSString* _dataClass;
	double _progress;
	NSError* _error;
	NSXPCListenerEndpoint* _endpoint;
	id<ATMessageLink> _messageLink;

}

@property (getter=isSuspended) BOOL suspended; 
@property (getter=isRunning) BOOL running;                                      //@synthesize running=_running - In the implementation block
@property (getter=isFinished) BOOL finished;                                    //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                                  //@synthesize cancelled=_cancelled - In the implementation block
@property (retain) NSString * sessionTypeIdentifier;                            //@synthesize sessionTypeIdentifier=_sessionTypeIdentifier - In the implementation block
@property (retain) NSString * sessionIdentifier;                                //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (retain) NSString * localizedDescription;                             //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,retain) NSString * dataClass;                              //@synthesize dataClass=_dataClass - In the implementation block
@property (assign) double progress;                                             //@synthesize progress=_progress - In the implementation block
@property (copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                  //@synthesize endpoint=_endpoint - In the implementation block
@property (assign,nonatomic,__weak) id<ATMessageLink> messageLink;              //@synthesize messageLink=_messageLink - In the implementation block
@property (readonly) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)allSessions;
+(id)_remoteSessionsWithTypeIdentifier:(id)arg1 ;
+(id)sessionsWithSessionTypeIdentifier:(id)arg1 ;
+(unsigned long long)_remoteActiveSessionCountWithTypeIdentifier:(id)arg1 ;
+(void)_cancelSessionWithIdentifier:(id)arg1 ;
+(void)setSessionHost:(BOOL)arg1 ;
+(id)sessionsWithSessionTypeIdentifier:(id)arg1 dataClass:(id)arg2 ;
+(unsigned long long)activeSessionCountWithSessionTypeIdentifier:(id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCancelled:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(double)progress;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(void)start;
-(void)_finishWithError:(id)arg1 ;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(id<ATMessageLink>)messageLink;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSXPCListenerEndpoint *)endpoint;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(NSError *)error;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(id)sessionTasks;
-(NSString *)description;
-(NSString *)localizedDescription;
-(void)setFinished:(BOOL)arg1 ;
-(void)setDataClass:(NSString *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setProgress:(double)arg1 ;
-(BOOL)isRunning;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)sessionTypeIdentifier;
-(id)initWithSessionIdentifier:(id)arg1 sessionTypeIdentifier:(id)arg2 ;
-(void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 ;
-(void)_beginTasks:(id)arg1 ;
-(void)_observeKeysForTask:(id)arg1 ;
-(id)initWithSessionTypeIdentifier:(id)arg1 ;
-(void)beginSessionTask:(id)arg1 ;
-(void)updateSessionTask:(id)arg1 ;
-(void)_stopObservingKeysForTask:(id)arg1 ;
-(void)addSessionTasks:(id)arg1 ;
-(void)waitToFinish;
-(id)sessionTasksWithGroupingKey:(id)arg1 ;
-(void)setSessionTypeIdentifier:(NSString *)arg1 ;
-(double)duration;
-(void)cancel;
-(void)_performSelectorOnObservers:(SEL)arg1 object:(id)arg2 object:(id)arg3 ;
-(NSString *)dataClass;
-(BOOL)isCancelled;
-(id)_keysToObserve;
-(void)setMessageLink:(id<ATMessageLink>)arg1 ;
@end

