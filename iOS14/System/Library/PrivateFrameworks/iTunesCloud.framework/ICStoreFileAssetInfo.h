/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSData *)md5;
-(id)_metadataDictionary;
-(id)initWithAssetURL:(id)arg1 ;
-(void)setExpectedProtectionType:(long long)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
-(long long)expectedProtectionType;
-(id)initWithFileAssetResponseDictionary:(id)arg1 ;
-(void)setFairPlayInfoList:(NSArray *)arg1 ;
-(NSString *)fileExtension;
-(unsigned long long)fileSize;
-(NSURL *)assetURL;
-(long long)protectionType;
-(void)setFileExtension:(NSString *)arg1 ;
-(void)setDownloadKey:(NSString *)arg1 ;
-(NSDictionary *)responseDictionary;
-(void)setMd5:(NSData *)arg1 ;
-(void)setMetadata:(ICStoreFinanceItemMetadata *)arg1 ;
-(void)setFlavorType:(long long)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(NSString *)downloadKey;
-(long long)flavorType;
-(NSArray *)fairPlayInfoList;
-(ICStoreFinanceItemMetadata *)metadata;
@end

