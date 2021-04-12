/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/

#import <libobjc.A.dylib/XPCClientConnectionDelegate.h>

@protocol XPCNSClientConnectionDelegate;
@class XPCClientConnection, NSString;

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate> {

	XPCClientConnection* _clientConnection;
	id<XPCNSClientConnectionDelegate> _delegate;

}

@property (nonatomic,readonly) id<XPCNSClientConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<XPCNSClientConnectionDelegate>)delegate;
-(id)initWithServiceName:(id)arg1 delegate:(id)arg2 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)XPCClientConnection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(void)sendMessage:(id)arg1 data:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)sendMessageReliably:(id)arg1 data:(id)arg2 maxRetryCount:(int)arg3 withHandler:(/*^block*/id)arg4 ;
@end

