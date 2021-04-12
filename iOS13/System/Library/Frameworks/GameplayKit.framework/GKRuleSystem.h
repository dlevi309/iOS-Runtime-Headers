/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
*/


@class NSMutableDictionary, NSMutableArray, NSMapTable, NSArray;

@interface GKRuleSystem : NSObject {

	NSMutableDictionary* _state;
	NSMutableArray* _rules;
	NSMutableArray* _agenda;
	NSMutableArray* _toBeExecuted;
	NSMutableArray* _executed;
	NSMapTable* _gradeByFact;

}

@property (nonatomic,retain,readonly) NSMutableDictionary * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain,readonly) NSArray * rules; 
@property (nonatomic,retain,readonly) NSArray * agenda; 
@property (nonatomic,retain,readonly) NSArray * executed; 
@property (nonatomic,retain,readonly) NSArray * facts; 
-(id)init;
-(NSMutableDictionary *)state;
-(void)reset;
-(NSArray *)rules;
-(void)addRule:(id)arg1 ;
-(void)evaluate;
-(float)gradeForFact:(id)arg1 ;
-(void)retractFact:(id)arg1 ;
-(void)_addRuleToAgenda:(id)arg1 ;
-(void)assertFact:(id)arg1 grade:(float)arg2 ;
-(void)retractFact:(id)arg1 grade:(float)arg2 ;
-(NSArray *)agenda;
-(NSArray *)executed;
-(void)addRulesFromArray:(id)arg1 ;
-(void)removeAllRules;
-(NSArray *)facts;
-(float)minimumGradeForFacts:(id)arg1 ;
-(float)maximumGradeForFacts:(id)arg1 ;
-(void)assertFact:(id)arg1 ;
@end

