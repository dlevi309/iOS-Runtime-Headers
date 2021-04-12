/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSimpleGraphObject.h>

@class NSString, HDSimpleGraphNode;

@interface HDSimpleGraphAttribute : HDSimpleGraphObject {

	NSString* _key;
	NSString* _value;
	NSString* _valueType;
	long long _nodeID;
	HDSimpleGraphNode* _node;

}

@property (nonatomic,copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,copy) NSString * valueType;                           //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) long long nodeID;                             //@synthesize nodeID=_nodeID - In the implementation block
@property (assign,nonatomic,__weak) HDSimpleGraphNode * node;              //@synthesize node=_node - In the implementation block
-(id)init;
-(id)description;
-(NSString *)key;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(HDSimpleGraphNode *)node;
-(NSString *)valueType;
-(void)setNode:(HDSimpleGraphNode *)arg1 ;
-(void)setValueType:(NSString *)arg1 ;
-(long long)nodeID;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 key:(id)arg3 value:(id)arg4 valueType:(id)arg5 nodeID:(long long)arg6 node:(id)arg7 ;
-(void)setNodeID:(long long)arg1 ;
@end

