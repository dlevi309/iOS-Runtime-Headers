/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding> {

	CKRecordZoneID* _recordZoneID;
	long long _databaseScope;

}

@property (nonatomic,copy) CKRecordZoneID * recordZoneID;              //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (assign,nonatomic) long long databaseScope;                  //@synthesize databaseScope=_databaseScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
-(CKRecordZoneID *)recordZoneID;
@end

