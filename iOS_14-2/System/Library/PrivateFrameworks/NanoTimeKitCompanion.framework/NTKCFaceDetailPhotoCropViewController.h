/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCNavigationController.h>

@class _NTKCFaceDetailPhotoCropViewController, NTKCompanionCustomPhotosEditor, NTKFace, NTKDigitalTimeLabelStyle;

@interface NTKCFaceDetailPhotoCropViewController : NTKCNavigationController {

	_NTKCFaceDetailPhotoCropViewController* _implementationVC;

}

@property (nonatomic,readonly) unsigned long long index; 
@property (nonatomic,readonly) NTKCompanionCustomPhotosEditor * editor; 
@property (nonatomic,readonly) NTKFace * face; 
@property (nonatomic,readonly) NTKDigitalTimeLabelStyle * timeStyle; 
-(unsigned long long)index;
-(NTKDigitalTimeLabelStyle *)timeStyle;
-(NTKFace *)face;
-(void)viewDidLoad;
-(NTKCompanionCustomPhotosEditor *)editor;
-(id)initWithIndex:(unsigned long long)arg1 inPhotosEditor:(id)arg2 forFace:(id)arg3 timeStyle:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
@end

