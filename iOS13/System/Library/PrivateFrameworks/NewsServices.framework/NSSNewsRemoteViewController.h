/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)articleViewerRemoteProviderShouldDismissAnimated:(BOOL)arg1 ;
@end

