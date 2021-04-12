/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKDatabaseOperationInfo.h>

@class NSSet, NSDictionary;

@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo {

	BOOL _fetchAssetContents;
	BOOL _preserveOrdering;
	BOOL _forceDecryptionAttempt;
	NSSet* _desiredKeys;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;

}

@property (assign,nonatomic) BOOL fetchAssetContents;                                            //@synthesize fetchAssetContents=_fetchAssetContents - In the implementation block
@property (assign,nonatomic) BOOL preserveOrdering;                                              //@synthesize preserveOrdering=_preserveOrdering - In the implementation block
@property (nonatomic,retain) NSSet * desiredKeys;                                                //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (assign,nonatomic) BOOL forceDecryptionAttempt;                                        //@synthesize forceDecryptionAttempt=_forceDecryptionAttempt - In the implementation block
-(id)init;
-(void)setDesiredKeys:(NSSet *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSSet *)desiredKeys;
-(void)setFetchAssetContents:(BOOL)arg1 ;
-(void)setPreserveOrdering:(BOOL)arg1 ;
-(BOOL)fetchAssetContents;
-(BOOL)preserveOrdering;
-(BOOL)forceDecryptionAttempt;
-(void)setForceDecryptionAttempt:(BOOL)arg1 ;
@end

