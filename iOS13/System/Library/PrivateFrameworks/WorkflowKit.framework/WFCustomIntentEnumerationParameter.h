/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray, INCodableEnumAttribute, NSDictionary;

@interface WFCustomIntentEnumerationParameter : WFEnumerationParameter {

	NSArray* _possibleStates;
	INCodableEnumAttribute* _enumAttribute;
	NSDictionary* _enumNamesToKeys;
	NSDictionary* _keysToEnumNames;
	NSDictionary* _enumNamesToLabels;

}

@property (nonatomic,readonly) NSArray * possibleStates;                            //@synthesize possibleStates=_possibleStates - In the implementation block
@property (nonatomic,readonly) INCodableEnumAttribute * enumAttribute;              //@synthesize enumAttribute=_enumAttribute - In the implementation block
@property (nonatomic,readonly) NSDictionary * enumNamesToKeys;                      //@synthesize enumNamesToKeys=_enumNamesToKeys - In the implementation block
@property (nonatomic,readonly) NSDictionary * keysToEnumNames;                      //@synthesize keysToEnumNames=_keysToEnumNames - In the implementation block
@property (nonatomic,readonly) NSDictionary * enumNamesToLabels;                    //@synthesize enumNamesToLabels=_enumNamesToLabels - In the implementation block
-(id)initWithDefinition:(id)arg1 ;
-(NSArray *)possibleStates;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(NSDictionary *)keysToEnumNames;
-(INCodableEnumAttribute *)enumAttribute;
-(NSDictionary *)enumNamesToKeys;
-(NSDictionary *)enumNamesToLabels;
@end

