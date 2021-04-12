/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _atomic;
	BOOL _shouldOnlySaveAssetContent;
	BOOL _shouldReportRecordsInFlight;
	BOOL _originatingFromDaemon;
	BOOL _markAsParticipantNeedsNewInvitationToken;
	BOOL _shouldSkipPCSRetryBehavior;
	NSArray* _recordsToSave;
	NSArray* _recordIDsToDelete;
	NSData* _clientChangeTokenData;
	long long _savePolicy;
	NSDictionary* _recordIDsToDeleteToEtags;
	NSDictionary* _conflictLosersToResolveByRecordID;
	NSDictionary* _pluginFieldsForRecordDeletesByID;
	NSDictionary* _assetUUIDToExpectedProperties;
	NSDictionary* _packageUUIDToExpectedProperties;

}

@property (nonatomic,retain) NSArray * recordsToSave;                                       //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordIDsToDelete;                                   //@synthesize recordIDsToDelete=_recordIDsToDelete - In the implementation block
@property (nonatomic,retain) NSData * clientChangeTokenData;                                //@synthesize clientChangeTokenData=_clientChangeTokenData - In the implementation block
@property (assign,nonatomic) BOOL atomic;                                                   //@synthesize atomic=_atomic - In the implementation block
@property (assign,nonatomic) long long savePolicy;                                          //@synthesize savePolicy=_savePolicy - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlySaveAssetContent;                               //@synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent - In the implementation block
@property (nonatomic,copy) NSDictionary * recordIDsToDeleteToEtags;                         //@synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags - In the implementation block
@property (nonatomic,retain) NSDictionary * conflictLosersToResolveByRecordID;              //@synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID - In the implementation block
@property (nonatomic,copy) NSDictionary * pluginFieldsForRecordDeletesByID;                 //@synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID - In the implementation block
@property (assign,nonatomic) BOOL shouldReportRecordsInFlight;                              //@synthesize shouldReportRecordsInFlight=_shouldReportRecordsInFlight - In the implementation block
@property (nonatomic,copy) NSDictionary * assetUUIDToExpectedProperties;                    //@synthesize assetUUIDToExpectedProperties=_assetUUIDToExpectedProperties - In the implementation block
@property (nonatomic,copy) NSDictionary * packageUUIDToExpectedProperties;                  //@synthesize packageUUIDToExpectedProperties=_packageUUIDToExpectedProperties - In the implementation block
@property (assign,nonatomic) BOOL originatingFromDaemon;                                    //@synthesize originatingFromDaemon=_originatingFromDaemon - In the implementation block
@property (assign,nonatomic) BOOL markAsParticipantNeedsNewInvitationToken;                 //@synthesize markAsParticipantNeedsNewInvitationToken=_markAsParticipantNeedsNewInvitationToken - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipPCSRetryBehavior;                               //@synthesize shouldSkipPCSRetryBehavior=_shouldSkipPCSRetryBehavior - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)atomic;
-(NSArray *)recordIDsToDelete;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)savePolicy;
-(void)setRecordsToSave:(NSArray *)arg1 ;
-(void)setRecordIDsToDelete:(NSArray *)arg1 ;
-(NSData *)clientChangeTokenData;
-(void)setClientChangeTokenData:(NSData *)arg1 ;
-(BOOL)shouldOnlySaveAssetContent;
-(void)setShouldOnlySaveAssetContent:(BOOL)arg1 ;
-(NSDictionary *)recordIDsToDeleteToEtags;
-(void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg1 ;
-(NSDictionary *)conflictLosersToResolveByRecordID;
-(void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg1 ;
-(NSDictionary *)pluginFieldsForRecordDeletesByID;
-(void)setPluginFieldsForRecordDeletesByID:(NSDictionary *)arg1 ;
-(void)setShouldReportRecordsInFlight:(BOOL)arg1 ;
-(NSDictionary *)assetUUIDToExpectedProperties;
-(NSDictionary *)packageUUIDToExpectedProperties;
-(void)setAssetUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(void)setPackageUUIDToExpectedProperties:(NSDictionary *)arg1 ;
-(BOOL)markAsParticipantNeedsNewInvitationToken;
-(void)setMarkAsParticipantNeedsNewInvitationToken:(BOOL)arg1 ;
-(BOOL)shouldReportRecordsInFlight;
-(BOOL)originatingFromDaemon;
-(void)setOriginatingFromDaemon:(BOOL)arg1 ;
-(BOOL)shouldSkipPCSRetryBehavior;
-(void)setShouldSkipPCSRetryBehavior:(BOOL)arg1 ;
-(void)setSavePolicy:(long long)arg1 ;
-(NSArray *)recordsToSave;
-(id)initWithCoder:(id)arg1 ;
-(void)setAtomic:(BOOL)arg1 ;
@end
