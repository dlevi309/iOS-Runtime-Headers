/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


#import <AvatarUI/AvatarUI-Structs.h>
@class AVTUILogger, NSData, NSError, AVTEditingModelColors;

@interface AVTEditingModelDefinitionsParser : NSObject {

	AVTUILogger* _logger;
	NSData* _plistData;
	NSError* _error;
	AVTEditingModelColors* _colorCache;

}

@property (nonatomic,readonly) AVTUILogger * logger;                          //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) NSData * plistData;                            //@synthesize plistData=_plistData - In the implementation block
@property (nonatomic,retain) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) AVTEditingModelColors * colorCache;              //@synthesize colorCache=_colorCache - In the implementation block
+(id)dataFromAvatarKit;
+(id)errorWithDescription:(id)arg1 underlyingError:(id)arg2 ;
+(id)dataFromBundle;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(AVTUILogger *)logger;
-(AVTEditingModelColors *)colorCache;
-(NSData *)plistData;
-(id)initWithLogger:(id)arg1 ;
-(void)parseWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPlistData:(id)arg1 logger:(id)arg2 ;
-(id)decodePropertyListObjects:(id)arg1 ;
-(id)parseCoreModelFromDefinitions:(id)arg1 ;
-(void)setColorCache:(AVTEditingModelColors *)arg1 ;
-(id)coreModelGroupFromGroupDictionary:(id)arg1 ;
-(id)coreModelCategoryFromCategoryDictionary:(id)arg1 ;
-(BOOL)validateForCategoryWithEnumValue:(id)arg1 presetPickers:(id)arg2 colorPickers:(id)arg3 ;
-(BOOL)validateForColorPicker:(id)arg1 colorPaletteCategory:(id)arg2 error:(id*)arg3 ;
-(id)coreModelColorPaletteForColorPickerDictionary:(id)arg1 settingDestination:(long long)arg2 inCategory:(long long)arg3 ;
-(id)coreModelPresetsForCategory:(long long)arg1 ;
-(id)gatherAllTagsFromPresets:(id)arg1 ;
-(id)coreModelRowFromRowDictionary:(id)arg1 availableTags:(id)arg2 usedTags:(id)arg3 ;
-(id)coreModelColorsForColorDefinitions:(id)arg1 paletteSettingKind:(SCD_Struct_AV4)arg2 ;
-(id)coreModelColorsForPaletteSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)coreModelRowOptionsFromOptionsDictionary:(id)arg1 ;
@end

