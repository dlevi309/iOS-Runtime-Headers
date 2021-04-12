/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/_DPJSONString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObjectID, NSString;

@interface _DPOBHRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding> {

	BOOL _submitted;
	NSString* _key;
	double _creationDate;
	long long _reportVersion;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (assign,nonatomic) long long reportVersion;                   //@synthesize reportVersion=_reportVersion - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)entityName;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(void)setCreationDate:(double)arg1 ;
-(NSManagedObjectID *)objectId;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)reportVersion;
-(void)setReportVersion:(long long)arg1 ;
-(id)jsonString;
-(id)description;
-(double)creationDate;
-(NSString *)key;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(id)initWithKey:(id)arg1 creationDate:(double)arg2 submitted:(BOOL)arg3 objectId:(id)arg4 ;
-(BOOL)submitted;
-(BOOL)isEqualToOBHRecord:(id)arg1 ;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
@end

