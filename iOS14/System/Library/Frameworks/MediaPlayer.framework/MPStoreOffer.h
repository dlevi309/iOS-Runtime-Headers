/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSDictionary, NSString, NSURL;

@interface MPStoreOffer : NSObject {

	NSDictionary* _offerDictionary;
	MPStoreOffer* _regularPriceOffer;
	NSDictionary* _mediaAssetDictionary;
	unsigned long long _entityPersistentID;
	long long _entityType;
	NSString* _entityTitle;
	long long _passType;

}

@property (nonatomic,readonly) long long entityType;                                  //@synthesize entityType=_entityType - In the implementation block
@property (nonatomic,readonly) unsigned long long entityPersistentID;                 //@synthesize entityPersistentID=_entityPersistentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityTitle;                           //@synthesize entityTitle=_entityTitle - In the implementation block
@property (nonatomic,readonly) long long buyType; 
@property (nonatomic,readonly) long long passType;                                    //@synthesize passType=_passType - In the implementation block
@property (nonatomic,copy,readonly) NSString * buyParameters; 
@property (nonatomic,copy,readonly) NSString * displayTitle; 
@property (nonatomic,copy,readonly) NSString * actionDisplayTitle; 
@property (nonatomic,readonly) BOOL requiresConfirmation; 
@property (nonatomic,copy,readonly) NSString * displayPrice; 
@property (nonatomic,readonly) float price; 
@property (nonatomic,copy,readonly) NSString * regularPriceDisplayPrice; 
@property (nonatomic,readonly) unsigned long long downloadSize; 
@property (nonatomic,copy,readonly) NSURL * previewURL; 
@property (nonatomic,readonly) double previewDuration; 
+(id)_priceForOfferDictionary:(id)arg1 ;
+(long long)buyTypeForOfferDictionary:(id)arg1 regularPriceOffer:(id)arg2 ;
+(id)offerVariantResponseKeyForOfferVariant:(long long)arg1 ;
+(void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variantString:(id)arg4 ;
+(void)getBuyOfferDictionary:(id*)arg1 regularPriceOfferDictionary:(id*)arg2 inOfferDictionaries:(id)arg3 variant:(long long)arg4 ;
+(long long)bestOfferVariantInOfferDictionaries:(id)arg1 withPreferredVariant:(long long)arg2 ;
-(long long)entityType;
-(float)price;
-(long long)passType;
-(long long)buyType;
-(BOOL)_isBuy;
-(NSURL *)previewURL;
-(unsigned long long)downloadSize;
-(NSString *)displayPrice;
-(id)buyURL;
-(NSString *)actionDisplayTitle;
-(BOOL)requiresConfirmation;
-(id)initWithStoreOfferDictionary:(id)arg1 regularPriceOfferDictionary:(id)arg2 passType:(long long)arg3 entityType:(long long)arg4 persistentID:(unsigned long long)arg5 title:(id)arg6 ;
-(NSString *)regularPriceDisplayPrice;
-(id)storeOfferDictionary;
-(unsigned long long)entityPersistentID;
-(double)previewDuration;
-(NSString *)displayTitle;
-(NSString *)buyParameters;
-(NSString *)entityTitle;
@end

