/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <AirPlayReceiver/AirPlayControllerAsync.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSXPCListener;

@interface AirPlayControllerServer : NSObject <NSXPCListenerDelegate, AirPlayControllerAsync> {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _serviceName;
	NSXPCListener* _xpcListener;
	/*^block*/id _performCommandBlock;
	/*^block*/id _copyPropertyBlock;
	/*^block*/id _setPropertyBlock;

}

@property (assign,nonatomic) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id performCommandBlock;                                    //@synthesize performCommandBlock=_performCommandBlock - In the implementation block
@property (nonatomic,copy) id copyPropertyBlock;                                      //@synthesize copyPropertyBlock=_copyPropertyBlock - In the implementation block
@property (nonatomic,copy) id setPropertyBlock;                                       //@synthesize setPropertyBlock=_setPropertyBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_connectionInvalidated:(id)arg1 ;
-(void)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getProperty:(id)arg1 qualifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)startWithXPCName:(id)arg1 ;
-(id)performCommandBlock;
-(void)setPerformCommandBlock:(id)arg1 ;
-(id)copyPropertyBlock;
-(void)setCopyPropertyBlock:(id)arg1 ;
-(id)setPropertyBlock;
-(void)setSetPropertyBlock:(id)arg1 ;
@end

