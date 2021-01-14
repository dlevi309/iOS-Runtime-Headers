/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
*/

#import <DifferentialPrivacy/DifferentialPrivacy-Structs.h>
#import <libobjc.A.dylib/_DPStorageMOConversion.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSManagedObjectID;

@interface _DPModelInfoRecord : NSObject <_DPStorageMOConversion, NSSecureCoding> {

	BOOL _submitted;
	short _majorVersion;
	short _minorVersion;
	double _creationDate;
	NSManagedObjectID* _objectId;

}

@property (assign,nonatomic) short majorVersion;                        //@synthesize majorVersion=_majorVersion - In the implementation block
@property (assign,nonatomic) short minorVersion;                        //@synthesize minorVersion=_minorVersion - In the implementation block
@property (assign,nonatomic) double creationDate;                       //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) BOOL submitted;                            //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectId;              //@synthesize objectId=_objectId - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)entityName;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(void)setMajorVersion:(short)arg1 ;
-(void)setMinorVersion:(short)arg1 ;
-(id)init;
-(void)setCreationDate:(double)arg1 ;
-(NSManagedObjectID *)objectId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(short)majorVersion;
-(double)creationDate;
-(short)minorVersion;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(id)initWithMajorVersion:(short)arg1 minorVersion:(short)arg2 creationDate:(double)arg3 objectId:(id)arg4 ;
-(BOOL)isEqualToModelInfo:(id)arg1 ;
@end

