/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSXPCListenerEndpoint, NSObject, NSXPCListener, NSString;

@interface VSGenericUpdateEndpoint : NSObject <NSXPCListenerDelegate, NSSecureCoding> {

	NSXPCListenerEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listener;
	/*^block*/id _handler;

}

@property (nonatomic,retain) NSXPCListenerEndpoint * endpoint;                //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (nonatomic,copy) id handler;                                        //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)configuredEndpointWithUpdateHandler:(/*^block*/id)arg1 withConnection:(id)arg2 ;
+(/*^block*/id)remoteUpdateHanderForEndpoint:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(void)setEndpoint:(NSXPCListenerEndpoint *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSXPCListenerEndpoint *)endpoint;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)handler;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
@end

