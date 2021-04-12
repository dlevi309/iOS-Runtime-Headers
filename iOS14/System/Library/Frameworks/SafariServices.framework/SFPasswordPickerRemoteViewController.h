/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SFPasswordRemoteViewController.h>
#import <libobjc.A.dylib/SFPasswordPickerRemoteViewControllerProtocol.h>

@class NSString;

@interface SFPasswordPickerRemoteViewController : SFPasswordRemoteViewController <SFPasswordPickerRemoteViewControllerProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)passwordServiceViewControllerName;
-(void)selectedCredential:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
@end

