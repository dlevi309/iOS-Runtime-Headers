/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVTAvatarColorVariationStore, NSDictionary;

@interface AVTEditingModelColors : NSObject <NSCopying> {

	AVTAvatarColorVariationStore* _variationStore;
	NSDictionary* _storage;

}

@property (nonatomic,readonly) NSDictionary * storage;                                   //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) AVTAvatarColorVariationStore * variationStore;              //@synthesize variationStore=_variationStore - In the implementation block
+(id)buildAllColors;
+(void)createColorsForPaletteCategory:(long long)arg1 inCache:(id)arg2 withDerivedPaletteCategories:(id)arg3 ;
-(id)init;
-(id)colorsForSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)colorForSettingKind:(SCD_Struct_AV4)arg1 identifier:(id)arg2 ;
-(NSDictionary *)storage;
-(AVTAvatarColorVariationStore *)variationStore;
-(BOOL)colorHasDerivedColorDependency:(id)arg1 ;
-(void)setVariationStore:(AVTAvatarColorVariationStore *)arg1 ;
-(id)initWithStorage:(id)arg1 variationStore:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

