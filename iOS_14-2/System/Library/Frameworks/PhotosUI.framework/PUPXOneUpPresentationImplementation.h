/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperDelegate.h>
#import <libobjc.A.dylib/PUOneUpPresentationHelperAssetDisplayDelegate.h>

@class PUOneUpPresentationHelper, PXOneUpPresentation, NSString;

@interface PUPXOneUpPresentationImplementation : NSObject <PUOneUpPresentationHelperDelegate, PUOneUpPresentationHelperAssetDisplayDelegate> {

	PUOneUpPresentationHelper* __helper;
	PXOneUpPresentation* __oneUpPresentation;

}

@property (nonatomic,readonly) PUOneUpPresentationHelper * _helper;                          //@synthesize _helper=__helper - In the implementation block
@property (nonatomic,__weak,readonly) PXOneUpPresentation * _oneUpPresentation;              //@synthesize _oneUpPresentation=__oneUpPresentation - In the implementation block
@property (nonatomic,readonly) BOOL canStart; 
@property (nonatomic,readonly) BOOL canStop; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)implementationForOneUpPresentation:(id)arg1 ;
-(id)previewViewControllerAllowingActions:(BOOL)arg1 ;
-(void)invalidatePresentingGeometry;
-(id)init;
-(id)oneUpPresentationHelper:(id)arg1 currentImageForAssetReference:(id)arg2 ;
-(PXOneUpPresentation *)_oneUpPresentation;
-(void)oneUpPresentationHelper:(id)arg1 scrollAssetReferenceToVisible:(id)arg2 ;
-(id)oneUpPresentationHelperScrollView:(id)arg1 ;
-(long long)oneUpPresentationOrigin:(id)arg1 ;
-(unsigned long long)oneUpPresentationHelperAdditionalOptions:(id)arg1 ;
-(BOOL)canStart;
-(void)didDismissPreviewViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)presentingViewControllerViewDidAppear:(BOOL)arg1 ;
-(void)commitPreviewViewController:(id)arg1 ;
-(BOOL)handlePresentingPinchGestureRecognizer:(id)arg1 ;
-(BOOL)canStop;
-(id)oneUpPresentationHelperViewController:(id)arg1 ;
-(BOOL)oneUpPresentationHelperShouldAutoPlay:(id)arg1 ;
-(void)stopAnimated:(BOOL)arg1 ;
-(void)presentingViewControllerViewDidDisappear:(BOOL)arg1 ;
-(void)presentingViewControllerViewWillDisappear:(BOOL)arg1 ;
-(BOOL)startAnimated:(BOOL)arg1 interactiveMode:(long long)arg2 ;
-(id)oneUpPresentationHelperViewHostingTilingView:(id)arg1 ;
-(void)presentingViewControllerViewWillAppear:(BOOL)arg1 ;
-(id)_initWithOneUpPresentation:(id)arg1 ;
-(PUOneUpPresentationHelper *)_helper;
-(CGRect)oneUpPresentationHelper:(id)arg1 rectForAssetReference:(id)arg2 cropInsets:(UIEdgeInsets*)arg3 contentsRect:(CGRect*)arg4 ;
-(BOOL)oneUpPresentationHelperWantsShowInLibraryButton:(id)arg1 ;
-(BOOL)oneUpPresentationHelperPreventRevealInMomentAction:(id)arg1 ;
-(void)oneUpPresentationHelper:(id)arg1 shouldHideAssetReferences:(id)arg2 ;
@end

