/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutsUI.framework/VoiceShortcutsUI
*/

#import <VoiceShortcutsUI/VCUIProgressCardViewController.h>
#import <libobjc.A.dylib/WFLWorkflowControllerDelegate.h>
#import <libobjc.A.dylib/CRKCardViewControlling.h>

@class WFLWorkflowController, NSMutableDictionary, NSString;

@interface VCUIPerformActionCardViewController : VCUIProgressCardViewController <WFLWorkflowControllerDelegate, CRKCardViewControlling> {

	WFLWorkflowController* _currentWorkflowController;
	NSMutableDictionary* _commandWorkflowControllersDictionary;
	NSMutableDictionary* _commandCompletionBlocksDictionary;

}

@property (nonatomic,retain) WFLWorkflowController * currentWorkflowController;                                //@synthesize currentWorkflowController=_currentWorkflowController - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commandWorkflowControllersDictionary;                       //@synthesize commandWorkflowControllersDictionary=_commandWorkflowControllersDictionary - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * commandCompletionBlocksDictionary;                          //@synthesize commandCompletionBlocksDictionary=_commandCompletionBlocksDictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<CRCard> card; 
@property (nonatomic,retain) id<CRKCardSectionViewSourcing> cardSectionViewSource; 
@property (assign,nonatomic,__weak) id<CRKCardViewControllerDelegate> cardViewControllerDelegate; 
-(id)progress;
-(BOOL)_canShowWhileLocked;
-(void)workflowControllerWillRun:(id)arg1 ;
-(void)workflowController:(id)arg1 didRunAction:(id)arg2 ;
-(void)workflowControllerDidFinishRunning:(id)arg1 withOutput:(id)arg2 ;
-(void)workflowControllerDidStop:(id)arg1 withError:(id)arg2 ;
-(void)handleCardCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_setUpHelpers;
-(void)_handleCardCommand:(id)arg1 reply:(/*^block*/id)arg2 ;
-(id)_commandIdentifierForWorkflowController:(id)arg1 ;
-(void)_releaseWorkflowController:(id)arg1 ;
-(WFLWorkflowController *)currentWorkflowController;
-(void)setCurrentWorkflowController:(WFLWorkflowController *)arg1 ;
-(NSMutableDictionary *)commandWorkflowControllersDictionary;
-(void)setCommandWorkflowControllersDictionary:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)commandCompletionBlocksDictionary;
-(void)setCommandCompletionBlocksDictionary:(NSMutableDictionary *)arg1 ;
@end

