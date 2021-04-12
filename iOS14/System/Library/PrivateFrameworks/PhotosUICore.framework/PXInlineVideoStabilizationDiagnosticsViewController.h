/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXVideoComparisonViewController.h>

@protocol PXVideoStabilizeResult;
@class PXVideoStabilizeOperation, NSOperationQueue;

@interface PXInlineVideoStabilizationDiagnosticsViewController : PXVideoComparisonViewController {

	PXVideoStabilizeOperation* _stabilizeOperation;
	PXVideoStabilizeOperation* _exportOperation;
	id<PXVideoStabilizeResult> _result;
	NSOperationQueue* _operationQueue;

}
-(void)viewDidLoad;
-(id)settings;
-(id)radarTitle;
-(id)radarComponentID;
-(id)radarComponentName;
-(id)radarComponentVersion;
-(void)_exportRecipe;
-(id)initWithInputAsset:(id)arg1 ;
-(BOOL)useVariantVideoByDefaultInToggle;
-(id)inputVideoButtonsTitle;
-(id)variantVideoButtonsTitle;
-(id)variantVideoDescription;
-(id)extraAlertAction;
-(void)invalidateInputAndVariantReferences;
-(void)prepareVariantVideoWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareVariantVideoForExportWithProgress:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_handleStabilizeOperationCompletedWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_newStabilizeOperation;
@end

