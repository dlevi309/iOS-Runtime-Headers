/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,readonly) CKRecordID * recordID;                        //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) NSString * recordType;                        //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,readonly) NSString * fieldName;                         //@synthesize fieldName=_fieldName - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)recordType;
-(CKRecordID *)recordID;
-(long long)databaseScope;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSString *)fieldName;
-(CKRecordID *)repairZoneRecordID;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 ;
@end

