/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/

#import <CoreData/NSManagedObject.h>
#import <libobjc.A.dylib/ICLoggable.h>

@class CKRecordZoneID, CKServerChangeToken, NSString, ICAccount, NSData;

@interface ICServerChangeToken : NSManagedObject <ICLoggable> {

	CKRecordZoneID* _zoneID;
	CKServerChangeToken* _ckServerChangeToken;

}

@property (nonatomic,retain) NSString * zoneName; 
@property (nonatomic,retain) NSString * ownerName; 
@property (nonatomic,retain) ICAccount * account; 
@property (nonatomic,retain) NSData * ckServerChangeTokenData; 
@property (nonatomic,retain) CKServerChangeToken * ckServerChangeToken;              //@synthesize ckServerChangeToken=_ckServerChangeToken - In the implementation block
@property (assign,nonatomic) long long databaseScope; 
@property (nonatomic,readonly) CKRecordZoneID * zoneID;                              //@synthesize zoneID=_zoneID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)addServerChangeTokenForAccount:(id)arg1 ckServerChangeToken:(id)arg2 zoneID:(id)arg3 databaseScope:(long long)arg4 context:(id)arg5 ;
+(id)serverChangeTokenForAccount:(id)arg1 zoneID:(id)arg2 databaseScope:(long long)arg3 context:(id)arg4 ;
+(id)serverChangeTokensMatchingPredicate:(id)arg1 inContext:(id)arg2 ;
-(CKRecordZoneID *)zoneID;
-(CKServerChangeToken *)ckServerChangeToken;
-(void)setCkServerChangeToken:(CKServerChangeToken *)arg1 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)ic_loggingValues;
-(long long)databaseScope;
-(void)didTurnIntoFault;
@end

