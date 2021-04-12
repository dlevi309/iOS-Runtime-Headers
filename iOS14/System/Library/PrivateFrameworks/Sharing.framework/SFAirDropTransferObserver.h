/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFAirDropTransferObserverProtocol.h>

@protocol SFAirDropTransferObserverDelegate;
@class NSMutableDictionary, NSString;

@interface SFAirDropTransferObserver : SFXPCClient <SFAirDropTransferObserverProtocol> {

	id<SFAirDropTransferObserverDelegate> _delegate;
	NSMutableDictionary* _transferIdentifierToTransfer;

}

@property (retain) NSMutableDictionary * transferIdentifierToTransfer;                           //@synthesize transferIdentifierToTransfer=_transferIdentifierToTransfer - In the implementation block
@property (assign,nonatomic,__weak) id<SFAirDropTransferObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)init;
-(BOOL)shouldEscapeXpcTryCatch;
-(id<SFAirDropTransferObserverDelegate>)delegate;
-(id)remoteObjectInterface;
-(id)exportedInterface;
-(void)removeObserverForLocalOnlyPropertiesOnTransfer:(id)arg1 ;
-(void)setTransferIdentifierToTransfer:(NSMutableDictionary *)arg1 ;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(id)machServiceName;
-(void)activate;
-(void)setDelegate:(id<SFAirDropTransferObserverDelegate>)arg1 ;
-(void)updateActionHandlersOnTransfer:(id)arg1 ;
-(void)updatedTransfer:(id)arg1 ;
-(NSMutableDictionary *)transferIdentifierToTransfer;
-(void)removedTransfer:(id)arg1 ;
-(void)invalidate;
-(void)observeForLocalOnlyPropertiesOnTransfer:(id)arg1 ;
@end

