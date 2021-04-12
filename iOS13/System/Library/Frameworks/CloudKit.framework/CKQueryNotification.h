/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, CKRecordID;

@interface CKQueryNotification : CKNotification <NSSecureCoding> {

	long long _queryNotificationReason;
	NSDictionary* _recordFields;
	CKRecordID* _recordID;
	long long _databaseScope;

}

@property (assign,nonatomic) long long queryNotificationReason;              //@synthesize queryNotificationReason=_queryNotificationReason - In the implementation block
@property (nonatomic,copy) NSDictionary * recordFields;                      //@synthesize recordFields=_recordFields - In the implementation block
@property (nonatomic,copy) CKRecordID * recordID;                            //@synthesize recordID=_recordID - In the implementation block
@property (assign,nonatomic) long long databaseScope;                        //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,readonly) BOOL isPublicDatabase; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setQueryNotificationReason:(long long)arg1 ;
-(void)setRecordFields:(NSDictionary *)arg1 ;
-(long long)queryNotificationReason;
-(NSDictionary *)recordFields;
-(BOOL)isPublicDatabase;
@end

