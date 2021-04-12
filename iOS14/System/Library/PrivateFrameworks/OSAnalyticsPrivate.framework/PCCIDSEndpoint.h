/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/

#import <OSAnalyticsPrivate/PCCEndpoint.h>
#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class IDSService, NSMutableDictionary, NSString;

@interface PCCIDSEndpoint : PCCEndpoint <IDSServiceDelegate> {

	IDSService* _pairedWatchService;
	IDSService* _homeDeviceService;
	NSMutableDictionary* _serviceByDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 ;
-(id)init;
-(void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4 ;
-(id)startService:(id)arg1 ;
-(void)runWithDelegate:(id)arg1 ;
-(BOOL)isDeviceNearby:(id)arg1 ;
-(id)send:(id)arg1 message:(id)arg2 error:(id*)arg3 ;
-(id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(id)deviceIds;
-(id)serviceByDeviceID:(id)arg1 ;
@end

