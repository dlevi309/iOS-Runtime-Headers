/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REHTTPConnectionDelegate.h>

@protocol OS_dispatch_queue, REHTTPServerDelegate;
@class NSObject, NSMutableArray;

@interface REHTTPServer : NSObject <REHTTPConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CFHTTPServerRef _server;
	NSMutableArray* _connections;
	unsigned short _port;
	id<REHTTPServerDelegate> _delegate;

}

@property (nonatomic,readonly) unsigned short port;                            //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) id<REHTTPServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned short)port;
-(void)invalidated;
-(id<REHTTPServerDelegate>)delegate;
-(BOOL)_valid;
-(void)invalidate;
-(void)dealloc;
-(id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didRecievedError:(id)arg1 ;
-(void)didOpenConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)didCloseConnection:(CFHTTPServerConnectionRef)arg1 ;
@end

