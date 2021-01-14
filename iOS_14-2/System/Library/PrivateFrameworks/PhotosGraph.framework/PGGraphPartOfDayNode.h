/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGGraphOptimizedNode.h>

@class NSString;

@interface PGGraphPartOfDayNode : PGGraphOptimizedNode {

	unsigned long long _partOfDay;

}

@property (readonly) NSString * name; 
@property (readonly) unsigned long long partOfDay;              //@synthesize partOfDay=_partOfDay - In the implementation block
+(id)filter;
+(id)partOfDayNameForPartOfDay:(unsigned long long)arg1 ;
+(unsigned long long)partOfDayForPartOfDayName:(id)arg1 ;
+(id)stringValueForPartOfDay:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)partOfDay;
-(unsigned short)domain;
-(NSString *)name;
-(id)description;
-(void)setLocalProperties:(id)arg1 ;
-(id)propertyDictionary;
-(id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 weight:(float)arg3 ;
-(id)label;
-(BOOL)hasProperties:(id)arg1 ;
@end

