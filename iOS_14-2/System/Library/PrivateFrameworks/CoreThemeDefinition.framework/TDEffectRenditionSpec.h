/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSNumber, NSOrderedSet, TDEffectComponent;

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (nonatomic,retain) NSNumber * effectScale; 
@property (nonatomic,retain) NSOrderedSet * components; 
@property (nonatomic,retain,readonly) TDEffectComponent * CUIShapeEffectShapeOpacity; 
@property (nonatomic,retain,readonly) TDEffectComponent * CUIShapeEffectOutputOpacity; 
+(id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;
+(id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;
-(id)effectPreset;
-(id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3 ;
-(BOOL)canBePackedWithDocument:(id)arg1 ;
-(void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2 ;
-(id)componentOfType:(unsigned)arg1 ;
-(void)replaceComponentsWithComponentsFromEffectRendition:(id)arg1 withDocument:(id)arg2 ;
-(TDEffectComponent *)CUIShapeEffectShapeOpacity;
-(TDEffectComponent *)CUIShapeEffectOutputOpacity;
@end

