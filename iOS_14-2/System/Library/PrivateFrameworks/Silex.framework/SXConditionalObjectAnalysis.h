/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSMutableSet, NSSet;

@interface SXConditionalObjectAnalysis : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _conditionsToComponentsMap;
	NSMutableDictionary* _componentsToConditionsMap;
	NSMutableDictionary* _conditionsToComponentStylesMap;
	NSMutableDictionary* _componentStylesToConditionsMap;
	NSMutableDictionary* _conditionsToComponentLayoutsMap;
	NSMutableDictionary* _componentLayoutsToConditionsMap;
	NSMutableDictionary* _conditionsToComponentTextStylesMap;
	NSMutableDictionary* _componentTextStylesToConditionsMap;
	NSMutableDictionary* _conditionsToTextStylesMap;
	NSMutableDictionary* _textStylesToConditionsMap;
	NSMutableSet* _documentStyleConditionTypes;

}

@property (nonatomic,copy,readonly) NSSet * documentStyleConditionTypes;              //@synthesize documentStyleConditionTypes=_documentStyleConditionTypes - In the implementation block
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)populateWithSource:(id)arg1 ;
-(id)componentsUsingConditionTypes:(id)arg1 ;
-(id)objectsForKeys:(id)arg1 map:(id)arg2 ;
-(id)conditionTypesUsedByComponents:(id)arg1 ;
-(id)componentStylesUsingConditionTypes:(id)arg1 ;
-(id)conditionTypesUsedByComponentStyles:(id)arg1 ;
-(id)componentTextStylesUsingConditionTypes:(id)arg1 ;
-(id)conditionTypesUsedByComponentTextStyles:(id)arg1 ;
-(id)textStylesUsingConditionTypes:(id)arg1 ;
-(id)conditionTypesUsedByTextStyles:(id)arg1 ;
-(id)componentLayoutsUsingConditionTypes:(id)arg1 ;
-(id)conditionTypesUsedByComponentLayouts:(id)arg1 ;
-(id)objectsForKey:(id)arg1 map:(id)arg2 ;
-(id)componentsUsingConditionType:(id)arg1 ;
-(id)conditionTypesUsedByComponent:(id)arg1 ;
-(id)componentStylesUsingConditionType:(id)arg1 ;
-(id)conditionTypesUsedByComponentStyle:(id)arg1 ;
-(id)componentTextStylesUsingConditionType:(id)arg1 ;
-(id)conditionTypesUsedByComponentTextStyle:(id)arg1 ;
-(id)textStylesUsingConditionType:(id)arg1 ;
-(id)conditionTypesUsedByTextStyle:(id)arg1 ;
-(id)componentLayoutsUsingConditionType:(id)arg1 ;
-(id)conditionTypesUsedByComponentLayout:(id)arg1 ;
-(NSSet *)documentStyleConditionTypes;
@end
