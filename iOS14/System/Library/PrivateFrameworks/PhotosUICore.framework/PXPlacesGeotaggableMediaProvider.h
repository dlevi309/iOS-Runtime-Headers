/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXPlacesMapGeotaggableInfoDelegate.h>

@class NSString;

@interface PXPlacesGeotaggableMediaProvider : NSObject <PXPlacesMapGeotaggableInfoDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_fetchImageManagerAssetForPlacesAsset:(id)arg1 ;
-(void)imageForGeotaggable:(id)arg1 ofSize:(CGSize)arg2 networkAccessAllowed:(BOOL)arg3 andCompletion:(/*^block*/id)arg4 ;
@end

