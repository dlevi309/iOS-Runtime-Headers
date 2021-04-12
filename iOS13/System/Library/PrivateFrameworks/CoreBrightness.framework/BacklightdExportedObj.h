/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
*/

#import <libobjc.A.dylib/BacklightdXPCProtocol.h>

@class BrightnessSystemInternal, NSXPCConnection, NSString;

@interface BacklightdExportedObj : NSObject <BacklightdXPCProtocol> {

	unsigned long long _clientID;
	BOOL _clientIDSet;
	BrightnessSystemInternal* _server;
	NSXPCConnection* _connection;

}

@property (assign,nonatomic) BrightnessSystemInternal * server;              //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                   //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setServer:(BrightnessSystemInternal *)arg1 ;
-(BrightnessSystemInternal *)server;
-(void)reconnect;
-(void)clientSetPropertyWithKey:(id)arg1 property:(id)arg2 ;
-(void)clientCopyPropertyWithKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)registerNotificationForProperties:(id)arg1 ;
-(id)copyClientID;
@end

