/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
-(NSURL *)contentBaseURL;
-(unsigned long long)downloadTokenExpiration;
-(id)initWithSourceZoneID:(id)arg1 ;
-(CKRecordZoneID *)sourceZoneID;
-(void)setSourceZoneID:(CKRecordZoneID *)arg1 ;
-(void)setContentBaseURL:(NSURL *)arg1 ;
-(void)setDownloadToken:(NSString *)arg1 ;
-(void)setDownloadTokenExpiration:(unsigned long long)arg1 ;
-(NSString *)destinationFieldName;
-(void)setDestinationFieldName:(NSString *)arg1 ;
-(NSString *)owner;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)description;
-(void)setRequestor:(NSString *)arg1 ;
-(NSData *)assetKey;
-(void)setOwner:(NSString *)arg1 ;
-(NSString *)requestor;
-(NSString *)downloadToken;
-(NSData *)referenceSignature;
@end

