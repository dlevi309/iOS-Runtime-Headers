/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
*/


@protocol KGNode;
@class NSNumber, NSDictionary;

@interface KGNodeChangeRequest : NSObject {

	id<KGNode> _node;
	NSNumber* _weight;
	NSDictionary* _properties;
	long long _mutationType;

}

@property (nonatomic,readonly) id<KGNode> node;                     //@synthesize node=_node - In the implementation block
@property (nonatomic,readonly) long long mutationType;              //@synthesize mutationType=_mutationType - In the implementation block
@property (nonatomic,retain) NSNumber * weight;                     //@synthesize weight=_weight - In the implementation block
@property (nonatomic,copy) NSDictionary * properties;               //@synthesize properties=_properties - In the implementation block
+(id)changeRequestForNode:(id)arg1 ;
+(id)removeRequestForNode:(id)arg1 ;
-(NSDictionary *)properties;
-(id<KGNode>)node;
-(void)setWeight:(NSNumber *)arg1 ;
-(NSNumber *)weight;
-(void)setProperties:(NSDictionary *)arg1 ;
-(long long)mutationType;
-(id)initWithMutationType:(long long)arg1 ;
@end

