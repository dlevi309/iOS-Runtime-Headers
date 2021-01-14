/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCInterface, NSXPCListener, NSString;

@interface AKAdaptiveService : NSObject <NSXPCListenerDelegate> {

	NSXPCInterface* _exportedInterface;
	id _exportedObject;
	NSXPCListener* _listener;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (copy) id interruptionHandler;                            //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (copy) id invalidationHandler;                            //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInterruptionHandler:(id)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)listenerEndpoint;
-(id)_initWithInterface:(id)arg1 object:(id)arg2 ;
-(id)initWithInterface:(id)arg1 strongObject:(id)arg2 ;
-(id)initWithInterface:(id)arg1 weakObject:(id)arg2 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)resume;
-(id)interruptionHandler;
-(void)dealloc;
@end

