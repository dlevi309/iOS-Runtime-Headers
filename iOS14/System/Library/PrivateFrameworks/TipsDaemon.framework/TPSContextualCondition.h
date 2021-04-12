/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSDate, NSArray;

@interface TPSContextualCondition : TPSSerializableObject {

	unsigned long long _type;
	unsigned long long _joinType;
	NSDate* _matchedDate;
	NSArray* _rules;

}

@property (assign,nonatomic) unsigned long long joinType;              //@synthesize joinType=_joinType - In the implementation block
@property (nonatomic,copy) NSArray * rules;                            //@synthesize rules=_rules - In the implementation block
@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSDate * matchedDate;                       //@synthesize matchedDate=_matchedDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)eventsForConditionDictionary:(id)arg1 ;
+(id)classSet;
-(id)eventIdentifiers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setRules:(NSArray *)arg1 ;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setMatchedDate:(NSDate *)arg1 ;
-(NSDate *)matchedDate;
-(unsigned long long)joinType;
-(unsigned long long)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setJoinType:(unsigned long long)arg1 ;
-(NSArray *)rules;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)restartTracking;
-(id)initWithDictionary:(id)arg1 type:(unsigned long long)arg2 ;
@end

