/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/_DPJSONString.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSManagedObjectID;

@interface _DPNumericDataRecord : NSObject <_DPStorageMOConversion, _DPJSONString, NSSecureCoding> {

	BOOL _submitted;
	NSString* _key;
	double _clearNumber;
	double _privateNumber;
	double _creationDate;
	long long _reportVersion;
	NSManagedObjectID* _objectId;

}

@property (nonatomic,copy) NSString * key;                              //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double clearNumber;                        //@synthesize clearNumber=_clearNumber - In the implementation block
@property (assign,nonatomic) double privateNumber;                      //@synthesize privateNumber=_privateNumber - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (assign,nonatomic) long long reportVersion;                   //@synthesize reportVersion=_reportVersion - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)entityName;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)init;
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
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(id)initWithKey:(id)arg1 clearNumber:(double)arg2 privateNumber:(double)arg3 creationDate:(double)arg4 submitted:(BOOL)arg5 objectId:(id)arg6 ;
-(double)privateNumber;
-(double)clearNumber;
-(BOOL)isEqualToNumericDataRecord:(id)arg1 ;
-(void)setClearNumber:(double)arg1 ;
-(void)setPrivateNumber:(double)arg1 ;
@end

