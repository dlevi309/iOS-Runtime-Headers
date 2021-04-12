/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/


@class NSArray, NSDictionary, AVTCoreModelCategoryPairing;

@interface AVTCoreModelCategory : NSObject {

	NSArray* _colorPalettes;
	NSArray* _presets;
	NSDictionary* _tags;
	NSArray* _rows;
	long long _presetCategory;
	AVTCoreModelCategoryPairing* _pairing;

}

@property (nonatomic,readonly) NSArray * colorPalettes;                                 //@synthesize colorPalettes=_colorPalettes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * presets;                                  //@synthesize presets=_presets - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * tags;                                //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rows;                                     //@synthesize rows=_rows - In the implementation block
@property (nonatomic,readonly) long long presetCategory;                                //@synthesize presetCategory=_presetCategory - In the implementation block
@property (nonatomic,copy,readonly) AVTCoreModelCategoryPairing * pairing;              //@synthesize pairing=_pairing - In the implementation block
-(id)description;
-(NSDictionary *)tags;
-(NSArray *)rows;
-(AVTCoreModelCategoryPairing *)pairing;
-(NSArray *)presets;
-(id)initWithPresetCategory:(long long)arg1 colorPalettes:(id)arg2 presets:(id)arg3 tags:(id)arg4 rows:(id)arg5 pairing:(id)arg6 ;
-(long long)presetCategory;
-(NSArray *)colorPalettes;
@end

