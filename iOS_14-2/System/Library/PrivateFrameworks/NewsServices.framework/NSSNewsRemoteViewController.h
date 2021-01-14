/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsServices.framework/NewsServices
*/

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/NAVNewsArticleViewerRemoteProviderType.h>

@class NSString;

@interface NSSNewsRemoteViewController : _UIRemoteViewController <NAVNewsArticleViewerRemoteProviderType>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)articleViewerRemoteProviderShouldDismissAnimated:(BOOL)arg1 ;
@end

