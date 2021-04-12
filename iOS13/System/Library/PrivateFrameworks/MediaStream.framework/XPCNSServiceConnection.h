/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
*/

#import <libobjc.A.dylib/XPCServiceConnectionDelegate.h>

@protocol XPCNSServiceConnectionDelegate, NSObject;
@class XPCServiceConnection, NSString;

@interface XPCNSServiceConnection : NSObject <XPCServiceConnectionDelegate> {

	XPCServiceConnection* _serviceConnection;
	id<XPCNSServiceConnectionDelegate> _delegate;
	id<NSObject> _context;

}

@property (nonatomic,retain,readonly) NSString * serviceName; 
@property (assign,nonatomic,__weak) id<XPCNSServiceConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<NSObject> context;                                            //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<XPCNSServiceConnectionDelegate>)delegate;
-(void)setDelegate:(id<XPCNSServiceConnectionDelegate>)arg1 ;
-(id<NSObject>)context;
-(NSString *)serviceName;
-(void)setContext:(id<NSObject>)arg1 ;
-(void)sendMessage:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)shutDownCompletionBlock:(/*^block*/id)arg1 ;
-(void)XPCServiceConnection:(id)arg1 didReceiveRequest:(id)arg2 sequenceNumber:(unsigned long long)arg3 ;
-(void)XPCServiceConnectionDidDisconnect:(id)arg1 ;
-(id)initWithXPCServiceConnection:(id)arg1 ;
@end

