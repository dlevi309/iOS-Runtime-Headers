/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)entityName;
+(id)createRecordFromManagedObject:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)creationDate;
-(void)setCreationDate:(double)arg1 ;
-(id)entityName;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(short)majorVersion;
-(short)minorVersion;
-(void)setMajorVersion:(short)arg1 ;
-(void)setMinorVersion:(short)arg1 ;
-(NSManagedObjectID *)objectId;
-(void)setObjectId:(NSManagedObjectID *)arg1 ;
-(BOOL)submitted;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(void)setSubmitted:(BOOL)arg1 ;
-(id)initWithMajorVersion:(short)arg1 minorVersion:(short)arg2 creationDate:(double)arg3 objectId:(id)arg4 ;
-(BOOL)isEqualToModelInfo:(id)arg1 ;
@end

