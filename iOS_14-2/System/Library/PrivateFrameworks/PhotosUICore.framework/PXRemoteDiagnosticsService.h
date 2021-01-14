/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue, PXDiagnosticsAgent;
@class NSXPCListener, NSObject, NSString;

@interface PXRemoteDiagnosticsService : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	NSObject*<OS_dispatch_queue> _diagnosticsQueue;
	id<PXDiagnosticsAgent> _agent;

}

@property (nonatomic,retain) id<PXDiagnosticsAgent> agent;              //@synthesize agent=_agent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_isRunningInPhotosApp;
+(void)startServerOnInternalDevicesWithAgentClass:(Class)arg1 ;
-(id<PXDiagnosticsAgent>)agent;
-(id)init;
-(void)setAgent:(id<PXDiagnosticsAgent>)arg1 ;
-(void)_startListening;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

