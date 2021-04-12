/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSMutableArray, NSMapTable, NSMutableString, NSDictionary, NSArray, NSString;

@interface NURuleSystem : NSObject <NSSecureCoding> {

	NSMutableDictionary* _state;
	NSMutableDictionary* _constants;
	NSMutableArray* _rules;
	NSMutableArray* _agenda;
	NSMutableArray* _executed;
	NSMapTable* _gradeByFact;
	NSMutableString* _runLog;
	BOOL _enableLogging;

}

@property (nonatomic,copy) NSDictionary * constants; 
@property (nonatomic,copy,readonly) NSDictionary * state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,copy,readonly) NSArray * rules; 
@property (nonatomic,copy,readonly) NSArray * agenda; 
@property (nonatomic,copy,readonly) NSArray * executed; 
@property (nonatomic,copy,readonly) NSDictionary * facts; 
@property (assign,nonatomic) BOOL enableLogging;                       //@synthesize enableLogging=_enableLogging - In the implementation block
@property (nonatomic,copy,readonly) NSString * runLog; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)debugDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)state;
-(void)reset;
-(id)debugQuickLookObject;
-(void)setConstants:(NSDictionary *)arg1 ;
-(NSDictionary *)constants;
-(NSArray *)rules;
-(void)addRule:(id)arg1 ;
-(void)evaluate;
-(double)gradeForFact:(id)arg1 ;
-(void)retractFact:(id)arg1 ;
-(void)_addRuleToAgenda:(id)arg1 ;
-(void)assertFact:(id)arg1 grade:(double)arg2 ;
-(void)retractFact:(id)arg1 grade:(double)arg2 ;
-(NSArray *)agenda;
-(NSArray *)executed;
-(void)addRulesFromArray:(id)arg1 ;
-(void)removeAllRules;
-(NSDictionary *)facts;
-(double)minimumGradeForFacts:(id)arg1 ;
-(double)maximumGradeForFacts:(id)arg1 ;
-(void)assertFact:(id)arg1 ;
-(BOOL)enableLogging;
-(void)resetAndEvaluateWithInitialState:(id)arg1 ;
-(void)setStateObject:(id)arg1 forKey:(id)arg2 ;
-(NSString *)runLog;
-(void)setEnableLogging:(BOOL)arg1 ;
@end

