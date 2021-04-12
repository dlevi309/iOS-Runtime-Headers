/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSDDrawableInfo.h>
#import <TSReading/TSSStyleClient.h>

@class TSSStyle, TSDReflection, TSDShadow, TSDStroke, NSString;

@interface TSDStyledInfo : TSDDrawableInfo <TSSStyleClient>

@property (nonatomic,retain) TSSStyle * style; 
@property (nonatomic,copy) TSDReflection * reflection; 
@property (nonatomic,copy) TSDShadow * shadow; 
@property (nonatomic,copy) TSDStroke * stroke; 
@property (assign,nonatomic) float opacity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TSSStyle *)style;
-(void)setStyle:(TSSStyle *)arg1 ;
-(TSDShadow *)shadow;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(TSDStroke *)stroke;
-(void)setShadow:(TSDShadow *)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(void)setStroke:(TSDStroke *)arg1 ;
-(id)boxedValueForProperty:(int)arg1 ;
-(id)referencedStyles;
-(void)replaceReferencedStylesUsingBlock:(/*^block*/id)arg1 ;
-(void)setBoxedValue:(id)arg1 forProperty:(int)arg2 ;
-(void)setValuesForProperties:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)i_setValue:(id)arg1 forProperty:(int)arg2 ;
-(Class)styleClass;
-(TSDReflection *)reflection;
-(id)stylesForCopyStyle;
-(void)setReflection:(TSDReflection *)arg1 ;
-(id)propertyMapForNewPreset;
-(id)styleIdentifierTemplateForNewPreset;
@end

