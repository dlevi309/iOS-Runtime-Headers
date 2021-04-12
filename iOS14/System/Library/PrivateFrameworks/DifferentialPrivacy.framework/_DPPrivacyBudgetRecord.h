/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPPrivacyBudgetRecord : NSObject <_DPStorageMOConversion, NSSecureCoding> {

	BOOL _submitted;
	NSString* _key;
	double _creationDate;
	double _lastUpdate;
	long long _balance;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) double lastUpdate;                         //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic) long long balance;                         //@synthesize balance=_balance - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(double)lastUpdate;
-(id)entityName;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)init;
-(long long)balance;
-(void)setLastUpdate:(double)arg1 ;
-(void)setBalance:(long long)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(NSManagedObjectID *)objectId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)creationDate;
-(NSString *)key;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(id)initWithKey:(id)arg1 creationDate:(double)arg2 lastUpdate:(double)arg3 balance:(long long)arg4 objectId:(id)arg5 ;
-(BOOL)isEqualToPrivacyBudgetRecord:(id)arg1 ;
@end

