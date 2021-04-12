/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_noteConnectionDropped;
-(id)_remoteInterface;
-(id)_remoteInterfaceWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_connectToServerIfNecessary;
-(void)_invalidateConnection;
-(void)invalidate;
-(void)dealloc;
-(BOOL)createKeybagWithSecret:(id)arg1 ;
-(void)_noteServerExiting;
@end

