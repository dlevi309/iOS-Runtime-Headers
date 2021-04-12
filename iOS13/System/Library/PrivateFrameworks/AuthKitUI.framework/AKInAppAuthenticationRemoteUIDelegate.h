/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <libobjc.A.dylib/RemoteUIControllerDelegate.h>

@class AKAppleIDAuthenticationInAppContext, UIViewController, NSHTTPURLResponse, AKAppleIDServerUIContextController, RUIObjectModel, UINavigationController, NSString;

@interface AKInAppAuthenticationRemoteUIDelegate : NSObject <RemoteUIControllerDelegate> {

	AKAppleIDAuthenticationInAppContext* _context;
	UIViewController* _topViewControllerOnLoadStart;
	NSHTTPURLResponse* _deferredResponse;
	BOOL _overrideFirstActionSignal;
	AKAppleIDServerUIContextController* _serverUIContextController;
	RUIObjectModel* _currentRemoteOM;
	UINavigationController* _modalRemoteUINavController;

}

@property (nonatomic,retain) AKAppleIDServerUIContextController * serverUIContextController;              //@synthesize serverUIContextController=_serverUIContextController - In the implementation block
@property (nonatomic,readonly) RUIObjectModel * currentRemoteOM;                                          //@synthesize currentRemoteOM=_currentRemoteOM - In the implementation block
@property (nonatomic,readonly) UINavigationController * modalRemoteUINavController;                       //@synthesize modalRemoteUINavController=_modalRemoteUINavController - In the implementation block
@property (assign,nonatomic) BOOL overrideFirstActionSignal;                                              //@synthesize overrideFirstActionSignal=_overrideFirstActionSignal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContext:(id)arg1 ;
-(void)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)remoteUIController:(id)arg1 didFinishLoadWithError:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveHTTPResponse:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(BOOL)arg3 ;
-(void)remoteUIController:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didDismissModalNavigationWithObjectModels:(id)arg2 ;
-(void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3 ;
-(void)clearObjectModel;
-(UINavigationController *)modalRemoteUINavController;
-(void)setOverrideFirstActionSignal:(BOOL)arg1 ;
-(void)setServerUIContextController:(AKAppleIDServerUIContextController *)arg1 ;
-(BOOL)_isDeferrableFinalResponseHarvested;
-(AKAppleIDServerUIContextController *)serverUIContextController;
-(RUIObjectModel *)currentRemoteOM;
-(BOOL)overrideFirstActionSignal;
@end

