/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, NSURL, NSString, NSArray, ICStoreFinanceItemMetadata, NSData;

@interface ICStoreFileAssetInfo : NSObject {

	NSDictionary* _responseDictionary;
	NSURL* _assetURL;
	NSString* _downloadKey;
	NSArray* _fairPlayInfoList;
	long long _flavorType;
	NSString* _fileExtension;
	unsigned long long _fileSize;
	ICStoreFinanceItemMetadata* _metadata;
	NSData* _md5;
	long long _expectedProtectionType;

}

@property (nonatomic,copy) NSURL * assetURL;                                        //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,copy) NSString * downloadKey;                                  //@synthesize downloadKey=_downloadKey - In the implementation block
@property (assign,nonatomic) long long expectedProtectionType;                      //@synthesize expectedProtectionType=_expectedProtectionType - In the implementation block
@property (nonatomic,copy) NSArray * fairPlayInfoList;                              //@synthesize fairPlayInfoList=_fairPlayInfoList - In the implementation block
@property (assign,nonatomic) long long flavorType;                                  //@synthesize flavorType=_flavorType - In the implementation block
@property (nonatomic,copy) NSString * fileExtension;                                //@synthesize fileExtension=_fileExtension - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                           //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,copy) ICStoreFinanceItemMetadata * metadata;                   //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSData * md5;                                            //@synthesize md5=_md5 - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseDictionary; 
@property (nonatomic,readonly) long long protectionType; 
-(unsigned long long)fileSize;
-(void)setMetadata:(ICStoreFinanceItemMetadata *)arg1 ;
-(ICStoreFinanceItemMetadata *)metadata;
-(void)setFileSize:(unsigned long long)arg1 ;
-(NSString *)fileExtension;
-(void)setMd5:(NSData *)arg1 ;
-(NSData *)md5;
-(NSURL *)assetURL;
-(void)setAssetURL:(NSURL *)arg1 ;
-(NSDictionary *)responseDictionary;
-(void)setFileExtension:(NSString *)arg1 ;
-(NSString *)downloadKey;
-(NSArray *)fairPlayInfoList;
-(long long)flavorType;
-(long long)protectionType;
-(void)setFlavorType:(long long)arg1 ;
-(void)setDownloadKey:(NSString *)arg1 ;
-(id)initWithFileAssetResponseDictionary:(id)arg1 ;
-(id)_metadataDictionary;
-(id)initWithAssetURL:(id)arg1 ;
-(void)setFairPlayInfoList:(NSArray *)arg1 ;
-(long long)expectedProtectionType;
-(void)setExpectedProtectionType:(long long)arg1 ;
@end

