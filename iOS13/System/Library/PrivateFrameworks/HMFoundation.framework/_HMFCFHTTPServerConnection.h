/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFLogging.h>

@protocol _HMFCFHTTPServerConnectionDelegate, OS_dispatch_queue;
@class HMFNetAddress, NSObject, NSMutableArray, NSString;

@interface _HMFCFHTTPServerConnection : HMFObject <HMFLogging> {

	id<_HMFCFHTTPServerConnectionDelegate> _delegate;
	HMFNetAddress* _address;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSMutableArray* _pendingRequests;
	NSMutableArray* _pendingRespones;
	CFHTTPServerConnectionRef _internal;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRequests;                      //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) NSMutableArray * pendingRespones;                      //@synthesize pendingRespones=_pendingRespones - In the implementation block
@property (nonatomic,readonly) CFHTTPServerConnectionRef internal;                    //@synthesize internal=_internal - In the implementation block
@property (__weak) id<_HMFCFHTTPServerConnectionDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) HMFNetAddress * address;                               //@synthesize address=_address - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)invalidate;
-(BOOL)isValid;
-(BOOL)open;
-(void)close;
-(id<_HMFCFHTTPServerConnectionDelegate>)delegate;
-(void)setDelegate:(id<_HMFCFHTTPServerConnectionDelegate>)arg1 ;
-(HMFNetAddress *)address;
-(CFHTTPServerConnectionRef)internal;
-(void)sendResponse:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSMutableArray *)pendingRequests;
-(id)logIdentifier;
-(id)initWithConnectionRef:(CFHTTPServerConnectionRef)arg1 ;
-(void)_handleCompletedReceivedRequest:(id)arg1 error:(id)arg2 ;
-(void)handleRequest:(id)arg1 bodyReadStream:(CFReadStreamRef)arg2 eventType:(unsigned long long)arg3 ;
-(void)_stopReadBody:(id)arg1 ;
-(void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2 ;
-(void)_sendStatusCode:(long long)arg1 forRequest:(id)arg2 bodyData:(id)arg3 ;
-(NSMutableArray *)pendingRespones;
-(void)_handleReceivedRequestRef:(CFHTTPServerRequestRef)arg1 ;
-(void)_handleCompletedResponse:(CFHTTPServerResponseRef)arg1 error:(id)arg2 ;
@end

