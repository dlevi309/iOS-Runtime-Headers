/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCNavigationController.h>
#import <libobjc.A.dylib/NTKCFaceDetailCustomPhotosViewControllerDelegate.h>

@class _NTKCFaceDetailCustomPhotosViewController, NTKFace, NTKCompanionCustomPhotosEditor, NSString;

@interface NTKCFaceDetailCustomPhotosViewController : NTKCNavigationController <NTKCFaceDetailCustomPhotosViewControllerDelegate> {

	_NTKCFaceDetailCustomPhotosViewController* _implementationVC;
	NTKFace* _face;
	NTKCompanionCustomPhotosEditor* _editor;

}

@property (nonatomic,retain) NTKCompanionCustomPhotosEditor * editor;                                           //@synthesize editor=_editor - In the implementation block
@property (nonatomic,retain) NTKFace * face;                                                                    //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) BOOL inGallery; 
@property (assign,nonatomic,__weak) id<NTKCFaceDetailCustomPhotosViewControllerDelegate> delegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEditor:(NTKCompanionCustomPhotosEditor *)arg1 ;
-(void)setFace:(NTKFace *)arg1 ;
-(NTKFace *)face;
-(NTKCompanionCustomPhotosEditor *)editor;
-(BOOL)inGallery;
-(id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(BOOL)arg3 faceView:(id)arg4 externalImagesSet:(BOOL)arg5 ;
-(void)customPhotosControllerDidFinish:(id)arg1 ;
@end

