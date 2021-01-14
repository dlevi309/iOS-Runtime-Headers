/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/PKRemotePaymentSetupViewControllerProtocol.h>

@class NSString;

@interface PKRemotePaymentSetupViewController : _UIRemoteViewController <PKRemotePaymentSetupViewControllerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldPropagateAppearanceCustomizations;
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)paymentSetupDidFinish;
@end

