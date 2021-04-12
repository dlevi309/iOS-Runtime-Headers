/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreData/NSManagedObject.h>

@interface TDCatalogGlobals : NSManagedObject {

	unsigned long long _defaultBlendMode;
	BOOL _allowsVibrancy;
	BOOL _supportsWhitePointAdjustments;
	BOOL _supportsBrightnessAdjustments;
	BOOL _allowsSystemTintColors;
	BOOL _allowsCustomTintColors;
	BOOL _supportsMultipleAppearancesForEffects;

}

@property (assign,nonatomic) unsigned long long defaultBlendMode; 
@property (assign,nonatomic) BOOL allowsVibrancy; 
@property (assign,nonatomic) BOOL supportsWhitePointAdjustments; 
@property (assign,nonatomic) BOOL supportsBrightnessAdjustments; 
@property (assign,nonatomic) BOOL allowsSystemTintColors; 
@property (assign,nonatomic) BOOL allowsCustomTintColors; 
@property (assign,nonatomic) BOOL supportsMultipleAppearancesForEffects; 
-(id)dictionaryForArchiving;
-(BOOL)allowsVibrancy;
-(BOOL)supportsMultipleAppearancesForEffects;
-(unsigned long long)defaultBlendMode;
-(BOOL)supportsWhitePointAdjustments;
-(BOOL)supportsBrightnessAdjustments;
-(BOOL)allowsSystemTintColors;
-(BOOL)allowsCustomTintColors;
-(void)setDefaultBlendMode:(unsigned long long)arg1 ;
-(void)setAllowsVibrancy:(BOOL)arg1 ;
-(void)setSupportsWhitePointAdjustments:(BOOL)arg1 ;
-(void)setSupportsBrightnessAdjustments:(BOOL)arg1 ;
-(void)setAllowsSystemTintColors:(BOOL)arg1 ;
-(void)setAllowsCustomTintColors:(BOOL)arg1 ;
-(void)setSupportsMultipleAppearancesForEffects:(BOOL)arg1 ;
@end
