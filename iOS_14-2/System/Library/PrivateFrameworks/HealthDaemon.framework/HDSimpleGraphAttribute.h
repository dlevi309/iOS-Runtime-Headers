/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDSimpleGraphObject.h>

@class HDSimpleGraphNode, NSString;

@interface HDSimpleGraphAttribute : HDSimpleGraphObject {

	long long _nodeID;
	HDSimpleGraphNode* _node;
	long long _keyID;
	NSString* _key;
	NSString* _value;
	NSString* _valueType;

}

@property (nonatomic,readonly) long long keyID;                              //@synthesize keyID=_keyID - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                          //@synthesize key=_key - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                        //@synthesize value=_value - In the implementation block
@property (nonatomic,copy,readonly) NSString * valueType;                    //@synthesize valueType=_valueType - In the implementation block
@property (nonatomic,__weak,readonly) HDSimpleGraphNode * node; 
-(NSString *)valueType;
-(id)init;
-(long long)keyID;
-(HDSimpleGraphNode *)node;
-(id)description;
-(NSString *)key;
-(NSString *)value;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 keyID:(long long)arg3 key:(id)arg4 value:(id)arg5 valueType:(id)arg6 nodeID:(long long)arg7 node:(id)arg8 ;
@end

