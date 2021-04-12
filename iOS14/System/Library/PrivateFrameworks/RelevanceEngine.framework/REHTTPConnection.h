/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue, REHTTPConnectionDelegate;
@class NSObject, NSMutableArray, NSMapTable, NSString;

@interface REHTTPConnection : NSObject <NSStreamDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _pendingResponse;
	NSMapTable* _pendingRequests;
	id<REHTTPConnectionDelegate> _delegate;
	CFHTTPServerConnectionRef _connection;

}

@property (nonatomic,readonly) CFHTTPServerConnectionRef connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<REHTTPConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_sendResponse:(id)arg1 ;
-(id)initWithConnection:(CFHTTPServerConnectionRef)arg1 ;
-(BOOL)open;
-(void)invalidated;
-(id<REHTTPConnectionDelegate>)delegate;
-(void)close;
-(void)setDelegate:(id<REHTTPConnectionDelegate>)arg1 ;
-(BOOL)isValid;
-(CFHTTPServerConnectionRef)connection;
-(void)invalidate;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)_handleCompleteRequest:(id)arg1 stream:(id)arg2 error:(id)arg3 ;
-(void)didRecieveError:(id)arg1 ;
-(void)didRecieveRequest:(CFHTTPServerRequestRef)arg1 ;
-(void)didCompleteResponse:(CFHTTPServerResponseRef)arg1 error:(id)arg2 ;
@end

