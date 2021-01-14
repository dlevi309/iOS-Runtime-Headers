/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)debugQuickLookObject;
-(void)setConstants:(NSDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)facts;
-(BOOL)enableLogging;
-(void)evaluate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSDictionary *)constants;
-(NSArray *)agenda;
-(NSString *)runLog;
-(void)reset;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)state;
-(double)gradeForFact:(id)arg1 ;
-(NSArray *)rules;
-(void)addRule:(id)arg1 ;
-(void)retractFact:(id)arg1 ;
-(NSArray *)executed;
-(void)resetAndEvaluateWithInitialState:(id)arg1 ;
-(void)setStateObject:(id)arg1 forKey:(id)arg2 ;
-(void)_addRuleToAgenda:(id)arg1 ;
-(void)addRulesFromArray:(id)arg1 ;
-(void)removeAllRules;
-(double)minimumGradeForFacts:(id)arg1 ;
-(double)maximumGradeForFacts:(id)arg1 ;
-(void)assertFact:(id)arg1 ;
-(void)assertFact:(id)arg1 grade:(double)arg2 ;
-(void)retractFact:(id)arg1 grade:(double)arg2 ;
-(void)setEnableLogging:(BOOL)arg1 ;
@end

