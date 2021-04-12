/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXCuratedLibraryAssetCollectionActionPerformer.h>

@class PXGLayout;

@interface PXCuratedLibraryTapToRadarActionPerformer : PXCuratedLibraryAssetCollectionActionPerformer {

	PXGLayout* _layoutForDiagnosticDescription;

}

@property (nonatomic,__weak,readonly) PXGLayout * layoutForDiagnosticDescription;              //@synthesize layoutForDiagnosticDescription=_layoutForDiagnosticDescription - In the implementation block
-(id)activityType;
-(id)initWithViewModel:(id)arg1 assetCollectionReference:(id)arg2 diagnosticLayout:(id)arg3 ;
-(PXGLayout *)layoutForDiagnosticDescription;
-(void)performUserInteractionTask;
-(id)activitySystemImageName;
-(BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2 ;
@end

