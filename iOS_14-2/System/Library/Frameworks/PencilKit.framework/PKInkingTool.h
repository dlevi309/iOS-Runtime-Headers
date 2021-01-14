/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKTool.h>

@class NSString, UIColor, PKInk;

@interface PKInkingTool : PKTool

@property (nonatomic,readonly) NSString * inkType; 
@property (nonatomic,readonly) UIColor * color; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) PKInk * ink; 
+(id)convertColor:(id)arg1 fromUserInterfaceStyle:(long long)arg2 to:(long long)arg3 ;
+(double)_weightForWidth:(double)arg1 type:(id)arg2 ;
+(double)defaultWidthForInkType:(id)arg1 ;
+(double)_widthForWeight:(double)arg1 type:(id)arg2 ;
+(unordered_map<std::__1::basic_string<char>, PKFunctionPiecewiseSimpleLinear, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, PKFunctionPiecewiseSimpleLinear> > >*)_weightToWidthMap;
+(BOOL)_isUsingSystemColorPicker;
+(SCD_Struct_PK17)_contextForStroke:(id)arg1 weight:(double)arg2 type:(id)arg3 ;
+(double)_calculateWidthForWeight:(double)arg1 type:(id)arg2 ;
+(void)_computeWeightToWidthMapFor:(id)arg1 in:(unordered_map<std::__1::basic_string<char>, PKFunctionPiecewiseSimpleLinear, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, PKFunctionPiecewiseSimpleLinear> > >*)arg2 ;
+(double)minimumWidthForInkType:(id)arg1 ;
+(double)maximumWidthForInkType:(id)arg1 ;
+(double)_calculateEdgeWidthForWeight:(double)arg1 type:(id)arg2 ;
-(double)width;
-(UIColor *)color;
-(NSString *)inkType;
-(id)initWithInkType:(id)arg1 color:(id)arg2 width:(double)arg3 ;
-(id)initWithInkType:(id)arg1 color:(id)arg2 ;
-(id)initWithInk:(id)arg1 width:(double)arg2 ;
@end

