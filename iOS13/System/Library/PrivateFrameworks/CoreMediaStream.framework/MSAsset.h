/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
*/

#import <CoreMediaStream/CoreMediaStream-Structs.h>
#import <libobjc.A.dylib/MMCSAsset.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSError, NSDate, NSDictionary, NSURL;

@interface MSAsset : NSObject <MMCSAsset, NSSecureCoding, NSCopying> {

	BOOL _assetDataAvailableOnServer;
	NSData* _masterAssetHash;
	NSDictionary* _metadata;
	NSString* _path;
	NSURL* _MMCSURL;
	NSData* _fileData;
	NSError* _error;
	NSString* _type;
	NSData* _fileHash;
	unsigned long long _protocolFileSize;
	NSString* _MMCSAccessHeader;
	NSDate* _MMCSAccessHeaderTimeStamp;
	NSString* _MMCSReceipt;
	NSString* _GUID;
	NSString* _assetCollectionGUID;
	NSDate* _batchCreationDate;
	NSDate* _photoCreationDate;
	id _userInfo;
	unsigned long long _mediaAssetType;

}

@property (getter=UID,nonatomic,retain) NSString * GUID;                       //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,retain) NSData * masterAssetHash;                         //@synthesize masterAssetHash=_masterAssetHash - In the implementation block
@property (nonatomic,retain) NSDictionary * metadata;                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSURL * MMCSURL;                                  //@synthesize MMCSURL=_MMCSURL - In the implementation block
@property (nonatomic,retain) NSData * fileData;                                //@synthesize fileData=_fileData - In the implementation block
@property (nonatomic,retain) NSString * assetCollectionGUID;                   //@synthesize assetCollectionGUID=_assetCollectionGUID - In the implementation block
@property (nonatomic,retain) NSDate * batchCreationDate;                       //@synthesize batchCreationDate=_batchCreationDate - In the implementation block
@property (nonatomic,retain) NSDate * photoCreationDate;                       //@synthesize photoCreationDate=_photoCreationDate - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) id userInfo;                                      //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) unsigned long long mediaAssetType;                //@synthesize mediaAssetType=_mediaAssetType - In the implementation block
@property (assign,nonatomic) BOOL assetDataAvailableOnServer;                  //@synthesize assetDataAvailableOnServer=_assetDataAvailableOnServer - In the implementation block
@property (nonatomic,retain) NSData * fileHash; 
@property (nonatomic,retain) NSString * type; 
@property (assign,nonatomic) unsigned long long protocolFileSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * MMCSUTI;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long MMCSItemID; 
@property (nonatomic,retain) NSData * MMCSHash;                                //@synthesize fileHash=_fileHash - In the implementation block
@property (assign,nonatomic) unsigned long long MMCSItemSize;                  //@synthesize protocolFileSize=_protocolFileSize - In the implementation block
@property (nonatomic,retain) NSError * MMCSError; 
@property (nonatomic,retain) NSString * MMCSAccessHeader;                      //@synthesize MMCSAccessHeader=_MMCSAccessHeader - In the implementation block
@property (nonatomic,retain) NSDate * MMCSAccessHeaderTimeStamp;               //@synthesize MMCSAccessHeaderTimeStamp=_MMCSAccessHeaderTimeStamp - In the implementation block
@property (nonatomic,retain) NSString * MMCSReceipt;                           //@synthesize MMCSReceipt=_MMCSReceipt - In the implementation block
@property (assign,nonatomic) unsigned MMCSItemFlags; 
+(BOOL)supportsSecureCoding;
+(id)asset;
+(id)assetWithAsset:(id)arg1 ;
+(id)MSASPAssetFromProtocolDictionary:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(id)userInfo;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(NSString *)path;
-(void)setError:(NSError *)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(unsigned long long)_fileSize;
-(BOOL)isVideo;
-(NSString *)GUID;
-(void)setGUID:(NSString *)arg1 ;
-(BOOL)isPhoto;
-(void)setFileHash:(NSData *)arg1 ;
-(void)setMasterAssetHash:(NSData *)arg1 ;
-(NSData *)fileHash;
-(unsigned long long)mediaAssetType;
-(void)setMediaAssetType:(unsigned long long)arg1 ;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(NSString *)assetCollectionGUID;
-(void)setAssetCollectionGUID:(NSString *)arg1 ;
-(NSData *)fileData;
-(void)setFileData:(NSData *)arg1 ;
-(id)metadataValueForKey:(id)arg1 ;
-(id)initWithGUID:(id)arg1 ;
-(int)MMCSOpenNewFileDescriptor;
-(id)MMCSItemType;
-(NSString *)MMCSUTI;
-(void)setMMCSUTI:(NSString *)arg1 ;
-(unsigned long long)MMCSItemID;
-(void)setMMCSItemID:(unsigned long long)arg1 ;
-(NSData *)MMCSHash;
-(void)setMMCSHash:(NSData *)arg1 ;
-(unsigned long long)MMCSItemSize;
-(void)setMMCSItemSize:(unsigned long long)arg1 ;
-(NSError *)MMCSError;
-(void)setMMCSError:(NSError *)arg1 ;
-(NSString *)MMCSAccessHeader;
-(void)setMMCSAccessHeader:(NSString *)arg1 ;
-(NSDate *)MMCSAccessHeaderTimeStamp;
-(void)setMMCSAccessHeaderTimeStamp:(NSDate *)arg1 ;
-(NSString *)MMCSReceipt;
-(void)setMMCSReceipt:(NSString *)arg1 ;
-(unsigned)MMCSItemFlags;
-(void)setMMCSItemFlags:(unsigned)arg1 ;
-(unsigned long long)protocolFileSize;
-(void)setProtocolFileSize:(unsigned long long)arg1 ;
-(void)setMMCSAccessHeader:(id)arg1 andTimeStamp:(id)arg2 ;
-(unsigned long long)_fileSizeOnDisk;
-(void)addMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(NSData *)masterAssetHash;
-(NSURL *)MMCSURL;
-(void)setMMCSURL:(NSURL *)arg1 ;
-(NSDate *)batchCreationDate;
-(void)setBatchCreationDate:(NSDate *)arg1 ;
-(NSDate *)photoCreationDate;
-(void)setPhotoCreationDate:(NSDate *)arg1 ;
-(BOOL)assetDataAvailableOnServer;
-(void)setAssetDataAvailableOnServer:(BOOL)arg1 ;
-(id)MSASPProtocolDictionary;
@end

