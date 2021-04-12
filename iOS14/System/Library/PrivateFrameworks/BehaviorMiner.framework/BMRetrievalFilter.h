/*
* Generated on Thursday, January 14, 2021 at 2:27:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSSet *)types;
-(void)setItems:(NSSet *)arg1 ;
-(id)rulePredicate;
-(void)setInclusionOperator:(long long)arg1 ;
-(NSSet *)items;
-(void)setOperand:(long long)arg1 ;
-(long long)operand;
-(long long)inclusionOperator;
-(void)setTypes:(NSSet *)arg1 ;
@end

