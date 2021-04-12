/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSXPCListener, NSString;

@interface CUTDSDaemon : NSObject <NSXPCListenerDelegate> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	LogCategory* _ucat;
	NSMutableSet* _xpcConnections;
	NSXPCListener* _xpcListener;
	NSString* _xpcServiceName;

}

@property (nonatomic,copy) NSString * xpcServiceName;               //@synthesize xpcServiceName=_xpcServiceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTDSDaemon;
-(id)init;
-(void)_activate;
-(void)invalidate;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)_invalidated;
-(void)activate;
-(void)_xpcConnectionInvalidated:(id)arg1 ;
-(NSString *)xpcServiceName;
-(void)setXpcServiceName:(NSString *)arg1 ;
@end

