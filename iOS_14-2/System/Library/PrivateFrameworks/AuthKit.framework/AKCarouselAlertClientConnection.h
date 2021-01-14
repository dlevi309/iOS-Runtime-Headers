/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface AKCarouselAlertClientConnection : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSXPCConnection* _xpcConnection;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                         //@synthesize xpcConnection=_xpcConnection - In the implementation block
+(id)sharedConnection;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(id)init;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(id)connection;
-(void)dismissAlert:(id)arg1 ;
-(void)presentAlertWithDictionary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unsafe_invalidate;
-(void)dealloc;
@end

