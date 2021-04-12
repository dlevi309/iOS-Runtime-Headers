/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <libobjc.A.dylib/DKExtensionHostAdapterDelegate.h>

@class DKDiagnosticHostContext, NSXPCConnection, NSString;

@interface DKDiagnosticServiceRequest : NSObject <DKExtensionHostAdapterDelegate> {

	BOOL _completed;
	id _hostServicesDelegate;
	/*^block*/id _completion;
	DKDiagnosticHostContext* _context;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) BOOL completed;                                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,copy) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) DKDiagnosticHostContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id hostServicesDelegate;                 //@synthesize hostServicesDelegate=_hostServicesDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletion:(id)arg1 ;
-(BOOL)completed;
-(id)completion;
-(DKDiagnosticHostContext *)context;
-(void)setCompleted:(BOOL)arg1 ;
-(NSXPCConnection *)connection;
-(void)didInvalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setContext:(DKDiagnosticHostContext *)arg1 ;
-(void)cancelExtensionRequest;
-(void)completeWithPayload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHostServicesDelegate:(id)arg1 ;
-(id)initWithHostServicesDelegate:(id)arg1 ;
-(void)didInterrupt;
-(void)didFailStart;
-(id)hostServicesDelegate;
-(void)_completeWithDiagnosticResult:(id)arg1 error:(id)arg2 ;
@end

