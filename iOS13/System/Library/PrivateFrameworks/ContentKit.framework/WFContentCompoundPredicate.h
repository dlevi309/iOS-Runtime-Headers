/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentPredicate.h>
#import <libobjc.A.dylib/WFContentPropertyContainer.h>

@class NSArray, NSSet;

@interface WFContentCompoundPredicate : WFContentPredicate <WFContentPropertyContainer> {

	unsigned long long _compoundPredicateType;
	NSArray* _subpredicates;

}

@property (readonly) unsigned long long compoundPredicateType;              //@synthesize compoundPredicateType=_compoundPredicateType - In the implementation block
@property (copy,readonly) NSArray * subpredicates;                          //@synthesize subpredicates=_subpredicates - In the implementation block
@property (nonatomic,readonly) NSSet * containedProperties; 
+(id)andPredicateWithSubpredicates:(id)arg1 ;
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
-(id)description;
-(unsigned long long)compoundPredicateType;
-(NSArray *)subpredicates;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(NSSet *)containedProperties;
-(void)evaluateWithObject:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

