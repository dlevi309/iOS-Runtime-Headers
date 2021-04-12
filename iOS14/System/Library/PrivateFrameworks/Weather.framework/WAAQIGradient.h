/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


#import <Weather/Weather-Structs.h>
@class NSMutableArray, NSMutableIndexSet, NSMutableDictionary;

@interface WAAQIGradient : NSObject {

	NSMutableArray* _colors;
	NSMutableIndexSet* _indexes;
	NSMutableDictionary* _colorsByIndex;
	NSRange _range;

}

@property (nonatomic,copy) NSMutableArray * colors;                              //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) NSMutableIndexSet * indexes;                      //@synthesize indexes=_indexes - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * colorsByIndex;              //@synthesize colorsByIndex=_colorsByIndex - In the implementation block
@property (nonatomic,readonly) NSRange range;                                    //@synthesize range=_range - In the implementation block
-(NSMutableArray *)colors;
-(void)setColors:(NSMutableArray *)arg1 ;
-(NSRange)range;
-(id)colorForIndex:(unsigned long long)arg1 ;
-(void)addColor:(id)arg1 ;
-(NSMutableDictionary *)colorsByIndex;
-(id)initWithRange:(NSRange)arg1 ;
-(NSMutableIndexSet *)indexes;
@end

