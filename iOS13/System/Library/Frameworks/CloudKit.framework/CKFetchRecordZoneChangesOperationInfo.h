/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	BOOL _shouldReportAllPerItemFailures;
	BOOL _forcePCSDecryptionAttempt;
	NSArray* _recordZoneIDs;
	NSDictionary* _configurationsByRecordZoneID;
	long long _changeTypes;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                                            //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * configurationsByRecordZoneID;                        //@synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                                      //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) long long changeTypes;                                              //@synthesize changeTypes=_changeTypes - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                               //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL shouldReportAllPerItemFailures;                                //@synthesize shouldReportAllPerItemFailures=_shouldReportAllPerItemFailures - In the implementation block
@property (assign,nonatomic) BOOL forcePCSDecryptionAttempt;                                     //@synthesize forcePCSDecryptionAttempt=_forcePCSDecryptionAttempt - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(NSArray *)recordZoneIDs;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(BOOL)fetchAllChanges;
-(NSDictionary *)configurationsByRecordZoneID;
-(void)setConfigurationsByRecordZoneID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContents;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(void)setChangeTypes:(long long)arg1 ;
-(void)setShouldReportAllPerItemFailures:(BOOL)arg1 ;
-(BOOL)shouldReportAllPerItemFailures;
-(long long)changeTypes;
-(BOOL)forcePCSDecryptionAttempt;
-(void)setForcePCSDecryptionAttempt:(BOOL)arg1 ;
@end

