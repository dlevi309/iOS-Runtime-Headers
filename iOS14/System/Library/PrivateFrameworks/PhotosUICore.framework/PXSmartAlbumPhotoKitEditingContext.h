/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXSmartAlbumEditingContext.h>

@class NSArray, PHPhotoLibrary, NSString;

@interface PXSmartAlbumPhotoKitEditingContext : NSObject <PXSmartAlbumEditingContext> {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (nonatomic,readonly) NSArray * conditionTypeValues; 
@property (nonatomic,readonly) NSArray * albumValues; 
@property (nonatomic,readonly) NSArray * cameraModels; 
@property (nonatomic,readonly) NSArray * lensModels; 
@property (nonatomic,readonly) NSArray * keywordValues; 
@property (nonatomic,readonly) NSArray * personNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(id)apertureValuesWithFormatter:(id)arg1 ;
-(id)focalLengthValuesWithFormatter:(id)arg1 ;
-(id)ISOValuesWithFormatter:(id)arg1 ;
-(id)shutterSpeedValuesWithFormatter:(id)arg1 ;
-(NSArray *)conditionTypeValues;
-(NSArray *)albumValues;
-(NSArray *)cameraModels;
-(NSArray *)lensModels;
-(NSArray *)keywordValues;
-(NSArray *)personNames;
@end

