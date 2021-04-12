/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <libobjc.A.dylib/CATTaskClientDelegate.h>

@protocol OS_dispatch_source, CRKToolCommandDelegate;
@class NSObject, CATTaskClient, CATOperationQueue, CATOperation, NSString;

@interface CRKToolCommand : NSObject <CATTaskClientDelegate> {

	NSObject*<OS_dispatch_source> mSIGINTSource;
	CATTaskClient* mTaskClient;
	CATOperationQueue* mOperationQueue;
	CATOperation* mOperation;
	BOOL _printJSON;
	BOOL _printVerbose;
	id<CRKToolCommandDelegate> _delegate;
	NSString* _sessionIdentifier;

}

@property (assign,getter=shouldPrintJSON,nonatomic) BOOL printJSON;                    //@synthesize printJSON=_printJSON - In the implementation block
@property (assign,getter=shouldPrintVerbose,nonatomic) BOOL printVerbose;              //@synthesize printVerbose=_printVerbose - In the implementation block
@property (assign,nonatomic,__weak) id<CRKToolCommandDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)description;
+(id)help;
+(id)aliases;
+(BOOL)supportsJSON;
+(BOOL)supportsVerboseOutput;
+(BOOL)instructorCommand;
+(void)printHelp;
+(BOOL)handlesProgress;
+(id)subcommandPath;
-(id)init;
-(id<CRKToolCommandDelegate>)delegate;
-(void)setDelegate:(id<CRKToolCommandDelegate>)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(void)executeOperation:(id)arg1 ;
-(void)clientDidDisconnect:(id)arg1 ;
-(id)transportProvider;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(void)clientDidConnect:(id)arg1 ;
-(void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)remoteTaskDidFinish:(id)arg1 ;
-(void)runWithClient:(id)arg1 arguments:(id)arg2 ;
-(void)connectToTaskClientWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)operationWithClient:(id)arg1 arguments:(id)arg2 ;
-(void)setPrintJSON:(BOOL)arg1 ;
-(void)setPrintVerbose:(BOOL)arg1 ;
-(id)arrayByParsingAndRemovingArgumentFlags:(id)arg1 ;
-(id)requestWithArguments:(id)arg1 ;
-(void)_remoteTaskDidProgress:(id)arg1 ;
-(void)_remoteTaskDidFinish:(id)arg1 ;
-(void)remoteTaskDidProgress:(id)arg1 ;
-(void)cleanupAndExitIfNeeded;
-(BOOL)isCommandFinished;
-(BOOL)didCommandSucceed;
-(BOOL)didOperationSucceed:(id)arg1 ;
-(void)runWithArguments:(id)arg1 ;
-(BOOL)shouldPrintJSON;
-(BOOL)shouldPrintVerbose;
@end

