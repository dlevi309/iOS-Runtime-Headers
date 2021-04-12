/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary, NSSet;

@interface CKFetchRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _isFetchCurrentUserOperation;
	BOOL _shouldFetchAssetContent;
	BOOL _shouldFetchAssetContentInMemory;
	BOOL _dropInMemoryAssetContentASAP;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSDictionary* _recordIDsToETags;
	NSDictionary* _recordIDsToVersionETags;
	NSDictionary* _desiredPackageFileIndices;
	NSDictionary* _assetTransferOptionsByRecordTypeAndKey;
	NSSet* _assetFieldNamesToPublishURLs;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSDictionary* _webSharingIdentityDataByRecordID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                                //@synthesize recordIDs=_recordIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchCurrentUserOperation;                                   //@synthesize isFetchCurrentUserOperation=_isFetchCurrentUserOperation - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                                              //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToETags;                                    //@synthesize recordIDsToETags=_recordIDsToETags - In the implementation block
@property (nonatomic,retain) NSDictionary * recordIDsToVersionETags;                             //@synthesize recordIDsToVersionETags=_recordIDsToVersionETags - In the implementation block
@property (nonatomic,retain) NSDictionary * desiredPackageFileIndices;                           //@synthesize desiredPackageFileIndices=_desiredPackageFileIndices - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;                                       //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContentInMemory;                               //@synthesize shouldFetchAssetContentInMemory=_shouldFetchAssetContentInMemory - In the implementation block
@property (assign,nonatomic) BOOL dropInMemoryAssetContentASAP;                                  //@synthesize dropInMemoryAssetContentASAP=_dropInMemoryAssetContentASAP - In the implementation block
@property (nonatomic,retain) NSDictionary * assetTransferOptionsByRecordTypeAndKey;              //@synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey - In the implementation block
@property (nonatomic,retain) NSSet * assetFieldNamesToPublishURLs;                               //@synthesize assetFieldNamesToPublishURLs=_assetFieldNamesToPublishURLs - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                                    //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                                      //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,retain) NSDictionary * webSharingIdentityDataByRecordID;                    //@synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setAssetTransferOptionsByRecordTypeAndKey:(NSDictionary *)arg1 ;
-(NSDictionary *)assetTransferOptionsByRecordTypeAndKey;
-(void)setDropInMemoryAssetContentASAP:(BOOL)arg1 ;
-(id)init;
-(void)setWebSharingIdentityDataByRecordID:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(void)setDesiredPackageFileIndices:(NSDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setShouldFetchAssetContentInMemory:(BOOL)arg1 ;
-(unsigned long long)URLOptions;
-(unsigned long long)requestedTTL;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(NSSet *)assetFieldNamesToPublishURLs;
-(void)setAssetFieldNamesToPublishURLs:(NSSet *)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setIsFetchCurrentUserOperation:(BOOL)arg1 ;
-(NSArray *)recordIDs;
-(BOOL)isFetchCurrentUserOperation;
-(NSArray *)desiredKeys;
-(NSDictionary *)recordIDsToVersionETags;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)recordIDsToETags;
-(BOOL)dropInMemoryAssetContentASAP;
-(NSDictionary *)webSharingIdentityDataByRecordID;
-(void)setRecordIDsToVersionETags:(NSDictionary *)arg1 ;
-(BOOL)shouldFetchAssetContentInMemory;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSDictionary *)desiredPackageFileIndices;
-(void)setRecordIDsToETags:(NSDictionary *)arg1 ;
@end

