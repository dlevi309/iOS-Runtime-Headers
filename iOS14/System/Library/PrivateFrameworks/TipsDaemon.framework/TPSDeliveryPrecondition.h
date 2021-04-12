/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSArray;

@interface TPSDeliveryPrecondition : TPSSerializableObject {

	unsigned long long _joinType;
	NSArray* _conditions;

}

@property (assign,nonatomic) unsigned long long joinType;              //@synthesize joinType=_joinType - In the implementation block
@property (nonatomic,copy) NSArray * conditions;                       //@synthesize conditions=_conditions - In the implementation block
-(NSArray *)conditions;
-(void)setConditions:(NSArray *)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)joinType;
-(void)setJoinType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

