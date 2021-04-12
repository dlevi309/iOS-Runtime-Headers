/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/DDRemoteActionPresenter.h>
#import <libobjc.A.dylib/_UIRemoteViewControllerContaining.h>

@class DDAction, DDActionController, NSString, _UIRemoteViewController;

@interface DDRemoteActionViewController : _UIRemoteViewController <DDRemoteActionPresenter, _UIRemoteViewControllerContaining> {

	BOOL _proxyConfigured;
	BOOL _waitingForRemoteConfiguration;
	BOOL _receivedActionDidFinish;
	DDAction* _action;
	DDActionController* _actionController;

}

@property (assign,nonatomic,__weak) DDAction * action;                                                //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) DDActionController * actionController;                            //@synthesize actionController=_actionController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) _UIRemoteViewController * _containedRemoteViewController; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)prepareViewController:(id)arg1 forAction:(id)arg2 actionController:(id)arg3 ;
-(DDAction *)action;
-(void)setAction:(DDAction *)arg1 ;
-(_UIRemoteViewController *)_containedRemoteViewController;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)actionDidFinish;
-(DDActionController *)actionController;
-(void)setActionController:(DDActionController *)arg1 ;
-(void)adaptForPresentationInPopover:(BOOL)arg1 ;
-(void)getIsBeingPresentedInPopover:(/*^block*/id)arg1 ;
-(void)viewControllerReady;
-(void)actionCanBeCancelledExternally:(BOOL)arg1 ;
-(void)_prepareForAction:(id)arg1 inActionController:(id)arg2 ;
@end

