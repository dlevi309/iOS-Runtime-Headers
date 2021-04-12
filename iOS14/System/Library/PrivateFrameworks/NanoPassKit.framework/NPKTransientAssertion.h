/*
* Generated on Thursday, January 14, 2021 at 2:28:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/NPKTransientPassAssertionServerClientProtocol.h>

@class NSXPCConnection, NSString;

@interface NPKTransientAssertion : NSObject <NPKTransientPassAssertionServerClientProtocol> {

	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)_remoteObjectProxy;
-(void)invalidate;
-(void)handleDelegatedDoublePressEvent;
-(void)_resyncState;
@end

