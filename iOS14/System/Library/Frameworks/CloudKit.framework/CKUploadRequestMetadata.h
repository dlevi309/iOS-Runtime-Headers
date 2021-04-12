/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordID, NSString;

@interface CKUploadRequestMetadata : NSObject <NSSecureCoding, NSCopying> {

	long long _databaseScope;
	CKRecordID* _recordID;
	NSString* _recordType;
	NSString* _fieldName;
	CKRecordID* _repairZoneRecordID;

}

@property (nonatomic,readonly) CKRecordID * repairZoneRecordID;              //@synthesize repairZoneRecordID=_repairZoneRecordID - In the implementation block
@property (nonatomic,readonly) long long databaseScope;                      //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,copy,readonly) CKRecordID * recordID;                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordType;                   //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldName;                    //@synthesize fieldName=_fieldName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)recordType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)fieldName;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 ;
-(CKRecordID *)repairZoneRecordID;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
-(CKRecordID *)recordID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

