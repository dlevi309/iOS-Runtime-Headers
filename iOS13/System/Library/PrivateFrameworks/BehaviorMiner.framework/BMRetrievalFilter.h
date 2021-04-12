/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BehaviorMiner.framework/BehaviorMiner
*/


@class NSSet;

@interface BMRetrievalFilter : NSObject {

	long long _operand;
	long long _inclusionOperator;
	NSSet* _items;
	NSSet* _types;

}

@property (assign,nonatomic) long long operand;                        //@synthesize operand=_operand - In the implementation block
@property (assign,nonatomic) long long inclusionOperator;              //@synthesize inclusionOperator=_inclusionOperator - In the implementation block
@property (nonatomic,retain) NSSet * items;                            //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSSet * types;                            //@synthesize types=_types - In the implementation block
+(id)filterWithOperand:(long long)arg1 inclusionOperator:(long long)arg2 items:(id)arg3 ;
+(id)filterWithOperand:(long long)arg1 inclusionOperator:(long long)arg2 types:(id)arg3 ;
-(long long)operand;
-(NSSet *)items;
-(void)setItems:(NSSet *)arg1 ;
-(NSSet *)types;
-(void)setTypes:(NSSet *)arg1 ;
-(void)setOperand:(long long)arg1 ;
-(void)setInclusionOperator:(long long)arg1 ;
-(long long)inclusionOperator;
-(id)rulePredicate;
@end

