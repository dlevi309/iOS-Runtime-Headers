/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DCUnsavedDataDelegate.h>

@class NSString;

@interface ICDocCamNavigationController : UINavigationController <DCUnsavedDataDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(long long)_preferredModalPresentationStyle;
-(void)didReceiveMemoryWarning;
-(void)prepareForDismissal;
@end

