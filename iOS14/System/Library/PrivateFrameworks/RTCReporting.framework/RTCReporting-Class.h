/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTCReporting.framework/RTCReporting
*/

#import <RTCReporting/RTCReportingDeallocNotifierDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCConnection, NSMutableDictionary, NSArray, RTCReportingDeallocNotifier;

@interface RTCReporting : NSObject <RTCReportingDeallocNotifierDelegate> {

	NSObject*<OS_dispatch_queue> _reportingQueue;
	NSObject*<OS_dispatch_queue> _reportingPeriodicTasksQueue;
	/*^block*/id _loggingBlock;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _timer;
	int _counter;
	NSMutableDictionary* _periodicServiceDict;
	NSArray* _enabledBackendNames;
	NSArray* _whitelistedEvents;
	NSArray* _blacklistedEvents;
	RTCReportingDeallocNotifier* _strongDeallocNotifier;
	id _weakDeallocNotifier;
	id _weakMessageSentDelegate;

}

@property (assign,nonatomic) id<RTCReportingMessageSentNotifier> messageSentDelegate; 
@property (nonatomic,copy) id messageLoggingBlock;                                                 //@synthesize loggingBlock=_loggingBlock - In the implementation block
+(id)getPersistentIdentifierForDNU:(BOOL)arg1 ;
+(void)regeneratePersistentIdentifierForDNU:(BOOL)arg1 ;
+(BOOL)closeEphemeralSessiontWithSessionId:(id)arg1 ;
+(id)createEphemeralSessionWithSessionInfo:(id)arg1 userInfo:(id)arg2 error:(id*)arg3 ;
+(id)newHierarchyTokenFromParentToken:(id)arg1 ;
+(id)newSecureHierarchyTokenFromParentToken:(id)arg1 ;
+(BOOL)sendOneMessageWithSessionInfo:(id)arg1 userInfo:(id)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 payload:(id)arg5 error:(id*)arg6 ;
-(oneway void)release;
-(BOOL)sendMessageWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)flushMessages;
-(BOOL)unregisterPeriodTaskForModule:(unsigned)arg1 ;
-(BOOL)isBlacklistedEvent:(unsigned short)arg1 ;
-(id)retain;
-(void)flushMessagesWithCompletion:(/*^block*/id)arg1 ;
-(void)startLogTimerWithInterval:(int)arg1 reportingMultiplier:(int)arg2 category:(unsigned short)arg3 type:(unsigned short)arg4 ;
-(void)setMessageLoggingBlock:(id)arg1 ;
-(BOOL)serverSupportsFileUpload;
-(BOOL)registerPeriodicTaskForModule:(unsigned)arg1 needToUpdate:(BOOL)arg2 needToReport:(BOOL)arg3 serviceBlock:(/*^block*/id)arg4 ;
-(BOOL)setDigestKey:(id)arg1 algorithm:(int)arg2 ;
-(BOOL)uploadDataArray:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)isWhitelistedEvent:(unsigned short)arg1 ;
-(void)aboutToDealloc;
-(void)finishSession;
-(void)notifyMessageWasSent:(id)arg1 ;
-(BOOL)sendMessageWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 error:(id*)arg4 ;
-(id<RTCReportingMessageSentNotifier>)messageSentDelegate;
-(id)messageLoggingBlock;
-(id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 aggregationBlock:(/*^block*/id)arg4 ;
-(void)_myPeriodicTask:(unsigned short)arg1 type:(unsigned short)arg2 intervalMultiplier:(int)arg3 updateTimeout:(unsigned long long)arg4 ;
-(void)startConfigurationWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithSessionInfo:(id)arg1 userInfo:(id)arg2 frameworksToCheck:(id)arg3 ;
-(void)updateSharedDataWithDictionary:(id)arg1 ;
-(void)updateSharedDataForKey:(id)arg1 value:(id)arg2 ;
-(void)stopLogTimer;
-(void)setMessageSentDelegate:(id<RTCReportingMessageSentNotifier>)arg1 ;
-(void)fetchReportingStatesWithUserInfo:(id)arg1 fetchComplete:(/*^block*/id)arg2 ;
-(BOOL)uploadFileWithURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dealloc;
@end

