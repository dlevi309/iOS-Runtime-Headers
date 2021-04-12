/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)close;
-(id<HMFHTTPClientConnectionDelegate>)delegate;
-(void)setDelegate:(id<HMFHTTPClientConnectionDelegate>)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(_HMFCFHTTPServerConnection *)internal;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(HMFNetAddress *)peerAddress;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(void)connection:(id)arg1 didReceiveRequest:(id)arg2 ;
-(NSMutableArray *)pendingRespones;
-(void)sendResponse:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

