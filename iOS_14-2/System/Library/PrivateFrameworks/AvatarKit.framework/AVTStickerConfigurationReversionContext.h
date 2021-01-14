/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


@class SCNScene, AVTAvatar, NSMutableArray, NSMapTable;

@interface AVTStickerConfigurationReversionContext : NSObject {

	SCNScene* _scene;
	AVTAvatar* _avatar;
	NSMutableArray* _presetOverrides;
	NSMutableArray* _morpherOverrides;
	NSMapTable* _shaderModifiers;
	NSMapTable* _customMaterialProperties;
	NSMutableArray* _singleSidedMaterials;

}
-(id)init;
-(void)resetForAvatar:(id)arg1 ;
-(void)revertChanges;
-(void)savePresetOverride:(id)arg1 ;
-(void)saveMorpherOverride:(id)arg1 ;
-(void)saveShaderModifiers:(id)arg1 forMaterial:(id)arg2 ;
-(void)saveCustomMaterialPropertyNamed:(id)arg1 forMaterial:(id)arg2 ;
-(void)saveSingleSidedForMaterial:(id)arg1 ;
@end

