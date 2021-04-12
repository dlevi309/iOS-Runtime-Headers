/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionManager.h>

@class PXCuratedLibraryViewModel, NSDictionary;

@interface PXCuratedLibraryActionManager : PXActionManager {

	PXCuratedLibraryViewModel* _viewModel;
	NSDictionary* _actionPerformersByType;
	NSDictionary* _assetCollectionActionPerformersByType;
	NSDictionary* _constructorSpecificActionPerformersByType;

}

@property (nonatomic,readonly) PXCuratedLibraryViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
@property (nonatomic,readonly) NSDictionary * actionPerformersByType;                                 //@synthesize actionPerformersByType=_actionPerformersByType - In the implementation block
@property (nonatomic,readonly) NSDictionary * assetCollectionActionPerformersByType;                  //@synthesize assetCollectionActionPerformersByType=_assetCollectionActionPerformersByType - In the implementation block
@property (nonatomic,readonly) NSDictionary * constructorSpecificActionPerformersByType;              //@synthesize constructorSpecificActionPerformersByType=_constructorSpecificActionPerformersByType - In the implementation block
+(id)actionsWithActionPerformers;
-(id)initWithViewModel:(id)arg1 ;
-(NSDictionary *)constructorSpecificActionPerformersByType;
-(id)showAllActionPerformerWithAssetCollectionReference:(id)arg1 ;
-(id)init;
-(id)tapToRadarPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2 ;
-(BOOL)canPerformActionType:(id)arg1 ;
-(PXCuratedLibraryViewModel *)viewModel;
-(NSDictionary *)actionPerformersByType;
-(id)actionPerformerForActionType:(id)arg1 withAssetCollectionReference:(id)arg2 ;
-(id)actionPerformerForHitTestResult:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(NSDictionary *)assetCollectionActionPerformersByType;
-(id)ellipsisButtonActionPerformerWithAssetCollectionReference:(id)arg1 ;
-(id)actionPerformerForActionType:(id)arg1 ;
-(id)curationDebugPerformerAssetCollectionReference:(id)arg1 diagnosticLayout:(id)arg2 ;
@end

