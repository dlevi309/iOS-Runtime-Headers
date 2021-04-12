/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSSPreset.h>

@class NSString;

@interface TSWPShapeStyle : <TSDShapeStyle : TSSStyle : TSPObject> = {
  516 fill
  517 stroke
  518 opacity
  519 reflection
  520 shadow
} <TSSPreset>

@property (nonatomic,readonly) NSString * presetKind; 
+(id)properties;
+(id)defaultValueForProperty:(int)arg1 ;
+(int)defaultIntValueForProperty:(int)arg1 ;
+(id)propertiesAllowingNSNull;
+(id)presetStyleDescriptor;
+(id)layoutProperties;
-(id)defaultParagraphStyle;
-(SEL)mapThemePropertyMapSelector;
-(id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(CGAffineTransform)arg3 ;
-(NSString *)presetKind;
-(void)setDefaultParagraphStyle:(id)arg1 ;
@end

