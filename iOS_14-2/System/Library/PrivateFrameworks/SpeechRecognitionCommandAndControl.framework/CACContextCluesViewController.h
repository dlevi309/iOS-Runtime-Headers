/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)zOrder;
-(void)doneButtonPressed;
-(void)setPresentingNavigationController:(UINavigationController *)arg1 ;
-(id<CACContextCluesDelegate>)delegate;
-(NSArray *)commands;
-(void)setDelegate:(id<CACContextCluesDelegate>)arg1 ;
-(BOOL)isOverlay;
-(void)setCommands:(NSArray *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)presentationControllerDidDismiss:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UINavigationController *)presentingNavigationController;
-(void)setContextCluesController:(CACContextCluesWelcomeController *)arg1 ;
-(CACContextCluesWelcomeController *)contextCluesController;
-(void)contextCluesDoneButtonPressed:(id)arg1 ;
-(id)initWithCommands:(id)arg1 ;
@end

