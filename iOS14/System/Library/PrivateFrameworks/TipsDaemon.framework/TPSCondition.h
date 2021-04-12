/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/TPSValidatable.h>

@class NSArray, NSString;

@interface TPSCondition : TPSSerializableObject <TPSValidatable> {

	NSArray* _validations;
	NSString* _identifier;
	NSArray* _values;
	NSString* _valueType;
	long long _type;
	unsigned long long _joinType;

}

@property (nonatomic,copy) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * values;                                    //@synthesize values=_values - In the implementation block
@property (nonatomic,copy) NSString * valueType;                                //@synthesize valueType=_valueType - In the implementation block
@property (assign,nonatomic) long long type;                                    //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long joinType;                       //@synthesize joinType=_joinType - In the implementation block
@property (nonatomic,readonly) NSArray * targetingValidations; 
@property (nonatomic,readonly) unsigned long long defaultJoinType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)typeFromConditionDictionary:(id)arg1 ;
+(id)conditionFromDictionary:(id)arg1 ;
-(NSString *)valueType;
-(NSArray *)values;
-(NSString *)debugDescription;
-(void)setType:(long long)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)joinType;
-(long long)type;
-(void)setJoinType:(unsigned long long)arg1 ;
-(void)setValueType:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
-(unsigned long long)defaultJoinType;
-(id)_valuesFromValuesArray:(id)arg1 ;
-(NSArray *)targetingValidations;
@end

