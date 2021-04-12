/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <libobjc.A.dylib/PXOneUpPresentationImplementationDelegate.h>

@class NSString;

@interface PUPXOneUpPresentationImplementationDelegate : NSObject <PXOneUpPresentationImplementationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)oneUpPresentationInvalidatePresentingGeometry:(id)arg1 ;
-(void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidAppear:(BOOL)arg2 ;
-(void)oneUpPresentation:(id)arg1 commitPreviewViewController:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 stopAnimated:(BOOL)arg2 ;
-(void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillDisappear:(BOOL)arg2 ;
-(BOOL)oneUpPresentationCanStop:(id)arg1 ;
-(void)oneUpPresentation:(id)arg1 didDismissPreviewViewController:(id)arg2 committing:(BOOL)arg3 ;
-(id)previewViewControllerForOneUpPresentation:(id)arg1 allowingActions:(BOOL)arg2 ;
-(BOOL)oneUpPresentation:(id)arg1 startAnimated:(BOOL)arg2 interactiveMode:(long long)arg3 ;
-(BOOL)oneUpPresentation:(id)arg1 handlePresentingPinchGestureRecognizer:(id)arg2 ;
-(void)oneUpPresentation:(id)arg1 presentingViewControllerViewDidDisappear:(BOOL)arg2 ;
-(BOOL)oneUpPresentationCanStart:(id)arg1 ;
-(void)oneUpPresentation:(id)arg1 presentingViewControllerViewWillAppear:(BOOL)arg2 ;
@end

