/*
* Generated on Thursday, January 14, 2021 at 2:29:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/PhotosUIFramework.axbundle/PhotosUIFramework
*/

#import <PhotosUIFramework/PhotosUIFramework-Structs.h>
#import <PhotosUIFramework/__PUImageTileViewControllerAccessibility_super.h>
#import <libobjc.A.dylib/AXFullScreenTileControllerDelegate.h>

@interface PUImageTileViewControllerAccessibility : __PUImageTileViewControllerAccessibility_super <AXFullScreenTileControllerDelegate>
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)assetDidChange;
-(void)_accessibilityLoadAccessibilityInformation;
-(void)dealloc;
-(void)_axApplyAssetToView;
-(id)_axImageView;
-(id)_axMainImageView;
-(BOOL)findFaceLandmarks;
-(void)_axApplyCustomAction:(id)arg1 ;
-(void)addLandmarksForFace:(id)arg1 withName:(id)arg2 toArray:(id)arg3 ;
-(void)_setAXFaces:(id)arg1 ;
-(BOOL)removeLandmarks;
-(CGRect)modifyRectToDisplayedScale:(CGRect)arg1 ;
-(id)elementForLandmark:(unsigned long long)arg1 fromLandmarks:(id)arg2 inFaceFrame:(CGRect)arg3 cancelAction:(id)arg4 container:(id)arg5 ;
-(CGRect)rectForValuePoints:(id)arg1 inFrame:(CGRect)arg2 ;
-(CGPoint)modifiedPointForValue:(id)arg1 inFrame:(CGRect)arg2 ;
-(id)_axGetFaces;
-(BOOL)_axConformsToFullScreenTileControllerDelegate;
-(void)_axApplyLandmarkCustomAction;
-(void)_axResetLandmarks;
@end

