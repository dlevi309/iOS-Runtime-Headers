/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionManager.h>

@class PXSectionedSelectionManager, PXSectionedObjectReference;

@interface PXAssetActionManager : PXActionManager {

	PXSectionedSelectionManager* _selectionManager;
	PXSectionedObjectReference* _objectReference;

}

@property (nonatomic,retain) PXSectionedSelectionManager * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
@property (nonatomic,retain) PXSectionedObjectReference * objectReference;                //@synthesize objectReference=_objectReference - In the implementation block
-(PXSectionedSelectionManager *)selectionManager;
-(id)initWithSelectionManager:(id)arg1 ;
-(id)init;
-(BOOL)canPerformActionType:(id)arg1 ;
-(BOOL)shouldEnableActionType:(id)arg1 onAsset:(id)arg2 ;
-(void)px_registerAdditionalPerformerClasses;
-(void)setSelectionManager:(PXSectionedSelectionManager *)arg1 ;
-(id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2 ;
-(id)initWithSelectedObjectReference:(id)arg1 dataSourceManager:(id)arg2 ;
-(BOOL)canPerformAssetVariationActions;
-(id)systemImageNameForActionType:(id)arg1 ;
-(void)executeActionForActionType:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(PXSectionedObjectReference *)objectReference;
-(id)actionPerformerForActionType:(id)arg1 ;
-(void)setObjectReference:(PXSectionedObjectReference *)arg1 ;
@end

