/*
* Generated on Thursday, January 14, 2021 at 2:23:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
*/

#import <AXMediaUtilities/AXMServiceClientInterface.h>
#import <AXMediaUtilities/AXMServiceInterface.h>

@protocol OS_dispatch_queue, AXMServiceDelegate;
@class NSObject, NSXPCConnection, NSString;

@interface AXMService : NSObject <AXMServiceClientInterface, AXMServiceInterface> {

	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	id<AXMServiceDelegate> _delegate;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSXPCConnection * xpcConnection;                     //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (assign,nonatomic,__weak) id<AXMServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(id<AXMServiceDelegate>)delegate;
-(void)_destroyXPCConnection;
-(void)prewarmVisionEngineService;
-(void)visionEngine:(id)arg1 evaluateSource:(id)arg2 context:(id)arg3 options:(long long)arg4 result:(/*^block*/id)arg5 ;
-(void)setDelegate:(id<AXMServiceDelegate>)arg1 ;
-(id)_serviceProxy;
-(void)dealloc;
@end

