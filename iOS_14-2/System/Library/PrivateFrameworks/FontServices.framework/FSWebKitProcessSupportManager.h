/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
*/

#import <FontServices/FontServicesWebKitSupportClientProtocol.h>
#import <FontServices/FontServicesWebKitSupportServerProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCConnection, NSXPCListener, NSString;

@interface FSWebKitProcessSupportManager : NSObject <FontServicesWebKitSupportClientProtocol, FontServicesWebKitSupportServerProtocol, NSXPCListenerDelegate> {

	NSXPCConnection* _hostConnection;
	NSXPCListener* _serverListener;

}

@property (nonatomic,retain) NSXPCConnection * hostConnection;              //@synthesize hostConnection=_hostConnection - In the implementation block
@property (nonatomic,retain) NSXPCListener * serverListener;                //@synthesize serverListener=_serverListener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)ping:(/*^block*/id)arg1 ;
-(void)checkin;
-(NSXPCListener *)serverListener;
-(void)ping2:(/*^block*/id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCConnection *)hostConnection;
-(void)setHostConnection:(NSXPCConnection *)arg1 ;
-(void)setServerListener:(NSXPCListener *)arg1 ;
-(void)userInstalledFontsInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)initWithXPCEndpoint:(id)arg1 ;
@end

