/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/SFXPCClient.h>
#import <libobjc.A.dylib/SFAirDropClassroomTransferManagerProtocol.h>

@protocol SFAirDropClassroomTransferDelegate;
@class NSString;

@interface SFAirDropClassroomTransferManager : SFXPCClient <SFAirDropClassroomTransferManagerProtocol> {

	id<SFAirDropClassroomTransferDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFAirDropClassroomTransferDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(id<SFAirDropClassroomTransferDelegate>)delegate;
-(void)setDelegate:(id<SFAirDropClassroomTransferDelegate>)arg1 ;
-(id)exportedInterface;
-(id)remoteObjectInterface;
-(id)machServiceName;
-(void)activate;
-(void)_getRemoteObjectProxyOnQueue:(/*^block*/id)arg1 ;
-(BOOL)shouldEscapeXpcTryCatch;
-(void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)transferWithIdentifierWasAccepted:(id)arg1 ;
-(void)transferWithIdentifierWasDeclined:(id)arg1 withFailureReason:(unsigned long long)arg2 ;
@end

