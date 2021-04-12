/*
* Generated on Monday, March 1, 2021 at 2:33:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServicesUI.framework/SoftwareUpdateServicesUI
*/

#import <libobjc.A.dylib/SUSUIControllerServerInterface.h>

@class NSXPCConnection, NSString;

@interface SUSUIControllerClient : NSObject <SUSUIControllerServerInterface> {

	NSXPCConnection* _serverConnection;
	BOOL _connected;
	BOOL _serverIsExiting;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id)_remoteInterface;
-(void)_invalidateConnection;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_connectToServerIfNecessary;
-(void)_noteConnectionDropped;
-(BOOL)createKeybagWithSecret:(id)arg1 ;
-(void)_noteServerExiting;
@end

