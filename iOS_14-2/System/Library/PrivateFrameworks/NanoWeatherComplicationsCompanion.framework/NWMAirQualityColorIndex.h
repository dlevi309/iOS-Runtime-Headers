/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoWeatherComplicationsCompanion.framework/NanoWeatherComplicationsCompanion
*/

#import <NanoWeatherComplicationsCompanion/NWColorIndex.h>
#import <libobjc.A.dylib/NWColorIndexable.h>

@class NSString;

@interface NWMAirQualityColorIndex : NWColorIndex <NWColorIndexable>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)colorForIndex:(unsigned long long)arg1 ;
+(unsigned long long)lastIndex;
+(id)allIndices;
+(id)colorIndexWithIndex:(double)arg1 color:(id)arg2 ;
-(id)initWithIndex:(double)arg1 color:(id)arg2 ;
@end

