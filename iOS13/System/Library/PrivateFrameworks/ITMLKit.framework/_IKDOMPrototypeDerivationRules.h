/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSArray;

@interface _IKDOMPrototypeDerivationRules : NSObject {

	NSArray* _mutationRules;
	NSArray* _indexPath;

}

@property (nonatomic,copy,readonly) NSArray * mutationRules;              //@synthesize mutationRules=_mutationRules - In the implementation block
@property (nonatomic,copy,readonly) NSArray * indexPath;                  //@synthesize indexPath=_indexPath - In the implementation block
+(id)derivationRulesForDOMElement:(id)arg1 ;
+(void)removeRulesFromDOMElement:(id)arg1 ;
-(NSArray *)indexPath;
-(id)initWithIndexPath:(id)arg1 mutationRules:(id)arg2 ;
-(NSArray *)mutationRules;
@end

