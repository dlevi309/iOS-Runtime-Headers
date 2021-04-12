/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol MFMessageCriterionConverterDelegate;
@interface MFMessageCriterionConverter : NSObject {

	id<MFMessageCriterionConverterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFMessageCriterionConverterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)spotlightRecipientSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2 ;
+(id)spotlightSenderSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2 ;
+(id)spotlightSubjectSearchPredicateForValue:(id)arg1 operator:(unsigned long long)arg2 ;
+(id)spotlightBodySearchPredicateForValue:(id)arg1 ;
+(id)spotlightSearchPredicateForValue:(id)arg1 ;
-(id)messageCriterionFromPredicate:(id)arg1 ;
-(id<MFMessageCriterionConverterDelegate>)delegate;
-(id)messageCriterionFromPredicateFormatString:(id)arg1 ;
-(void)setDelegate:(id<MFMessageCriterionConverterDelegate>)arg1 ;
-(unsigned long long)_proposedPredicateOperatorType:(unsigned long long)arg1 forKey:(id)arg2 ;
-(long long)_defaultCriterionTypeForKey:(id)arg1 ;
-(id)_simplifiedCompoundPredicateOfType:(unsigned long long)arg1 forSubqueries:(id)arg2 ;
-(id)_messageCriterionForComparisonPredicate:(id)arg1 ;
-(id)_messageCriterionForCompoundPredicate:(id)arg1 ;
-(id)_defaultKeysForCriterionType:(long long)arg1 ;
-(id)_predicateKeysForCriterion:(long long)arg1 ;
-(id)_predicateForKey:(id)arg1 value:(id)arg2 qualifier:(int)arg3 ;
-(long long)_criterionTypeFromExpression:(id)arg1 ;
-(long long)_criterionTypeForKey:(id)arg1 ;
-(id)predicateFromMessageCriterion:(id)arg1 ;
-(id)_searchPredicateForCriterion:(id)arg1 ;
-(id)_orPredicateForAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3 ;
@end

