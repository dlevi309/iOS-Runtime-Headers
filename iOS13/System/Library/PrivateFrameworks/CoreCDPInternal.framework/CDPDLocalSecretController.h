/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/

#import <libobjc.A.dylib/CDPDCircleDelegate.h>
#import <libobjc.A.dylib/CDPDSecureBackupDelegate.h>

@protocol CDPStateUIProviderInternal, CDPLocalSecretFollowUpProvider;
@class CDPContext, CDPDCircleController, CDPDSecureBackupController;

@interface CDPDLocalSecretController : NSObject <CDPDCircleDelegate, CDPDSecureBackupDelegate> {

	CDPContext* _context;
	CDPDCircleController* _circleController;
	CDPDSecureBackupController* _secureBackupController;
	id<CDPStateUIProviderInternal> _uiProvider;
	id<CDPLocalSecretFollowUpProvider> _followUpProvider;

}

@property (nonatomic,retain) CDPContext * context;                                             //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) CDPDCircleController * circleController;                          //@synthesize circleController=_circleController - In the implementation block
@property (nonatomic,retain) CDPDSecureBackupController * secureBackupController;              //@synthesize secureBackupController=_secureBackupController - In the implementation block
@property (nonatomic,retain) id<CDPStateUIProviderInternal> uiProvider;                        //@synthesize uiProvider=_uiProvider - In the implementation block
@property (nonatomic,retain) id<CDPLocalSecretFollowUpProvider> followUpProvider;              //@synthesize followUpProvider=_followUpProvider - In the implementation block
-(void)dealloc;
-(CDPContext *)context;
-(void)setContext:(CDPContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)setUiProvider:(id<CDPStateUIProviderInternal>)arg1 ;
-(void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(void)attemptToEscrowPreRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishOfflineLocalSecretChangeWithCompletion:(/*^block*/id)arg1 ;
-(CDPDCircleController *)circleController;
-(void)setCircleController:(CDPDCircleController *)arg1 ;
-(CDPDSecureBackupController *)secureBackupController;
-(void)setSecureBackupController:(CDPDSecureBackupController *)arg1 ;
-(id)contextForController:(id)arg1 ;
-(void)circleController:(id)arg1 secureBackupRecordsArePresentWithCompletion:(/*^block*/id)arg2 ;
-(id)secureChannelContextForController:(id)arg1 ;
-(void)_handleCompletionStatus:(BOOL)arg1 preRecord:(BOOL)arg2 ;
-(void)_attemptToEscrowPreRecord:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_createContextForSecret:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id<CDPLocalSecretFollowUpProvider>)followUpProvider;
-(void)_repairWithStateMachine:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)_cdpStateMachine;
-(void)_collectLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(void)_setContextWithAuthResults:(id)arg1 ;
-(id)circlePeerIDForSecureBackupController:(id)arg1 ;
-(BOOL)synchronizeCircleViewsForSecureBackupContext:(id)arg1 ;
-(void)promptForAdoptionOfMultipleICSCWithCompletion:(/*^block*/id)arg1 ;
-(void)promptForLocalSecretWithCompletion:(/*^block*/id)arg1 ;
-(void)setFollowUpProvider:(id<CDPLocalSecretFollowUpProvider>)arg1 ;
@end

