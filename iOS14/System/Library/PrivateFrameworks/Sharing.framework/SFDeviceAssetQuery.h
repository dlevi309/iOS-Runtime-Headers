/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


#import <Sharing/Sharing-Structs.h>
@class NSString, NSDictionary;

@interface SFDeviceAssetQuery : NSObject {

	BOOL _legacyAsset;
	BOOL _h264;
	LogCategory* _ucat;
	NSString* _assetType;
	unsigned long long _version;
	NSString* _productType;
	NSString* _mappedProductType;
	NSString* _color;
	NSDictionary* _additionalQueryParameters;

}

@property (nonatomic,readonly) LogCategory* ucat;                                     //@synthesize ucat=_ucat - In the implementation block
@property (nonatomic,readonly) NSString * stringIdentifier; 
@property (nonatomic,readonly) NSString * variantIdentifier; 
@property (nonatomic,readonly) NSString * assetType;                                  //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) BOOL h264;                                               //@synthesize h264=_h264 - In the implementation block
@property (nonatomic,readonly) unsigned long long version;                            //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * productType;                                //@synthesize productType=_productType - In the implementation block
@property (nonatomic,retain) NSString * mappedProductType;                            //@synthesize mappedProductType=_mappedProductType - In the implementation block
@property (nonatomic,readonly) NSString * effectiveProductType; 
@property (nonatomic,readonly) NSString * color;                                      //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalQueryParameters;              //@synthesize additionalQueryParameters=_additionalQueryParameters - In the implementation block
@property (assign,nonatomic) BOOL legacyAsset;                                        //@synthesize legacyAsset=_legacyAsset - In the implementation block
+(BOOL)deviceWantsH264;
-(NSString *)assetType;
-(LogCategory*)ucat;
-(BOOL)h264;
-(NSString *)color;
-(NSString *)productType;
-(NSString *)effectiveProductType;
-(BOOL)legacyAsset;
-(void)setMappedProductType:(NSString *)arg1 ;
-(NSDictionary *)additionalQueryParameters;
-(NSString *)stringIdentifier;
-(id)description;
-(NSString *)variantIdentifier;
-(void)setH264:(BOOL)arg1 ;
-(id)initWithHomePodColor:(unsigned long long)arg1 version:(unsigned)arg2 ;
-(id)initWithAssetType:(id)arg1 productType:(id)arg2 ;
-(id)loggingProductType;
-(NSString *)mappedProductType;
-(id)initWithHomePodColor:(unsigned long long)arg1 ;
-(id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 ;
-(id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2 ;
-(void)setLegacyAsset:(BOOL)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)version;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

