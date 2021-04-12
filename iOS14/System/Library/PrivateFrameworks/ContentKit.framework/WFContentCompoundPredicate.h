/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)orPredicateWithSubpredicates:(id)arg1 ;
+(id)notPredicateWithSubpredicate:(id)arg1 ;
+(id)andPredicateWithSubpredicates:(id)arg1 ;
-(NSArray *)subpredicates;
-(NSSet *)containedProperties;
-(id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2 ;
-(unsigned long long)compoundPredicateType;
-(id)description;
-(void)evaluateWithObject:(id)arg1 propertySubstitutor:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

