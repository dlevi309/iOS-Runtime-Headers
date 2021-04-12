/*
* Generated on Monday, March 1, 2021 at 2:31:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
*/

#import <CallKit/CXProvider.h>

@class NSXPCConnection;

@interface CXXPCProvider : CXProvider {

	int _notifyToken;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) int notifyToken;                           //@synthesize notifyToken=_notifyToken - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(int)notifyToken;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)hostProtocolDelegate;
-(BOOL)requiresProxyingAVAudioSessionState;
-(void)setNotifyToken:(int)arg1 ;
@end

