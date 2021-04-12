/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
*/

#import <ActivityAchievements/ActivityAchievements-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HKQuantity, NSDate, NSString, NSDateComponents;

@interface ACHEarnedInstance : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_AC5 _smallEarnedDateComponents;
	unsigned char _creatorDevice;
	unsigned long long _uniqueNameIndex;
	unsigned long long _key;
	HKQuantity* _value;
	NSDate* _createdDate;

}

@property (assign,nonatomic) unsigned long long key;                               //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSString * templateUniqueName; 
@property (nonatomic,retain) NSDateComponents * earnedDateComponents; 
@property (nonatomic,retain) HKQuantity * value;                                   //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) NSDate * createdDate;                                 //@synthesize createdDate=_createdDate - In the implementation block
@property (assign,nonatomic) unsigned char creatorDevice;                          //@synthesize creatorDevice=_creatorDevice - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_allTemplateUniqueNames;
-(NSString *)templateUniqueName;
-(void)setTemplateUniqueName:(NSString *)arg1 ;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setValue:(HKQuantity *)arg1 ;
-(id)description;
-(unsigned long long)key;
-(NSDate *)createdDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned char)creatorDevice;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(unsigned long long)arg1 ;
-(HKQuantity *)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCodable:(id)arg1 ;
-(NSDateComponents *)earnedDateComponents;
-(void)setEarnedDateComponents:(NSDateComponents *)arg1 ;
-(void)setCreatorDevice:(unsigned char)arg1 ;
@end

