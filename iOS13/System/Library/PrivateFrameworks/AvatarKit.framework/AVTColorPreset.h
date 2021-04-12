/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
*/


#import <AvatarKit/AvatarKit-Structs.h>
@class NSString, NSDictionary, NSArray, UIColor, UIImage;

@interface AVTColorPreset : NSObject {

	NSString* _name;
	long long _category;
	NSDictionary* _derivedColors;
	NSArray* _colors;
	UIColor* _previewColorMin;
	UIColor* _previewColorMid;
	UIColor* _previewColorMax;
	UIColor* _previewAccentColorMin;
	UIColor* _previewAccentColorMid;
	UIColor* _previewAccentColorMax;
	unsigned long long _previewAccentType;
	float _variation;
	NSArray* _materials;

}

@property (readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (readonly) NSString * localizedName; 
@property (readonly) UIImage * thumbnail; 
@property (readonly) long long category; 
@property (readonly) float variation; 
@property (readonly) BOOL isNatural; 
+(id)colorPresetWithName:(id)arg1 category:(long long)arg2 colorIndex:(unsigned long long)arg3 variation:(float)arg4 ;
+(id)colorPresetWithName:(id)arg1 category:(long long)arg2 variation:(float)arg3 ;
+(id)secondaryColorPresetWithName:(id)arg1 category:(long long)arg2 variation:(float)arg3 ;
+(id)colorPresetWithName:(id)arg1 category:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)category;
-(NSString *)localizedName;
-(UIImage *)thumbnail;
-(void)didMutate;
-(float)variation;
-(void)renderColorIntoCALayer:(id)arg1 withSkinColor:(id)arg2 ;
-(id)gradientLayerWithRangeMin:(float)arg1 max:(float)arg2 withSkinColor:(id)arg3 ;
-(id)colorPresetWithVariation:(float)arg1 ;
-(id)derivedColorNameForPresetCategory:(long long)arg1 ;
-(id)previewColor;
-(id)materialAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)materialCount;
-(void)updateMaterialsIfNeeded;
-(BOOL)isNatural;
-(void)renderNaturalSkinColorIntoCALayer:(id)arg1 withSkinColor:(id)arg2 ;
-(BOOL)shouldBlendWithSkinColor;
-(id)previewAccentColor;
-(id)gradientLayerForNaturalColorWithSkinColor:(id)arg1 ;
-(id)initWithCategory:(long long)arg1 description:(id)arg2 ;
-(id)derivedColor;
-(void)setDerivedColors:(id)arg1 ;
-(id)derivedCategoriesNames;
-(void)renderColorIntoCALayer:(id)arg1 ;
-(id)gradientLayerWithRangeMin:(float)arg1 max:(float)arg2 ;
@end

