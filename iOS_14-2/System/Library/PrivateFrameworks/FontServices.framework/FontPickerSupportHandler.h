/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/

#import <FontServices/FontServicesFontPickerSupportProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSXPCConnection, NSString;

@interface FontPickerSupportHandler : NSObject <FontServicesFontPickerSupportProtocol, NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSXPCListener* _listenerForFontServicesDaemon;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCListener * listener;                                   //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCListener * listenerForFontServicesDaemon;              //@synthesize listenerForFontServicesDaemon=_listenerForFontServicesDaemon - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                               //@synthesize connection=_connection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(NSXPCListener *)listener;
-(NSXPCConnection *)connection;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)checkin:(/*^block*/id)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)ping:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)registeredFontsChanged:(id)arg1 ;
-(void)activateFontsForFontPickerClient:(id)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)pathsContainsFontAsset:(id)arg1 ;
-(NSXPCListener *)listenerForFontServicesDaemon;
-(void)setListenerForFontServicesDaemon:(NSXPCListener *)arg1 ;
@end

