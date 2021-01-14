/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFObject.h>
#import <HMFoundation/_HMFCFHTTPServerConnectionDelegate.h>
#import <HMFoundation/HMFLogging.h>

@protocol HMFHTTPClientConnectionDelegate, OS_dispatch_queue;
@class NSObject, NSMutableArray, _HMFCFHTTPServerConnection, HMFNetAddress, NSString;

@interface HMFHTTPClientConnection : HMFObject <_HMFCFHTTPServerConnectionDelegate, HMFLogging> {

	id<HMFHTTPClientConnectionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingRespones;
	_HMFCFHTTPServerConnection* _internal;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRespones;                      //@synthesize pendingRespones=_pendingRespones - In the implementation block
@property (nonatomic,readonly) _HMFCFHTTPServerConnection * internal;                 //@synthesize internal=_internal - In the implementation block
@property (nonatomic,readonly) HMFNetAddress * peerAddress; 
@property (__weak) id<HMFHTTPClientConnectionDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(HMFNetAddress *)peerAddress;
-(id)initWithConnection:(id)arg1 ;
-(id<HMFHTTPClientConnectionDelegate>)delegate;
-(void)close;
-(_HMFCFHTTPServerConnection *)internal;
-(id)shortDescription;
-(id)logIdentifier;
-(void)setDelegate:(id<HMFHTTPClientConnectionDelegate>)arg1 ;
-(id)attributeDescriptions;
-(void)dealloc;
-(void)sendResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(NSMutableArray *)pendingRespones;
@end

