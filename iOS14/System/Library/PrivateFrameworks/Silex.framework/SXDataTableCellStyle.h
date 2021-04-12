/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXDataTableElementStyle.h>

@class NSString, NSArray, UIColor, SXDataTableBorderSides, SXPadding, SXJSONArray;

@interface SXDataTableCellStyle : SXDataTableElementStyle

@property (nonatomic,readonly) NSString * textStyle; 
@property (nonatomic,readonly) NSArray * textStyles; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXDataTableBorderSides * border; 
@property (nonatomic,readonly) SXConvertibleValue height; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) SXConvertibleValue minimumWidth; 
@property (nonatomic,readonly) SXPadding * padding; 
@property (nonatomic,readonly) unsigned long long verticalAlignment; 
@property (nonatomic,readonly) unsigned long long horizontalAlignment; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) SXJSONArray * selectors; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)selectors;
-(SXJSONArray *)conditional;
-(unsigned long long)horizontalAlignment;
-(unsigned long long)verticalAlignment;
-(SXPadding *)padding;
-(SXConvertibleValue)minimumWidth;
-(double)width;
-(SXConvertibleValue)height;
-(SXDataTableBorderSides *)border;
-(UIColor *)backgroundColor;
-(NSArray *)textStyles;
-(NSString *)textStyle;
-(id)textStylesWithValue:(id)arg1 withType:(int)arg2 ;
-(id)paddingWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)verticalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)horizontalAlignmentWithValue:(id)arg1 withType:(int)arg2 ;
@end

