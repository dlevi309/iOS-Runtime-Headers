/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
@end

