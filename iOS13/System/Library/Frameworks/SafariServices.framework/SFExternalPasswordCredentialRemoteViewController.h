/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFPasswordRemoteViewController.h>
#import <libobjc.A.dylib/SFExternalPasswordCredentialRemoteViewControllerProtocol.h>

@class NSString;

@interface SFExternalPasswordCredentialRemoteViewController : SFPasswordRemoteViewController <SFExternalPasswordCredentialRemoteViewControllerProtocol>

@property (assign,nonatomic,__weak) id<SFExternalPasswordCredentialRemoteViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)passwordServiceViewControllerName;
-(BOOL)_canShowWhileLocked;
-(void)presentExternalPasswordCredentialRemoteViewController;
@end

