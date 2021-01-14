/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXPhotoKitAssetCollectionActionPerformer.h>

@class NSString;

@interface PXPhotoKitAssetCollectionBlacklistMemoryFeatureActionPerformer : PXPhotoKitAssetCollectionActionPerformer {

	NSString* _userResponse;

}

@property (nonatomic,retain) NSString * userResponse;              //@synthesize userResponse=_userResponse - In the implementation block
+(BOOL)canPerformOnAssetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)createActivityWithTitle:(id)arg1 actionType:(id)arg2 actionSystemImageName:(id)arg3 ;
-(void)performUserInteractionTask;
-(NSString *)userResponse;
-(void)setUserResponse:(NSString *)arg1 ;
-(void)performBackgroundTask;
-(void)confirmBlacklistingUserAction:(id)arg1 viewSpec:(id)arg2 ;
-(unsigned long long)_memoryFeatureTypeFromActionType:(id)arg1 ;
-(id)_memoryFeatureFromMemory:(id)arg1 forActionType:(id)arg2 ;
-(void)applyBlacklistFeatureWithActionType:(id)arg1 ;
@end

