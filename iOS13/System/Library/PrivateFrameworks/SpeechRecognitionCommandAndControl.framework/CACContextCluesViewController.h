/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UIAdaptivePresentationControllerDelegate.h>
#import <libobjc.A.dylib/_UISheetPresentationControllerDelegate.h>
#import <UIKit/UIPresentationControllerDelegatePrivate.h>
#import <libobjc.A.dylib/CACContextCluesWelcomeControllerDelegate.h>
#import <libobjc.A.dylib/CACViewController.h>

@protocol CACContextCluesDelegate;
@class NSArray, CACContextCluesWelcomeController, UINavigationController, NSString;

@interface CACContextCluesViewController : UIViewController <UIAdaptivePresentationControllerDelegate, _UISheetPresentationControllerDelegate, UIPresentationControllerDelegatePrivate, CACContextCluesWelcomeControllerDelegate, CACViewController> {

	id<CACContextCluesDelegate> _delegate;
	NSArray* _commands;
	CACContextCluesWelcomeController* _contextCluesController;
	UINavigationController* _presentingNavigationController;

}

@property (nonatomic,retain) CACContextCluesWelcomeController * contextCluesController;              //@synthesize contextCluesController=_contextCluesController - In the implementation block
@property (nonatomic,retain) UINavigationController * presentingNavigationController;                //@synthesize presentingNavigationController=_presentingNavigationController - In the implementation block
@property (assign,nonatomic,__weak) id<CACContextCluesDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * commands;                                                     //@synthesize commands=_commands - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long zOrder; 
@property (nonatomic,readonly) BOOL isOverlay; 
-(id<CACContextCluesDelegate>)delegate;
-(void)setDelegate:(id<CACContextCluesDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)doneButtonPressed;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(BOOL)isOverlay;
-(UINavigationController *)presentingNavigationController;
-(long long)zOrder;
-(void)setPresentingNavigationController:(UINavigationController *)arg1 ;
-(void)setContextCluesController:(CACContextCluesWelcomeController *)arg1 ;
-(CACContextCluesWelcomeController *)contextCluesController;
-(void)contextCluesDoneButtonPressed:(id)arg1 ;
-(id)initWithCommands:(id)arg1 ;
@end

