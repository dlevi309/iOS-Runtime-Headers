/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKit/CKObject.h>

@class NSNumber, NSUUID, NSString, NSData;

@interface CKDAssetHandle : CKObject {

	NSNumber* _itemID;
	NSUUID* _UUID;
	NSString* _path;
	NSNumber* _volumeIndex;
	NSNumber* _fileID;
	NSNumber* _generationID;
	NSNumber* _lastUsedTime;
	NSData* _fileSignature;
	NSNumber* _status;
	NSNumber* _modTime;
	NSNumber* _fileSize;
	NSNumber* _chunkCount;

}

@property (nonatomic,retain) NSNumber * itemID;                    //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSUUID * UUID;                        //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * path;                      //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSNumber * volumeIndex;               //@synthesize volumeIndex=_volumeIndex - In the implementation block
@property (nonatomic,retain) NSNumber * fileID;                    //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationID;              //@synthesize generationID=_generationID - In the implementation block
@property (nonatomic,retain) NSNumber * lastUsedTime;              //@synthesize lastUsedTime=_lastUsedTime - In the implementation block
@property (nonatomic,retain) NSData * fileSignature;               //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,retain) NSNumber * status;                    //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSNumber * modTime;                   //@synthesize modTime=_modTime - In the implementation block
@property (nonatomic,retain) NSNumber * fileSize;                  //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSNumber * chunkCount;                //@synthesize chunkCount=_chunkCount - In the implementation block
+(id)CKSQLiteClassName;
+(id)descriptionWithStatus:(long long)arg1 ;
-(id)description;
-(NSString *)path;
-(NSNumber *)fileSize;
-(NSUUID *)UUID;
-(NSNumber *)status;
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSNumber *)itemID;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setFileSize:(NSNumber *)arg1 ;
-(NSNumber *)generationID;
-(void)setGenerationID:(NSNumber *)arg1 ;
-(NSNumber *)lastUsedTime;
-(id)CKPropertiesDescription;
-(id)dictionaryPropertyEncoding;
-(id)initWithPropertyDictionary:(id)arg1 ;
-(NSNumber *)fileID;
-(void)setFileID:(NSNumber *)arg1 ;
-(NSData *)fileSignature;
-(void)setFileSignature:(NSData *)arg1 ;
-(id)statusDescription;
-(void)setLastUsedTime:(NSNumber *)arg1 ;
-(NSNumber *)chunkCount;
-(void)setChunkCount:(NSNumber *)arg1 ;
-(void)setVolumeIndex:(NSNumber *)arg1 ;
-(NSNumber *)volumeIndex;
-(BOOL)shouldBeUnregisteredBeforeDeleted;
-(BOOL)mayHaveAssetCacheManagedFile;
-(id)initWithItemID:(id)arg1 UUID:(id)arg2 path:(id)arg3 ;
-(void)setModTime:(NSNumber *)arg1 ;
-(BOOL)isEqualRevisionOfAssetHandle:(id)arg1 differencesDescription:(id*)arg2 ;
-(BOOL)mayBeEvicted;
-(NSNumber *)modTime;
-(BOOL)isEqualToAssetHandle:(id)arg1 keys:(id)arg2 differencesDescription:(id*)arg3 ;
@end

