/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsCore/TPSSerializableObject.h>

@class NSString;

@interface TPSCapability : TPSSerializableObject {

	unsigned long long _joinType;
	NSString* _key;
	id _value;

}

@property (assign,nonatomic) unsigned long long joinType;              //@synthesize joinType=_joinType - In the implementation block
@property (nonatomic,copy) NSString * key;                             //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) id value;                                   //@synthesize value=_value - In the implementation block
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(void)setValue:(id)arg1 ;
-(unsigned long long)joinType;
-(NSString *)key;
-(void)setJoinType:(unsigned long long)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(id)value;
@end

