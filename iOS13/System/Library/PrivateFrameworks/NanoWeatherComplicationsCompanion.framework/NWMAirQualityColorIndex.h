/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(unsigned long long)lastIndex;
+(id)colorForIndex:(unsigned long long)arg1 ;
+(id)allIndices;
+(id)colorIndexWithIndex:(double)arg1 color:(id)arg2 ;
-(id)initWithIndex:(double)arg1 color:(id)arg2 ;
@end

