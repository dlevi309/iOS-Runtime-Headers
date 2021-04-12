/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
-(BOOL)open;
-(void)close;
-(id<REHTTPConnectionDelegate>)delegate;
-(void)setDelegate:(id<REHTTPConnectionDelegate>)arg1 ;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(CFHTTPServerConnectionRef)connection;
-(id)initWithConnection:(CFHTTPServerConnectionRef)arg1 ;
-(void)invalidated;
-(void)_sendResponse:(id)arg1 ;
-(void)_handleCompleteRequest:(id)arg1 stream:(id)arg2 error:(id)arg3 ;
-(void)didRecieveError:(id)arg1 ;
-(void)didRecieveRequest:(CFHTTPServerRequestRef)arg1 ;
-(void)didCompleteResponse:(CFHTTPServerResponseRef)arg1 error:(id)arg2 ;
@end

