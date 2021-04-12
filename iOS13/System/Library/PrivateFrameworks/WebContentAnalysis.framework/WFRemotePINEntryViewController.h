/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/WFPINEntryViewControllerProtocol.h>

@protocol WFPINEntryViewControllerProtocol;
@class NSObject;

@interface WFRemotePINEntryViewController : _UIRemoteViewController <WFPINEntryViewControllerProtocol> {

	NSObject*<WFPINEntryViewControllerProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<WFPINEntryViewControllerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)dealloc;
-(NSObject*<WFPINEntryViewControllerProtocol>)delegate;
-(void)setDelegate:(NSObject*<WFPINEntryViewControllerProtocol>)arg1 ;
-(void)setURL:(id)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)requiresKeyboard;
-(BOOL)isNumericPIN;
-(BOOL)simplePIN;
-(void)userDidCancel;
-(void)setPageTitle:(id)arg1 ;
-(void)getIsPINPresentWithCompletion:(/*^block*/id)arg1 ;
-(void)permitURLWithCompletion:(/*^block*/id)arg1 ;
-(void)userEnteredCorrectPIN;
@end

