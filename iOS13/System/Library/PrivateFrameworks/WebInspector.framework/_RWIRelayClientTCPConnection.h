/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
*/

#import <WebInspector/_RWIRelayClientConnection.h>
#import <libobjc.A.dylib/_RWITCPConnectionDelegate.h>

@class _RWITCPConnection, NSString;

@interface _RWIRelayClientTCPConnection : _RWIRelayClientConnection <_RWITCPConnectionDelegate> {

	_RWITCPConnection* _connection;

}

@property (nonatomic,retain) _RWITCPConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)connectionFromTCPConnection:(id)arg1 delegate:(id)arg2 ;
+(id)connectionFromLockdownCheckinWithInfo:(void*)arg1 delegate:(id)arg2 ;
-(_RWITCPConnection *)connection;
-(void)sendMessage:(id)arg1 ;
-(void)setConnection:(_RWITCPConnection *)arg1 ;
-(void)closeInternal;
-(id)initWithTCPConnection:(id)arg1 delegate:(id)arg2 ;
-(void)tcpConnection:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)tcpConnectionDidClose:(id)arg1 ;
@end

