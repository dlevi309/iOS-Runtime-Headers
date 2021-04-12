/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeRecommendationEngine.framework/HomeRecommendationEngine
*/

#import <HomeRecommendationEngine/HomeRecommendationEngine-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSMutableArray, NSPredicate;

@interface HRECharacteristicActionMap : NSObject <NSCopying> {

	BOOL _visitedByFlatten;
	NSMutableDictionary* _characteristicTypeValues;
	NSMutableArray* _childMaps;
	NSPredicate* _condition;

}

@property (assign,nonatomic) BOOL visitedByFlatten;                                       //@synthesize visitedByFlatten=_visitedByFlatten - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * characteristicTypeValues;              //@synthesize characteristicTypeValues=_characteristicTypeValues - In the implementation block
@property (nonatomic,retain) NSMutableArray * childMaps;                                  //@synthesize childMaps=_childMaps - In the implementation block
@property (nonatomic,retain) NSPredicate * condition;                                     //@synthesize condition=_condition - In the implementation block
+(id)emptyMap;
+(id)characteristicActionMap:(id)arg1 ;
+(id)conditonalCharacteristicActionMap:(id)arg1 condition:(id)arg2 ;
-(void)setCondition:(NSPredicate *)arg1 ;
-(NSPredicate *)condition;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)characteristicTypeValues;
-(id)mergeWithActionMaps:(id)arg1 ;
-(id)flattenedMapEvaluatedForObject:(id)arg1 ;
-(NSMutableArray *)childMaps;
-(id)initWithMap:(id)arg1 condition:(id)arg2 ;
-(BOOL)conditionSatisfiedByObject:(id)arg1 ;
-(BOOL)visitedByFlatten;
-(void)setVisitedByFlatten:(BOOL)arg1 ;
-(void)setCharacteristicTypeValues:(NSMutableDictionary *)arg1 ;
-(void)setChildMaps:(NSMutableArray *)arg1 ;
@end

