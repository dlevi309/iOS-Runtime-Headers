/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSMutableDictionary, NSMutableArray;

@interface ICDimensionMaxCache : NSObject {

	NSMutableDictionary* _dimensions;
	NSMutableArray* _sortedDimensions;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) NSMutableDictionary * dimensions;               //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedDimensions;              //@synthesize sortedDimensions=_sortedDimensions - In the implementation block
@property (nonatomic,readonly) id comparator;                                  //@synthesize comparator=_comparator - In the implementation block
@property (nonatomic,readonly) double max; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(NSMutableDictionary *)dimensions;
-(unsigned long long)count;
-(id)comparator;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(double)max;
-(double)dimensionForKey:(id)arg1 ;
-(void)setDimension:(double)arg1 forKey:(id)arg2 ;
-(void)removeDimensionForKey:(id)arg1 ;
-(NSMutableArray *)sortedDimensions;
@end

