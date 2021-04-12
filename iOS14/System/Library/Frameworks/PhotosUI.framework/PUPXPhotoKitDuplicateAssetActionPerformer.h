/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

@class PUDuplicateActionController;

@interface PUPXPhotoKitDuplicateAssetActionPerformer : PXPhotoKitAssetActionPerformer {

	PUDuplicateActionController* _duplicateActionController;
	long long _action;
	SCD_Struct_PH4 _stillImageTime;

}

@property (nonatomic,retain) PUDuplicateActionController * duplicateActionController;              //@synthesize duplicateActionController=_duplicateActionController - In the implementation block
@property (assign,nonatomic) long long action;                                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 stillImageTime;                                        //@synthesize stillImageTime=_stillImageTime - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3 ;
-(void)performUserInteractionTask;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(PUDuplicateActionController *)duplicateActionController;
-(void)setDuplicateActionController:(PUDuplicateActionController *)arg1 ;
-(SCD_Struct_PH4)stillImageTime;
-(void)setStillImageTime:(SCD_Struct_PH4)arg1 ;
-(void)performBackgroundTask;
@end

