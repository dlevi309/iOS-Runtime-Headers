/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class CKRecord;

@interface HDCloudSyncRecord : NSObject {

	CKRecord* _record;

}

@property (nonatomic,retain) CKRecord * record;              //@synthesize record=_record - In the implementation block
+(id)_valueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(BOOL)arg4 error:(id*)arg5 ;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)hasFutureSchema:(id)arg1 ;
+(BOOL)_validateOptionalValueInRecord:(id)arg1 forKey:(id)arg2 type:(Class)arg3 encrypted:(BOOL)arg4 error:(id*)arg5 ;
-(CKRecord *)record;
-(void)setRecord:(CKRecord *)arg1 ;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
@end

