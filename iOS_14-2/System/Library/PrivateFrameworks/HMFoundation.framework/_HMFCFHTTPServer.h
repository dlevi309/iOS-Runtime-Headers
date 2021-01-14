/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@protocol _HMFCFHTTPServerDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface _HMFCFHTTPServer : HMFObject <HMFLogging> {

	id<_HMFCFHTTPServerDelegate> _delegate;
	unsigned long long _port;
	NSObject*<OS_dispatch_queue> _clientQueue;
	CFHTTPServerRef _internal;
	NSMutableArray* _connections;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) CFHTTPServerRef internal;                              //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) NSMutableArray * connections;                          //@synthesize connections=_connections - In the implementation block
@property (__weak) id<_HMFCFHTTPServerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long port;                               //@synthesize port=_port - In the implementation block
@property (assign) double connectionIdleTimeout; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(unsigned long long)port;
-(id)init;
-(id<_HMFCFHTTPServerDelegate>)delegate;
-(NSMutableArray *)connections;
-(CFHTTPServerRef)internal;
-(id)logIdentifier;
-(void)setConnectionIdleTimeout:(double)arg1 ;
-(double)connectionIdleTimeout;
-(void)setDelegate:(id<_HMFCFHTTPServerDelegate>)arg1 ;
-(BOOL)isValid;
-(void)invalidate;
-(double)watchdogTimeout;
-(void)dealloc;
-(id)initWithPort:(unsigned long long)arg1 options:(unsigned long long)arg2 ;
-(void)setWatchdogTimeout:(double)arg1 ;
@end

