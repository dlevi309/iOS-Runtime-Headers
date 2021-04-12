/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSArray, NSSet;

@interface _IKDOMMutationRuleSet : NSObject {

	NSArray* _mutationRules;
	NSSet* _dependentPathStrings;

}

@property (nonatomic,copy,readonly) NSArray * mutationRules;                   //@synthesize mutationRules=_mutationRules - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;              //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
-(NSSet *)dependentPathStrings;
-(NSArray *)mutationRules;
-(id)initWithMutationRules:(id)arg1 ;
@end

