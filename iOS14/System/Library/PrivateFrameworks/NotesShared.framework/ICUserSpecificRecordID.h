/*
* Generated on Thursday, January 14, 2021 at 2:23:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@class NSString, CKRecordID;

@interface ICUserSpecificRecordID : NSObject {

	NSString* _recordType;
	NSString* _shareOwnerName;
	long long _databaseScope;
	NSString* _zoneName;
	NSString* _userSpecificOwnerName;
	NSString* _sharedRecordName;

}

@property (nonatomic,retain) NSString * recordType;                         //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) NSString * shareOwnerName;                     //@synthesize shareOwnerName=_shareOwnerName - In the implementation block
@property (assign,nonatomic) long long databaseScope;                       //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,retain) NSString * zoneName;                           //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,retain) NSString * userSpecificOwnerName;              //@synthesize userSpecificOwnerName=_userSpecificOwnerName - In the implementation block
@property (nonatomic,retain) NSString * sharedRecordName;                   //@synthesize sharedRecordName=_sharedRecordName - In the implementation block
@property (nonatomic,readonly) NSString * recordName; 
@property (nonatomic,readonly) CKRecordID * recordID; 
@property (nonatomic,readonly) CKRecordID * sharedRecordID; 
@property (nonatomic,readonly) NSString * sharedRecordType; 
+(id)userSpecificRecordTypeFromSharedRecordType:(id)arg1 ;
+(BOOL)isUserSpecificRecordType:(id)arg1 ;
+(BOOL)isUserSpecificRecordID:(id)arg1 ;
-(NSString *)zoneName;
-(NSString *)recordType;
-(void)setDatabaseScope:(long long)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(id)initWithRecordName:(id)arg1 ;
-(long long)databaseScope;
-(void)setShareOwnerName:(NSString *)arg1 ;
-(void)setSharedRecordName:(NSString *)arg1 ;
-(NSString *)recordName;
-(void)setZoneName:(NSString *)arg1 ;
-(CKRecordID *)recordID;
-(void)setUserSpecificOwnerName:(NSString *)arg1 ;
-(NSString *)userSpecificOwnerName;
-(NSString *)shareOwnerName;
-(NSString *)sharedRecordName;
-(id)initWithRecordType:(id)arg1 shareOwnerName:(id)arg2 databaseScope:(long long)arg3 zoneName:(id)arg4 userSpecificOwnerName:(id)arg5 sharedRecordName:(id)arg6 ;
-(NSString *)sharedRecordType;
-(CKRecordID *)sharedRecordID;
@end

