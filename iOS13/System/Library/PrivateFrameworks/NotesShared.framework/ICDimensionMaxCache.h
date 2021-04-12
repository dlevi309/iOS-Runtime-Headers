/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(unsigned long long)count;
-(id)comparator;
-(double)max;
-(NSMutableDictionary *)dimensions;
-(id)initWithComparator:(/*^block*/id)arg1 ;
-(double)dimensionForKey:(id)arg1 ;
-(void)setDimension:(double)arg1 forKey:(id)arg2 ;
-(void)removeDimensionForKey:(id)arg1 ;
-(NSMutableArray *)sortedDimensions;
@end

