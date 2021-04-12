/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

