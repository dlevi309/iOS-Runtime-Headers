/*
* Generated on Thursday, January 14, 2021 at 2:24:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setNotifyToken:(int)arg1 ;
-(int)notifyToken;
-(id)initWithConfiguration:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)invalidate;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)hostProtocolDelegate;
-(void)dealloc;
-(BOOL)requiresProxyingAVAudioSessionState;
@end

