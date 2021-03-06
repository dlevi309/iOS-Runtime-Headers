/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDASession.h>
#import <libobjc.A.dylib/DAKeyPairingDelegate.h>

@class DAKeyPairingSession, NSString;

@interface PKAppletSubcredentialPairingSession : PKDASession <DAKeyPairingDelegate>

@property (nonatomic,retain) DAKeyPairingSession * session; 
@property (assign,nonatomic,__weak) id<PKAppletSubcredentialPairingSessionDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createSessionWithDelegate:(id)arg1 ;
-(id)startPairingWithKeyDisplayName:(id)arg1 pairingPassword:(id)arg2 ;
-(id)trackSubcredential:(id)arg1 withReceipt:(id)arg2 ;
-(id)probeTerminalForPairingStatus;
-(void)didFinishPreWarmWithResult:(id)arg1 ;
-(void)keyPairingSession:(id)arg1 didFinishPairingWithKey:(id)arg2 trackingRequest:(id)arg3 error:(id)arg4 ;
-(void)didFinishFirstTransactionForSession:(id)arg1 error:(id)arg2 ;
-(void)didFinishProbingWithResult:(BOOL)arg1 ;
-(id)prewarmWithIssuerName:(id)arg1 ;
@end

