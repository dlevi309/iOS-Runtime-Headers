/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXDataTableElementStyle.h>

@class UIColor, SXDataTableBorder, SXJSONArray;

@interface SXDataTableRowStyle : SXDataTableElementStyle

@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) SXDataTableBorder * divider; 
@property (nonatomic,readonly) SXConvertibleValue height; 
@property (nonatomic,readonly) SXJSONArray * conditional; 
@property (nonatomic,readonly) SXJSONArray * selectors; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)selectors;
-(SXJSONArray *)conditional;
-(SXConvertibleValue)height;
-(SXDataTableBorder *)divider;
-(UIColor *)backgroundColor;
@end

