/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)recordType;
-(CKRecordID *)recordID;
-(NSString *)recordName;
-(NSString *)zoneName;
-(void)setZoneName:(NSString *)arg1 ;
-(long long)databaseScope;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)initWithRecordName:(id)arg1 ;
-(void)setRecordType:(NSString *)arg1 ;
-(void)setShareOwnerName:(NSString *)arg1 ;
-(void)setUserSpecificOwnerName:(NSString *)arg1 ;
-(void)setSharedRecordName:(NSString *)arg1 ;
-(NSString *)userSpecificOwnerName;
-(NSString *)shareOwnerName;
-(NSString *)sharedRecordName;
-(id)initWithRecordType:(id)arg1 shareOwnerName:(id)arg2 databaseScope:(long long)arg3 zoneName:(id)arg4 userSpecificOwnerName:(id)arg5 sharedRecordName:(id)arg6 ;
-(NSString *)sharedRecordType;
-(CKRecordID *)sharedRecordID;
@end

