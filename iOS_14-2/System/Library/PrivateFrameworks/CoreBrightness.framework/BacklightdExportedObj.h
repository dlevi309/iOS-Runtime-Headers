/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)reconnect;
-(void)setServer:(BrightnessSystemInternal *)arg1 ;
-(id)copyClientID;
-(void)clientCopyPropertyWithKey:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)clientSetPropertyWithKey:(id)arg1 property:(id)arg2 ;
-(void)registerNotificationForProperties:(id)arg1 ;
-(NSXPCConnection *)connection;
-(BrightnessSystemInternal *)server;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)dealloc;
@end

