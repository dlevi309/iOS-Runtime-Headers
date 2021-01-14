/*
* Generated on Thursday, January 14, 2021 at 2:21:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/CKSMSComposeRemoteViewControllerDelegate.h>

@protocol CKSMSComposeRemoteViewControllerDelegate;
@class NSString;

@interface CKSMSComposeRemoteViewController : _UIRemoteViewController <CKSMSComposeRemoteViewControllerDelegate> {

	id<CKSMSComposeRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CKSMSComposeRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(id<CKSMSComposeRemoteViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<CKSMSComposeRemoteViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)smsComposeControllerDataInserted;
-(void)smsComposeControllerEntryViewContentInserted;
-(void)smsComposeControllerAppeared;
-(void)smsComposeControllerShouldSendMessageWithText:(id)arg1 toRecipients:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)smsComposeControllerSendStartedWithText:(id)arg1 ;
-(void)smsComposeControllerCancelled;
-(void)dealloc;
@end

