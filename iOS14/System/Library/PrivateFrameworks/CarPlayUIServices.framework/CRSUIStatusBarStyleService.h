/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <libobjc.A.dylib/BSServiceConnectionListenerDelegate.h>
#import <libobjc.A.dylib/CRSUIStatusBarStyleClientToServerInterface.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol CRSUIStatusBarStyleServiceDelegate, OS_dispatch_queue;
@class NSMutableArray, BSServiceConnectionListener, NSObject, NSHashTable, NSString;

@interface CRSUIStatusBarStyleService : NSObject <BSServiceConnectionListenerDelegate, CRSUIStatusBarStyleClientToServerInterface, BSInvalidatable> {

	os_unfair_lock_s _lock;
	NSMutableArray* _lock_assertions;
	id<CRSUIStatusBarStyleServiceDelegate> _delegate;
	BSServiceConnectionListener* _listener;
	NSObject*<OS_dispatch_queue> _connectionQueue;
	NSHashTable* _connections;

}

@property (assign,nonatomic,__weak) id<CRSUIStatusBarStyleServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BSServiceConnectionListener * listener;                              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> connectionQueue;                        //@synthesize connectionQueue=_connectionQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * connections;                                           //@synthesize connections=_connections - In the implementation block
@property (nonatomic,readonly) long long interfaceStyle; 
@property (nonatomic,readonly) long long contrast; 
@property (getter=isSiriPresentation,nonatomic,readonly) BOOL siriPresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setConnections:(NSHashTable *)arg1 ;
-(NSObject*<OS_dispatch_queue>)connectionQueue;
-(void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3 ;
-(long long)contrast;
-(void)setConnectionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id<CRSUIStatusBarStyleServiceDelegate>)delegate;
-(NSHashTable *)connections;
-(void)setDelegate:(id<CRSUIStatusBarStyleServiceDelegate>)arg1 ;
-(long long)interfaceStyle;
-(BSServiceConnectionListener *)listener;
-(id)initWithDelegate:(id)arg1 ;
-(void)setListener:(BSServiceConnectionListener *)arg1 ;
-(void)invalidate;
-(void)_connectionQueue_removeConnection:(id)arg1 ;
-(void)_connectionQueue_addConnection:(id)arg1 ;
-(oneway void)clientAcquireForSiriPresentationWithFenceHandle:(id)arg1 animationSettings:(id)arg2 ;
-(oneway void)clientAcquireWithInterfaceStyle:(id)arg1 contrast:(id)arg2 fenceHandle:(id)arg3 animationSettings:(id)arg4 ;
-(oneway void)clientReliquishWithFenceHandle:(id)arg1 animationSettings:(id)arg2 ;
-(BOOL)isSiriPresentation;
@end

