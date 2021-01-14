/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphDayOfWeekNode : PGGraphOptimizedNode {

	long long _dayOfWeek;

}

@property (assign,nonatomic) long long dayOfWeek;              //@synthesize dayOfWeek=_dayOfWeek - In the implementation block
@property (readonly) NSString * name; 
+(id)nameForDayOfWeek:(long long)arg1 ;
+(long long)dayOfWeekForName:(id)arg1 ;
-(long long)dayOfWeek;
-(id)init;
-(void)setDayOfWeek:(long long)arg1 ;
-(unsigned short)domain;
-(NSString *)name;
-(id)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

