/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMServiceClientInterface.h>
#import <AXMediaUtilities/AXMServiceInterface.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSString;

@interface AXMService : NSObject <AXMServiceClientInterface, AXMServiceInterface> {

	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(id)_serviceProxy;
-(void)_destroyXPCConnection;
-(void)prewarmVisionEngineService;
-(void)visionEngine:(id)arg1 evaluateSource:(id)arg2 context:(id)arg3 options:(long long)arg4 result:(/*^block*/id)arg5 ;
@end

