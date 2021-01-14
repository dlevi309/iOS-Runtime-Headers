/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol OS_dispatch_queue;
@class ACCConnectionInfo, NSObject, NSString;

@interface BWFigCaptureAttachedAccessoriesMonitor : NSObject {

	ACCConnectionInfo* _connectionInfoProvider;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSString* _walletAccessoryUUID;

}

@property (nonatomic,readonly) BOOL walletAccessoryConnected; 
+(void)initialize;
+(id)sharedAttachedAccessoriesMonitor;
-(id)init;
-(void)accessoryConnectionDetached:(id)arg1 ;
-(void)accessoryEndpointAttached:(id)arg1 transportType:(int)arg2 protocol:(int)arg3 forConnection:(id)arg4 ;
-(BOOL)walletAccessoryConnected;
-(void)dealloc;
@end

