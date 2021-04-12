/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(NSObject*<WFPINEntryViewControllerProtocol>)delegate;
-(void)setURL:(id)arg1 ;
-(BOOL)requiresKeyboard;
-(BOOL)simplePIN;
-(void)setPageTitle:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)isNumericPIN;
-(void)setDelegate:(NSObject*<WFPINEntryViewControllerProtocol>)arg1 ;
-(void)userDidCancel;
-(void)viewDidLoad;
-(void)dealloc;
-(void)getIsPINPresentWithCompletion:(/*^block*/id)arg1 ;
-(void)permitURLWithCompletion:(/*^block*/id)arg1 ;
-(void)userEnteredCorrectPIN;
@end

