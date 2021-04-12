/*
* Generated on Thursday, January 14, 2021 at 2:22:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUPhotoKitActionPerformer.h>

@class PUDuplicateActionController;

@interface PUPhotoKitDuplicateActionPerformer : PUPhotoKitActionPerformer {

	PUDuplicateActionController* _duplicateActionController;
	long long _action;
	SCD_Struct_PH4 _newStillImageTime;

}

@property (nonatomic,retain) PUDuplicateActionController * duplicateActionController;              //@synthesize duplicateActionController=_duplicateActionController - In the implementation block
@property (assign,nonatomic) long long action;                                                     //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) SCD_Struct_PH4 newStillImageTime;                                     //@synthesize newStillImageTime=_newStillImageTime - In the implementation block
+(BOOL)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 ;
-(void)performUserInteractionTask;
-(SCD_Struct_PH4)newStillImageTime;
-(void)setNewStillImageTime:(SCD_Struct_PH4)arg1 ;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(PUDuplicateActionController *)duplicateActionController;
-(void)setDuplicateActionController:(PUDuplicateActionController *)arg1 ;
-(void)performBackgroundTask;
@end

