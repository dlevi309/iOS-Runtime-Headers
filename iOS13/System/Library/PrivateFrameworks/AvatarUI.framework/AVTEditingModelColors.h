/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)storage;
-(id)colorsForSettingKind:(SCD_Struct_AV4)arg1 ;
-(id)colorForSettingKind:(SCD_Struct_AV4)arg1 identifier:(id)arg2 ;
-(AVTAvatarColorVariationStore *)variationStore;
-(id)initWithStorage:(id)arg1 variationStore:(id)arg2 ;
-(void)setVariationStore:(AVTAvatarColorVariationStore *)arg1 ;
@end

