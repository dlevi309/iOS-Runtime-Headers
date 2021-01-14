/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol.h>

@protocol PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate;
@class NSString;

@interface PKRemoteTransactionAuthenticationPasscodeViewController : _UIRemoteViewController <PKRemoteTransactionAuthenticationPasscodeViewControllerProtocol> {

	id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<PKRemoteTransactionAuthenticationPasscodeViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)passcodeViewControllerDidCancel;
-(void)passcodeViewControllerDidGenerateEncryptedPasscode:(id)arg1 ;
@end

