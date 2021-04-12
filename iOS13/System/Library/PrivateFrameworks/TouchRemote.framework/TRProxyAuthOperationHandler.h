/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
*/

#import <libobjc.A.dylib/TROperationHandler.h>

@class NSString;

@interface TRProxyAuthOperationHandler : NSObject <TROperationHandler> {

	/*^block*/id _proxyAuthHandler;

}

@property (nonatomic,copy) id proxyAuthHandler;                     //@synthesize proxyAuthHandler=_proxyAuthHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(id)initWithProxyAuthHandler:(/*^block*/id)arg1 ;
-(id)proxyAuthHandler;
-(void)setProxyAuthHandler:(id)arg1 ;
@end

