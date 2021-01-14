/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class CKRecord, CKRecordID, NSData;

@interface HDCloudSyncRecord : NSObject {

	CKRecord* _record;
	BOOL _repaired;
	BOOL _unsaved;
	CKRecordID* _recordID;

}

@property (nonatomic,copy,readonly) CKRecordID * recordID;                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) CKRecord * record; 
@property (nonatomic,copy,readonly) NSData * underlyingMessage; 
@property (nonatomic,readonly) long long schemaVersion; 
@property (assign,nonatomic) BOOL repaired;                                  //@synthesize repaired=_repaired - In the implementation block
@property (nonatomic,readonly) BOOL unsaved;                                 //@synthesize unsaved=_unsaved - In the implementation block
+(id)recordType;
+(id)recordWithCKRecord:(id)arg1 error:(id*)arg2 ;
+(BOOL)requiresUnderlyingMessage;
+(BOOL)hasFutureSchema:(id)arg1 ;
-(long long)schemaVersion;
-(CKRecord *)record;
-(BOOL)validateWithError:(id*)arg1 ;
-(id)init;
-(BOOL)unsaved;
-(unsigned long long)hash;
-(CKRecordID *)recordID;
-(BOOL)repaired;
-(BOOL)isEqual:(id)arg1 ;
-(NSData *)underlyingMessage;
-(id)serializeUnderlyingMessage;
-(id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2 ;
-(void)setRepaired:(BOOL)arg1 ;
@end

