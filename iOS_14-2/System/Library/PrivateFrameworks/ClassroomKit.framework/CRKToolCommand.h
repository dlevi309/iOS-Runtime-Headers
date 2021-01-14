/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	BOOL _useDMFRequest;
	id<CRKToolCommandDelegate> _delegate;
	NSString* _sessionIdentifier;

}

@property (assign,getter=shouldPrintJSON,nonatomic) BOOL printJSON;                      //@synthesize printJSON=_printJSON - In the implementation block
@property (assign,getter=shouldPrintVerbose,nonatomic) BOOL printVerbose;                //@synthesize printVerbose=_printVerbose - In the implementation block
@property (assign,getter=shouldUseDMFRequest,nonatomic) BOOL useDMFRequest;              //@synthesize useDMFRequest=_useDMFRequest - In the implementation block
@property (assign,nonatomic,__weak) id<CRKToolCommandDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * sessionIdentifier;                                 //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aliases;
+(id)help;
+(id)description;
+(BOOL)supportsJSON;
+(BOOL)supportsVerboseOutput;
+(BOOL)supportsDMFRequest;
+(BOOL)instructorCommand;
+(void)printHelp;
+(BOOL)handlesProgress;
+(id)subcommandPath;
-(id)transportProvider;
-(id)init;
-(void)client:(id)arg1 didInterruptWithError:(id)arg2 ;
-(id<CRKToolCommandDelegate>)delegate;
-(void)clientDidDisconnect:(id)arg1 ;
-(void)executeOperation:(id)arg1 ;
-(void)setSessionIdentifier:(NSString *)arg1 ;
-(NSString *)sessionIdentifier;
-(void)setDelegate:(id<CRKToolCommandDelegate>)arg1 ;
-(void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3 ;
-(void)clientDidConnect:(id)arg1 ;
-(void)remoteTaskDidFinish:(id)arg1 ;
-(void)runWithClient:(id)arg1 arguments:(id)arg2 ;
-(void)connectToTaskClientWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)operationWithClient:(id)arg1 arguments:(id)arg2 ;
-(void)setPrintJSON:(BOOL)arg1 ;
-(void)setPrintVerbose:(BOOL)arg1 ;
-(void)setUseDMFRequest:(BOOL)arg1 ;
-(id)arrayByParsingAndRemovingArgumentFlags:(id)arg1 ;
-(BOOL)shouldUseDMFRequest;
-(id)DMFRequestWithArguments:(id)arg1 ;
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

