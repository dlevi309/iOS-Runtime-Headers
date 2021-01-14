/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(void)sendResponse:(id)arg1 ;
-(BOOL)open;
-(NSMutableArray *)pendingRequests;
-(id)init;
-(id<_HMFCFHTTPServerConnectionDelegate>)delegate;
-(void)close;
-(CFHTTPServerConnectionRef)internal;
-(id)logIdentifier;
-(void)setDelegate:(id<_HMFCFHTTPServerConnectionDelegate>)arg1 ;
-(BOOL)isValid;
-(HMFNetAddress *)address;
-(unsigned long long)hash;
-(void)invalidate;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
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

