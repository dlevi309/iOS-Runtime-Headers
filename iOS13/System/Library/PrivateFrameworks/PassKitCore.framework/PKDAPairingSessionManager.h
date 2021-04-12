/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDASessionManager.h>
#import <libobjc.A.dylib/PKAppletSubcredentialPairingSessionDelegate.h>

@class NSMutableArray, NSString;

@interface PKDAPairingSessionManager : PKDASessionManager <PKAppletSubcredentialPairingSessionDelegate> {

	BOOL _probingTerminalPairingStatus;
	NSMutableArray* _probingCompletionBlocks;

}

@property (assign,getter=isProbingTerminalPairingStatus,nonatomic) BOOL probingTerminalPairingStatus;              //@synthesize probingTerminalPairingStatus=_probingTerminalPairingStatus - In the implementation block
@property (nonatomic,readonly) NSMutableArray * probingCompletionBlocks;                                           //@synthesize probingCompletionBlocks=_probingCompletionBlocks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(BOOL)arg2 ;
-(id)initWithQueue:(id)arg1 sessionCreationBlock:(/*^block*/id)arg2 ;
-(BOOL)isProbingTerminalPairingStatus;
-(void)setProbingTerminalPairingStatus:(BOOL)arg1 ;
-(NSMutableArray *)probingCompletionBlocks;
@end

