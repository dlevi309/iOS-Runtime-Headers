/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/


@class SSProtocolConditionalContext, NSDictionary;

@interface SSProtocolConditionalEvaluator : NSObject {

	SSProtocolConditionalContext* _context;
	NSDictionary* _dictionary;

}
+(id)defaultConditionalContext;
+(void)setDefaultConditionalContext:(id)arg1 ;
-(id)_arrayByEvaluatingChildrenOfArray:(id)arg1 withForcedValue:(long long)arg2 ;
-(id)init;
-(id)_dictionaryByEvaluatingChildrenOfDictionary:(id)arg1 withForcedValue:(long long)arg2 ;
-(id)initWithDictionary:(id)arg1 conditionalContext:(id)arg2 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryByRemovingConditions;
-(id)dictionaryByEvaluatingConditions;
-(id)_dictionaryByEvaluatingWithForcedValue:(long long)arg1 ;
-(int)_logicalOperatorForString:(id)arg1 ;
-(id)_dictionaryByEvaluatingDictionary:(id)arg1 withForcedValue:(long long)arg2 ;
-(void)dealloc;
-(BOOL)_checkConditions:(id)arg1 withOperator:(id)arg2 ;
@end

