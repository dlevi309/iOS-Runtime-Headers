/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@class NSArray, NSDictionary, NSString;

@interface WFActionParameterSummaryValue : NSObject {

	NSArray* _requiredVisibleParameterKeys;
	NSDictionary* _requiredValues;
	NSString* _summaryString;
	NSString* _key;

}

@property (nonatomic,copy,readonly) NSArray * requiredVisibleParameterKeys;              //@synthesize requiredVisibleParameterKeys=_requiredVisibleParameterKeys - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * requiredValues;                       //@synthesize requiredValues=_requiredValues - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString;                            //@synthesize summaryString=_summaryString - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                      //@synthesize key=_key - In the implementation block
+(id)parenthesisRegularExpression;
-(NSString *)key;
-(NSString *)summaryString;
-(id)initWithKey:(id)arg1 summaryString:(id)arg2 ;
-(id)mapPossibleValuesToKeys:(id)arg1 ;
-(id)explodedKeysWithPossibleValuesInAction:(id)arg1 ;
-(NSDictionary *)requiredValues;
-(BOOL)matchesVisibleParameterKeys:(id)arg1 checkingRequiredValuesInAction:(id)arg2 ;
-(void)explodeKeys:(id)arg1 currentKeyIndex:(unsigned long long)arg2 possibleValuesPerKey:(id)arg3 currentCombination:(id)arg4 results:(id)arg5 ;
-(NSArray *)requiredVisibleParameterKeys;
@end

