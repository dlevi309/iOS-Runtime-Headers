/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(INCodableEnumAttribute *)enumAttribute;
-(NSDictionary *)enumNamesToKeys;
-(NSDictionary *)keysToEnumNames;
-(NSDictionary *)enumNamesToLabels;
@end

