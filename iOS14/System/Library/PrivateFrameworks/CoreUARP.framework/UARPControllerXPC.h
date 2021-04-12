/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
*/

#import <libobjc.A.dylib/UARPXPCConsumer.h>
#import <libobjc.A.dylib/UARPControllerInternalDelegate.h>

@protocol OS_os_log;
@class NSXPCConnection, NSError, NSObject, UARPController, NSString;

@interface UARPControllerXPC : NSObject <UARPXPCConsumer, UARPControllerInternalDelegate> {

	NSXPCConnection* _xpcConnection;
	NSError* _lastProviderError;
	/*^block*/id _providerErrorReply;
	NSObject*<OS_os_log> _xpcLog;
	UARPController* _controller;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)removeAccessory:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)dealloc;
-(void)sendUpdateFirmwareAnalyticsEventForAccessoryID:(id)arg1 assetID:(id)arg2 params:(id)arg3 ;
-(void)assetAvailablityUpdateForAccessoryID:(id)arg1 assetID:(id)arg2 ;
-(id)invocationForProviderSelector:(SEL)arg1 ;
-(BOOL)performSynchronousProviderInvocation:(id)arg1 accessory:(id)arg2 requireKnown:(BOOL)arg3 description:(const char*)arg4 ;
-(BOOL)addAccessory:(id)arg1 assetID:(id)arg2 ;
-(BOOL)changeAssetLocation:(id)arg1 assetID:(id)arg2 ;
-(BOOL)downloadAvailableFirmwareUpdate:(id)arg1 assetID:(id)arg2 withUserIntent:(BOOL)arg3 ;
-(BOOL)downloadReleaseNotes:(id)arg1 assetID:(id)arg2 ;
-(void)sendFirmwareUpdateProgressForAccessory:(id)arg1 assetID:(id)arg2 bytesSent:(unsigned long long)arg3 bytesTotal:(unsigned long long)arg4 ;
-(BOOL)checkForUpdate:(id)arg1 ;
-(BOOL)personalizationVectorForAccessory:(id)arg1 assetTag:(unsigned)arg2 outVector:(unsigned*)arg3 ;
-(void)manifestPropertiesReceivedForAccessory:(id)arg1 assetTag:(unsigned)arg2 properties:(id)arg3 ;
-(BOOL)updateProperty:(unsigned long long)arg1 value:(id)arg2 forAccessory:(id)arg3 ;
@end

