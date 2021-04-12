/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, ATService, NSString;

@interface ATServiceProxyListener : NSObject <NSXPCListenerDelegate> {

	NSXPCListener* _listener;
	ATService* _service;

}

@property (assign,nonatomic,__weak) ATService * service;              //@synthesize service=_service - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)stop;
-(void)start;
-(ATService *)service;
-(void)setService:(ATService *)arg1 ;
-(id)initWithService:(id)arg1 ;
@end

