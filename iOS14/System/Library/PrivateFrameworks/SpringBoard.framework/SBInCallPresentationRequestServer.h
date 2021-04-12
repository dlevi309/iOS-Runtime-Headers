/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/SBSInCallPresentationClientToServerInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_queue, SBInCallPresentationRequestServerDelegate;
@class NSMutableArray, FBServiceClientAuthenticator, BSServiceConnectionListener, NSObject, NSString;

@interface SBInCallPresentationRequestServer : NSObject <BSServiceConnectionListenerDelegate, SBSInCallPresentationClientToServerInterface, BSInvalidatable> {

	NSMutableArray* _targets;
	FBServiceClientAuthenticator* _clientAuthenticator;
	BSServiceConnectionListener* _connectionListener;
	NSObject*<OS_dispatch_queue> _queue;
	id<SBInCallPresentationRequestServerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBInCallPresentationRequestServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(id)init;
-(id<SBInCallPresentationRequestServerDelegate>)delegate;
-(void)activate;
-(void)setDelegate:(id<SBInCallPresentationRequestServerDelegate>)arg1 ;
-(void)invalidate;
-(oneway void)presentWithConfiguration:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

