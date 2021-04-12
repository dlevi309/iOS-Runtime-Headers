/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _allowDefaultZoneSave;
	BOOL _markZonesAsUserPurged;
	BOOL _dontFetchFromServer;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	long long _maxZoneSaveAttempts;

}

@property (nonatomic,retain) NSArray * recordZonesToSave;                  //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;              //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (assign,nonatomic) BOOL allowDefaultZoneSave;                    //@synthesize allowDefaultZoneSave=_allowDefaultZoneSave - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                   //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (assign,nonatomic) long long maxZoneSaveAttempts;                //@synthesize maxZoneSaveAttempts=_maxZoneSaveAttempts - In the implementation block
@property (assign,nonatomic) BOOL dontFetchFromServer;                     //@synthesize dontFetchFromServer=_dontFetchFromServer - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)recordZoneIDsToDelete;
-(void)setAllowDefaultZoneSave:(BOOL)arg1 ;
-(BOOL)markZonesAsUserPurged;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(void)setMaxZoneSaveAttempts:(long long)arg1 ;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(BOOL)dontFetchFromServer;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(BOOL)allowDefaultZoneSave;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)recordZonesToSave;
-(id)initWithCoder:(id)arg1 ;
-(void)setDontFetchFromServer:(BOOL)arg1 ;
-(long long)maxZoneSaveAttempts;
@end

