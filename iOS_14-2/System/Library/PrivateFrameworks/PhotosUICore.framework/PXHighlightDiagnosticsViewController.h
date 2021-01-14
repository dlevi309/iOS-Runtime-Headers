/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedAssetCollectionDiagnosticsViewController.h>

@class PHPhotosHighlight;

@interface PXHighlightDiagnosticsViewController : PXCuratedAssetCollectionDiagnosticsViewController {

	PHPhotosHighlight* _sourceHighlight;

}
-(id)sourceDictionary;
-(id)radarRoutes;
-(id)assetsForCurationType:(long long)arg1 ;
-(id)curationDebugInformationWithOptions:(id)arg1 ;
-(BOOL)generateSectionTitles:(out id*)arg1 andTableContent:(out id*)arg2 forIndex:(long long)arg3 ;
-(id)radarAttachmentURLs;
-(id)radarComponentInfoForRoute:(id)arg1 ;
-(id)radarTitleTemplate;
-(id)radarDescriptionTemplate;
-(id)initWithHighlight:(id)arg1 ;
@end

