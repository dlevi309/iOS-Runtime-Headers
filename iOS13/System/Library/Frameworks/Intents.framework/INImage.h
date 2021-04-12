/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/INKeyImageProducing.h>
#import <libobjc.A.dylib/INCacheableObject.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INImageExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSURL;

@interface INImage : NSObject <INJSONSerializable, INKeyImageProducing, INCacheableObject, INImageProxyInjecting, INImageExport, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	SCD_Struct_IN1 _imageSize;

}

@property (nonatomic,copy,readonly) INImage * cd_dataImage; 
@property (nonatomic,copy,readonly) NSData * cd_encodedDataImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) INImage * _keyImage; 
@property (nonatomic,copy,readonly) NSString * cacheIdentifier; 
@property (nonatomic,readonly) BOOL _isEligibleForProxying; 
@property (nonatomic,readonly) BOOL _isSupportedForDonation; 
@property (setter=_setIdentifier:,nonatomic,copy) NSString * _identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (setter=_setImageData:,nonatomic,copy) NSData * _imageData; 
@property (setter=_setUri:,nonatomic,copy) NSURL * _uri; 
@property (setter=_setName:,nonatomic,copy) NSString * _name; 
@property (setter=_setBundlePath:,nonatomic,copy) NSString * _bundlePath; 
@property (setter=_setBundleIdentifier:,nonatomic,copy) NSString * _bundleIdentifier; 
@property (assign,setter=_setImageSize:,nonatomic) SCD_Struct_IN1 _imageSize;                      //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) BOOL _requiresRetrieval; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)imageNamed:(id)arg1 ;
+(void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
+(id)imageWithImageData:(id)arg1 ;
+(id)imageWithURL:(id)arg1 ;
+(void)registerImageLoadersOnce;
+(id)imageWithURL:(id)arg1 width:(double)arg2 height:(double)arg3 ;
+(id)_bundleImageWithURL:(id)arg1 ;
+(id)_classesInCluster;
-(INImage *)cd_dataImage;
-(NSData *)cd_encodedDataImage;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)_name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)_identifier;
-(void)_setIdentifier:(id)arg1 ;
-(NSString *)_bundleIdentifier;
-(BOOL)_requiresRetrieval;
-(NSURL *)_uri;
-(INImage *)_keyImage;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_dictionaryRepresentation;
-(id)_description;
-(NSString *)_bundlePath;
-(id)_initWithIdentifier:(id)arg1 ;
-(void)_setName:(id)arg1 ;
-(SCD_Struct_IN1)_imageSize;
-(NSData *)_imageData;
-(void)_setImageData:(id)arg1 ;
-(void)generateCachePayloadWithCompletion:(/*^block*/id)arg1 ;
-(NSString *)cacheIdentifier;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)_intents_readableDescriptionWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(void)_retrieveImageDataWithReply:(/*^block*/id)arg1 ;
-(id)_copyWithSubclass:(Class)arg1 ;
-(BOOL)_isEligibleForProxying;
-(void)_setUri:(id)arg1 ;
-(void)_setBundlePath:(id)arg1 ;
-(void)_setImageSize:(SCD_Struct_IN1)arg1 ;
-(id)_initWithURLRepresentation:(id)arg1 ;
-(id)_initWithData:(id)arg1 ;
-(void)_requestProxy:(/*^block*/id)arg1 ;
-(void)_setBundleIdentifier:(id)arg1 ;
-(id)_preferredImageLoader;
-(id)_URLRepresentation;
-(BOOL)_isSupportedForDonation;
-(id)_descriptionAtIndent:(unsigned long long)arg1 ;
-(void)_loadImageDataAndSizeWithHelper:(id)arg1 accessSpecifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_in_writeableFilePersistenceConfigurationForStoreType:(unsigned long long)arg1 ;
-(id)_in_downscaledImageForFilePersistence;
@end

