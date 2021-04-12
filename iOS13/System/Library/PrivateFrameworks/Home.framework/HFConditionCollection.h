/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSArray, NSPredicate;

@interface HFConditionCollection : NSObject {

	NSArray* _conditions;

}

@property (nonatomic,retain) NSArray * conditions;                        //@synthesize conditions=_conditions - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate; 
+(id)_singleConditionForPredicate:(id)arg1 knownConditionsOnly:(BOOL)arg2 ;
+(id)_flattenedSubpredicatesForAndPredicate:(id)arg1 ;
+(id)_findBestMatchingConditionsForPredicates:(id)arg1 ;
+(id)_findBestConditionMatchForPredicates:(id)arg1 ;
+(id)conditionCollectionForPredicate:(id)arg1 ;
-(id)init;
-(NSPredicate *)predicate;
-(void)addCondition:(id)arg1 ;
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
-(id)initWithConditions:(id)arg1 ;
-(void)removeCondition:(id)arg1 ;
@end

