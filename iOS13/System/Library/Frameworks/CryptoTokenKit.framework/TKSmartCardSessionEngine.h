/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <libobjc.A.dylib/TKProtocolSmartCardSession.h>

@class TKSmartCardSlotEngine, NSXPCConnection;

@interface TKSmartCardSessionEngine : NSObject <TKProtocolSmartCardSession> {

	TKSmartCardSlotEngine* _slot;
	BOOL _transmitting;
	BOOL _valid;
	BOOL _active;
	long long _endPolicy;
	NSXPCConnection* _connection;

}

@property (assign) BOOL valid;                                                   //@synthesize valid=_valid - In the implementation block
@property (assign) BOOL active;                                                  //@synthesize active=_active - In the implementation block
@property (assign) long long endPolicy;                                          //@synthesize endPolicy=_endPolicy - In the implementation block
@property (nonatomic,__weak,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(void)setActive:(BOOL)arg1 ;
-(NSXPCConnection *)connection;
-(long long)endPolicy;
-(void)setEndPolicy:(long long)arg1 ;
-(BOOL)active;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)transmit:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)terminateWithReply:(/*^block*/id)arg1 ;
-(void)setSessionEndPolicy:(long long)arg1 ;
-(id)initWithSlot:(id)arg1 connection:(id)arg2 ;
@end

