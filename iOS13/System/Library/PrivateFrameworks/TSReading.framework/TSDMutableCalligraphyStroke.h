/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDCalligraphyStroke.h>

@class TSUColor, TSDStrokePattern, NSString;

@interface TSDMutableCalligraphyStroke : TSDCalligraphyStroke

@property (nonatomic,retain) TSUColor * color; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double actualWidth; 
@property (assign,nonatomic) int cap; 
@property (assign,nonatomic) int join; 
@property (assign,nonatomic) double miterLimit; 
@property (nonatomic,retain) TSDStrokePattern * pattern; 
@property (nonatomic,copy) NSString * strokeName; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPropertiesFromStroke:(id)arg1 ;
-(void)setPatternPropertiesFromStroke:(id)arg1 ;
@end

