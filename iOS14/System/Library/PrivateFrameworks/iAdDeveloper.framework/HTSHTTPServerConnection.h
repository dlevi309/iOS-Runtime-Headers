/*
* Generated on Thursday, January 14, 2021 at 2:28:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
*/

#import <iAdDeveloper/iAdDeveloper-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class HTSHTTPServer, NSObject, NSMutableArray, NSString, NSTimer;

@interface HTSHTTPServerConnection : NSObject <NSStreamDelegate> {

	HTSHTTPServer* _server;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSObject*<OS_dispatch_source> _readSource;
	BOOL _readActive;
	NSObject*<OS_dispatch_source> _writeSource;
	BOOL _writeActive;
	int _socket;
	int _socketRefCount;
	CFHTTPMessageRef _incomingMessage;
	NSMutableArray* _incomingQueue;
	NSMutableArray* _outputQueue;
	BOOL _outputStalled;
	BOOL _closeOnEmptyQueue;
	NSString* _identifier;
	double _lastActivity;
	NSTimer* _idleTimer;

}

@property (assign,nonatomic) double lastActivity;                   //@synthesize lastActivity=_lastActivity - In the implementation block
@property (nonatomic,retain) NSTimer * idleTimer;                   //@synthesize idleTimer=_idleTimer - In the implementation block
@property (nonatomic,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSTimer *)idleTimer;
-(void)setIdleTimer:(NSTimer *)arg1 ;
-(NSString *)identifier;
-(void)dealloc;
-(double)lastActivity;
-(id)initWithServer:(id)arg1 socket:(int)arg2 ;
-(void)_closeInputStream;
-(void)_closeOutputStream;
-(void)_processIncomingBytes:(const char*)arg1 length:(long long)arg2 ;
-(void)sendResponse:(id)arg1 withLatency:(double)arg2 closeAfterSending:(BOOL)arg3 ;
-(void)setLastActivity:(double)arg1 ;
-(void)_processStreamInput;
-(void)_processStreamOutput;
-(void)_shutdownIdleConnection:(id)arg1 ;
-(void)printData:(id)arg1 withMessage:(id)arg2 ;
@end

