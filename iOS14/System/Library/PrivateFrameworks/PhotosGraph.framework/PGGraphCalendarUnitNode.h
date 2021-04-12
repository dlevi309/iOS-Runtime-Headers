/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@interface PGGraphCalendarUnitNode : PGGraphOptimizedNode {

	unsigned _calendarUnitValue : 16;
	unsigned _calendarUnit : 8;

}

@property (assign,nonatomic) long long calendarUnitValue;              //@synthesize calendarUnitValue=_calendarUnitValue - In the implementation block
+(id)dateOfYear;
-(id)initWithLabel:(id)arg1 ;
-(void)setCalendarUnitValue:(long long)arg1 ;
-(unsigned short)domain;
-(id)name;
-(id)description;
-(long long)calendarUnitValue;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

