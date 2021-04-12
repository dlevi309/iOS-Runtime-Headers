/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <libobjc.A.dylib/MLMediaLibraryAccountChangeObserver.h>

@protocol OS_dispatch_source;
@class NSXPCConnection, NSObject, MSVTaskAssertion, NSString;

@interface _MLChangeObserver : NSObject <MLMediaLibraryAccountChangeObserver> {

	BOOL _timedOut;
	NSXPCConnection* _connection;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	MSVTaskAssertion* _taskAssertion;

}

@property (nonatomic,retain) NSXPCConnection * connection;                            //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (nonatomic,retain) MSVTaskAssertion * taskAssertion;                        //@synthesize taskAssertion=_taskAssertion - In the implementation block
@property (assign,getter=hasTimedOut,nonatomic) BOOL timedOut;                        //@synthesize timedOut=_timedOut - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)observerWithConnection:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)hasTimedOut;
-(void)setTimedOut:(BOOL)arg1 ;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(void)performDatabasePathChange:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)emergencyDisconnectWithCompletion:(/*^block*/id)arg1 ;
-(void)terminateForFailureToPerformDatabasePathChange;
-(void)tearDownTaskAssertion;
-(void)tearDownTimeoutTimer;
-(void)setupTaskAssertion;
-(void)setupTimeoutTimer;
-(void)setTaskAssertion:(MSVTaskAssertion *)arg1 ;
-(MSVTaskAssertion *)taskAssertion;
@end

