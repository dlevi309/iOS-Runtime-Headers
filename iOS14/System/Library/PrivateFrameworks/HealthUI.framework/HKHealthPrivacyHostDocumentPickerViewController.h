/*
* Generated on Thursday, January 14, 2021 at 2:24:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/HKHealthPrivacyHostRemoteViewController.h>

@protocol HKHealthPrivacyHostDocumentPickerViewControllerDelegate;
@interface HKHealthPrivacyHostDocumentPickerViewController : _UIRemoteViewController <HKHealthPrivacyHostRemoteViewController> {

	id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) id<HKHealthPrivacyServiceRemoteDocumentPickerViewController> _healthPrivacyServiceViewControllerProxy; 
@property (assign,nonatomic,__weak) id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestRemoteViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
-(void)didFinishWithError:(id)arg1 ;
-(id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate>)delegate;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setDelegate:(id<HKHealthPrivacyHostDocumentPickerViewControllerDelegate>)arg1 ;
-(void)setPromptSession:(id)arg1 ;
-(id<HKHealthPrivacyServiceRemoteDocumentPickerViewController>)_healthPrivacyServiceViewControllerProxy;
@end

