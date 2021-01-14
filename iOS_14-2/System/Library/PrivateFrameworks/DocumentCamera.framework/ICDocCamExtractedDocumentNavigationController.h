/*
* Generated on Thursday, January 14, 2021 at 2:27:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DCUnsavedDataDelegate.h>

@class NSString;

@interface ICDocCamExtractedDocumentNavigationController : UINavigationController <DCUnsavedDataDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)didReceiveMemoryWarning;
-(BOOL)_canShowWhileLocked;
-(void)prepareForDismissal;
-(id)initWithDelegate:(id)arg1 documentInfoCollection:(id)arg2 imageCache:(id)arg3 currentIndex:(long long)arg4 mode:(int)arg5 ;
@end

