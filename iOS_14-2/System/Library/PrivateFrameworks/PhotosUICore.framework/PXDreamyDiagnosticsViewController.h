/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXVideoComparisonViewController.h>

@class PHAsset, NSURL;

@interface PXDreamyDiagnosticsViewController : PXVideoComparisonViewController {

	int _variantVideoRequestID;
	PHAsset* _variantAsset;
	NSURL* _variantVideoURL;

}

@property (nonatomic,retain) PHAsset * variantAsset;                 //@synthesize variantAsset=_variantAsset - In the implementation block
@property (nonatomic,retain) NSURL * variantVideoURL;                //@synthesize variantVideoURL=_variantVideoURL - In the implementation block
@property (assign,nonatomic) int variantVideoRequestID;              //@synthesize variantVideoRequestID=_variantVideoRequestID - In the implementation block
-(void)viewDidLoad;
-(id)radarTitle;
-(id)radarComponentID;
-(id)radarComponentName;
-(id)radarComponentVersion;
-(BOOL)useVariantVideoByDefaultInToggle;
-(id)inputVideoButtonsTitle;
-(id)variantVideoButtonsTitle;
-(id)variantVideoDescription;
-(void)invalidateInputAndVariantReferences;
-(void)prepareVariantVideoWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareVariantVideoForExportWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(PHAsset *)variantAsset;
-(void)_loadAndCacheVariantVideoURLFromAsset:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_loadAndCacheVariantAssetWithError:(id*)arg1 ;
-(void)setVariantAsset:(PHAsset *)arg1 ;
-(NSURL *)variantVideoURL;
-(void)setVariantVideoURL:(NSURL *)arg1 ;
-(int)variantVideoRequestID;
-(void)setVariantVideoRequestID:(int)arg1 ;
@end

