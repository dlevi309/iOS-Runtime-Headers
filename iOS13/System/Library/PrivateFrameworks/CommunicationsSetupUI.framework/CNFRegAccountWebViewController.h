/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <CommunicationsSetupUI/CNFRegServerWebViewController.h>

@class NSTimer;

@interface CNFRegAccountWebViewController : CNFRegServerWebViewController {

	BOOL _failedBagLoad;
	BOOL _listeningForBagLoad;
	NSTimer* _bagLoadTimer;

}

@property (assign,nonatomic) BOOL failedBagLoad;              //@synthesize failedBagLoad=_failedBagLoad - In the implementation block
-(void)dealloc;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(id)bagKey;
-(void)_reload;
-(id)logName;
-(id)initWithRegController:(id)arg1 ;
-(BOOL)shouldSetHeadersForRequest:(id)arg1 ;
-(void)setHeadersForRequest:(id)arg1 ;
-(BOOL)canSendURLRequest:(id)arg1 ;
-(void)receivedStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)cancelTapped;
-(BOOL)_loadURLFromBag;
-(void)_startListeningForBagLoad;
-(void)_startBagLoadTimer;
-(void)setFailedBagLoad:(BOOL)arg1 ;
-(BOOL)failedBagLoad;
-(void)_showURLDidNotLoadAlert;
-(void)_stopCurrentReload;
-(void)doHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(id)clientInfoHeaderValue;
-(id)viewPortHeaderValue;
-(id)securityHeaderValue;
-(id)serviceHeaderValue;
-(id)interfaceLayoutHeaderValue;
-(void)_stopBagLoadTimer;
-(void)_stopListeningForBagLoad;
-(void)_bagLoadTimeout:(id)arg1 ;
-(void)_handleFTServerBagFinishedLoading;
-(id)_viewPortStringForSize:(CGSize)arg1 ;
-(id)_nonModalParentController;
-(id)_viewPortForFormSheetPresentation;
-(id)_viewPortForNormalPresentation;
-(void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4 ;
-(void)_reloadDelayed;
-(void)_showGenericErrorWithHandler;
-(id)pushTokenHeaderValue;
-(id)authIdHeaderValue;
-(id)authTokenHeaderValue;
@end

