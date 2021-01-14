/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDASessionManager.h>
#import <libobjc.A.dylib/PKAppletSubcredentialPairingSessionDelegate.h>

@class NSMutableArray, NSString;

@interface PKDAPairingSessionManager : PKDASessionManager <PKAppletSubcredentialPairingSessionDelegate> {

	BOOL _probingTerminalPairingStatus;
	NSMutableArray* _probingCompletionBlocks;
	/*^block*/id _prewarmCompletion;

}

@property (assign,getter=isProbingTerminalPairingStatus,nonatomic) BOOL probingTerminalPairingStatus;              //@synthesize probingTerminalPairingStatus=_probingTerminalPairingStatus - In the implementation block
@property (nonatomic,readonly) NSMutableArray * probingCompletionBlocks;                                           //@synthesize probingCompletionBlocks=_probingCompletionBlocks - In the implementation block
@property (nonatomic,copy) id prewarmCompletion;                                                                   //@synthesize prewarmCompletion=_prewarmCompletion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)prewarmCompletion;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithError:(id)arg2 ;
-(BOOL)isProbingTerminalPairingStatus;
-(void)appletSubcredentialPairingSessionDidBeginPairing:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishProbingTerminalWithResult:(BOOL)arg2 ;
-(void)appletSubcredentialPairingSessionDidFirstTransaction:(id)arg1 withError:(id)arg2 ;
-(void)setProbingTerminalPairingStatus:(BOOL)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didFinishPreWarmWithResult:(id)arg2 ;
-(NSMutableArray *)probingCompletionBlocks;
-(id)initWithQueue:(id)arg1 sessionCreationBlock:(/*^block*/id)arg2 ;
-(void)setPrewarmCompletion:(id)arg1 ;
-(void)appletSubcredentialPairingSession:(id)arg1 didEndPairingWithSubcredential:(id)arg2 registrationData:(id)arg3 ;
@end

