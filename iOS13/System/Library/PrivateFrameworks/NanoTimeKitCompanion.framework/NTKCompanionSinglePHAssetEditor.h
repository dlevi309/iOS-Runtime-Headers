/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKCompanionResourceDirectoryEditor.h>

@interface NTKCompanionSinglePHAssetEditor : NTKCompanionResourceDirectoryEditor

@property (assign,nonatomic) BOOL shouldFinalize; 
+(id)_assetForResourceDirectoryForDevice:(id)arg1 ;
+(id)_createResourceDirectoryForSinglePHAssetForDevice:(id)arg1 previewOnly:(BOOL)arg2 ;
-(void)generateGalleryPreviewResourceDirectoryWithCompletion:(/*^block*/id)arg1 ;
-(void)finalizeWithCompletion:(/*^block*/id)arg1 ;
-(void)setShouldFinalize:(BOOL)arg1 ;
-(id)initWithResourceDirectory:(id)arg1 forDevice:(id)arg2 shouldFinalize:(BOOL)arg3 ;
-(BOOL)shouldFinalize;
@end

