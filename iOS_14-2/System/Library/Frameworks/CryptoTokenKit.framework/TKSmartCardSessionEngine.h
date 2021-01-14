/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setValid:(BOOL)arg1 ;
-(void)setEndPolicy:(long long)arg1 ;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(long long)endPolicy;
-(NSXPCConnection *)connection;
-(void)transmit:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)terminateWithReply:(/*^block*/id)arg1 ;
-(void)setSessionEndPolicy:(long long)arg1 ;
-(BOOL)valid;
-(void)dealloc;
-(id)initWithSlot:(id)arg1 connection:(id)arg2 ;
@end

