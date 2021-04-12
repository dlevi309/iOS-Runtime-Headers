/*
* Generated on Thursday, January 14, 2021 at 2:26:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface CKDFetchBatchedRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	BOOL _shouldReportAllPerItemFailures;
	BOOL _forcePCSDecryptionAttempt;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * configurationsByRecordZoneID;                        //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                      //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                               //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAllPerItemFailures;                                //@synthesize shouldReportAllPerItemFailures=_shouldReportAllPerItemFailures - In the implementation block
@property (assign,nonatomic) BOOL forcePCSDecryptionAttempt;                                     //@synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)recordZoneIDs;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShouldReportAllPerItemFailures:(BOOL)arg1 ;
-(BOOL)forcePCSDecryptionAttempt;
-(void)setForcePCSDecryptionAttempt:(BOOL)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)fetchAllChanges;
-(BOOL)shouldReportAllPerItemFailures;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
@end

