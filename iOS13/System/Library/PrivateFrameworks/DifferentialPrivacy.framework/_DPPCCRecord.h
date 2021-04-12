/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/_DPJSONString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPPCCRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding> {

	BOOL _submitted;
	NSString* _key;
	NSString* _value;
	double _creationDate;
	long long _reportVersion;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * value;                            //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (assign,nonatomic) long long reportVersion;                   //@synthesize reportVersion=_reportVersion - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)key;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(id)entityName;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)jsonString;
-(NSManagedObjectID *)objectId;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(long long)reportVersion;
-(void)setReportVersion:(long long)arg1 ;
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(id)initWithKey:(id)arg1 value:(id)arg2 creationDate:(double)arg3 submitted:(BOOL)arg4 objectId:(id)arg5 ;
-(BOOL)isEqualToPCCRecord:(id)arg1 ;
@end

