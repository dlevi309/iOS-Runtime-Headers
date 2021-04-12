/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

@class NSString, SFUCryptoKey;


@protocol TSPDataStorage <NSObject>
@property (nonatomic,readonly) NSString * documentResourceLocator; 
@property (nonatomic,readonly) NSString * packageLocator; 
@property (nonatomic,readonly) unsigned char packageIdentifier; 
@property (nonatomic,readonly) unsigned long long encodedLength; 
@property (nonatomic,readonly) BOOL readOnly; 
@property (nonatomic,readonly) BOOL needsDownload; 
@property (nonatomic,readonly) SFUCryptoKey * decryptionKey; 
@optional
-(SFUCryptoKey *)decryptionKey;
-(BOOL)needsDownload;
-(id)storageForDataCopyFromOtherContext;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)copyToTemporaryURL:(id)arg1;

@required
-(unsigned long long)encodedLength;
-(BOOL)readOnly;
-(unsigned char)packageIdentifier;
-(NSString *)packageLocator;
-(void)performIOChannelReadWithAccessor:(/*^block*/id)arg1;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1;
-(id)NSDataWithOptions:(unsigned long long)arg1;
-(CGDataProviderRef)newCGDataProvider;
-(CGImageSourceRef)newCGImageSource;
-(id)AVAssetWithOptions:(id)arg1 contentTypeUTI:(id)arg2;
-(NSString *)documentResourceLocator;
-(id)filenameForPreferredFilename:(id)arg1;
-(BOOL)isInPackage:(id)arg1;
-(void)performReadWithAccessor:(/*^block*/id)arg1;
-(id)AVAssetWithOptions:(id)arg1 usingResourceLoaderWithContentTypeUTI:(id)arg2;

@end

