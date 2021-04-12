/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXActionPerformer.h>

@class PXSelectionSnapshot, PXSectionedSelectionManager;

@interface PXAssetActionPerformer : PXActionPerformer {

	PXSelectionSnapshot* _selectionSnapshot;
	PXSectionedSelectionManager* _selectionManager;

}

@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot;                     //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (nonatomic,retain) PXSectionedSelectionManager * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
-(PXSectionedSelectionManager *)selectionManager;
-(PXSelectionSnapshot *)selectionSnapshot;
-(void)setSelectionManager:(PXSectionedSelectionManager *)arg1 ;
-(void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
@end

