/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, CARSessionRequestHandlerProxy, NSString;

@interface CARSessionRequestAgent : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	CARSessionRequestHandlerProxy* _handlerProxy;

}

@property (nonatomic,retain) NSXPCListener * listener;                                           //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) CARSessionRequestHandlerProxy * handlerProxy;                       //@synthesize handlerProxy=_handlerProxy - In the implementation block
@property (nonatomic,__weak,readonly) id<CARSessionRequestHandling> requestHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CARSessionRequestHandling>)requestHandler;
-(CARSessionRequestHandlerProxy *)handlerProxy;
-(id)initWithRequestHandler:(id)arg1 ;
-(BOOL)wantsCarPlayControlAdvertisingForUSB;
-(BOOL)wantsCarPlayControlAdvertisingForWiFiUUID:(id)arg1 ;
-(void)setHandlerProxy:(CARSessionRequestHandlerProxy *)arg1 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)dealloc;
@end

