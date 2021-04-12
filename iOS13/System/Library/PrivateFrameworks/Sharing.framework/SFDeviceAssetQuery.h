/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)version;
-(NSString *)color;
-(NSString *)productType;
-(NSString *)assetType;
-(NSDictionary *)additionalQueryParameters;
-(BOOL)legacyAsset;
-(BOOL)h264;
-(NSString *)effectiveProductType;
-(LogCategory*)ucat;
-(NSString *)stringIdentifier;
-(void)setMappedProductType:(NSString *)arg1 ;
-(id)initWithAssetType:(id)arg1 productType:(id)arg2 ;
-(id)loggingProductType;
-(NSString *)mappedProductType;
-(id)initWithHomePodColor:(unsigned long long)arg1 ;
-(id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 ;
-(id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2 ;
-(NSString *)variantIdentifier;
-(void)setLegacyAsset:(BOOL)arg1 ;
-(void)setH264:(BOOL)arg1 ;
@end

