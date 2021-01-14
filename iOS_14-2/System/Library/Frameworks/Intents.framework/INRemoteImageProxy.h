/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INImage.h>

@class NSString;

@interface INRemoteImageProxy : INImage {

	NSString* _storageServiceIdentifier;
	NSString* _proxyIdentifier;

}

@property (setter=_setProxyIdentifier:,nonatomic,copy) NSString * _proxyIdentifier;                                //@synthesize proxyIdentifier=_proxyIdentifier - In the implementation block
@property (setter=_setStorageServiceIdentifier:,nonatomic,copy) NSString * _storageServiceIdentifier;              //@synthesize storageServiceIdentifier=_storageServiceIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
+(BOOL)supportsSecureCoding;
+(void)requestProxyByStoringImage:(id)arg1 qualityOfService:(unsigned)arg2 scaled:(BOOL)arg3 storeType:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
+(id)proxyImageSynchronously:(id)arg1 usingService:(id)arg2 error:(id*)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_dictionaryRepresentation;
-(BOOL)isValid;
-(void)_retrieveImageDataWithReply:(/*^block*/id)arg1 ;
-(id)_copyWithSubclass:(Class)arg1 ;
-(id)_identifier;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(id)_URLRepresentation;
-(NSString *)_proxyIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(void)unproxyImageFromService:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)_setProxyIdentifier:(id)arg1 ;
-(NSString *)_storageServiceIdentifier;
-(void)purgeStoredImageWithCompletion:(/*^block*/id)arg1 ;
-(id)retrieveProxiedImageSynchronouslyUsingService:(id)arg1 error:(id*)arg2 ;
-(void)_setStorageServiceIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

