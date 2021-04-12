/*
* Generated on Monday, March 1, 2021 at 2:30:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/


@class CKRecordZoneID, NSURL, NSString, NSData, NSError;

@interface CKAssetRereferenceInfo : NSObject {

	CKRecordZoneID* _sourceZoneID;
	NSURL* _contentBaseURL;
	NSString* _owner;
	NSString* _requestor;
	NSData* _assetKey;
	NSData* _referenceSignature;
	NSString* _downloadToken;
	unsigned long long _downloadTokenExpiration;
	NSError* _error;
	NSString* _destinationFieldName;

}

@property (nonatomic,retain) CKRecordZoneID * sourceZoneID;                           //@synthesize sourceZoneID=_sourceZoneID - In the implementation block
@property (nonatomic,retain) NSURL * contentBaseURL;                                  //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,retain) NSString * owner;                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * requestor;                                    //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,retain) NSData * assetKey;                                       //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;                             //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,retain) NSString * downloadToken;                                //@synthesize downloadToken=_downloadToken - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTokenExpiration;              //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSString * destinationFieldName;                         //@synthesize destinationFieldName=_destinationFieldName - In the implementation block
-(id)description;
-(void)setOwner:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)owner;
-(NSString *)downloadToken;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(NSData *)referenceSignature;
-(NSData *)assetKey;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
-(NSURL *)contentBaseURL;
-(NSString *)requestor;
-(unsigned long long)downloadTokenExpiration;
-(void)setDownloadToken:(NSString *)arg1 ;
-(void)setDownloadTokenExpiration:(unsigned long long)arg1 ;
-(void)setContentBaseURL:(NSURL *)arg1 ;
-(void)setRequestor:(NSString *)arg1 ;
-(id)initWithSourceZoneID:(id)arg1 ;
-(void)clearRecordFetchProperties;
-(BOOL)validateAndSetRecordFetchPropertiesWithAsset:(id)arg1 assetReference:(id)arg2 useEncryption:(BOOL)arg3 useClearAssetEncryption:(BOOL)arg4 ;
-(CKRecordZoneID *)sourceZoneID;
-(void)setSourceZoneID:(CKRecordZoneID *)arg1 ;
-(NSString *)destinationFieldName;
-(void)setDestinationFieldName:(NSString *)arg1 ;
@end

