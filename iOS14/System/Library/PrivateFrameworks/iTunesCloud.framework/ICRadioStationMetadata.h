/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDictionary, ICStoreArtworkInfo, NSString, ICRadioStationProviderResource;

@interface ICRadioStationMetadata : NSObject {

	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy,readonly) ICStoreArtworkInfo * artworkInfo; 
@property (nonatomic,copy,readonly) NSString * coreSeedName; 
@property (nonatomic,copy,readonly) NSString * descriptionText; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * stationHash; 
@property (nonatomic,readonly) long long stationID; 
@property (nonatomic,copy,readonly) NSString * stationStringID; 
@property (nonatomic,copy,readonly) NSString * attributionLabel; 
@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (nonatomic,readonly) BOOL allowsItemLiking; 
@property (nonatomic,readonly) BOOL allowsSharing; 
@property (getter=isSubscriptionRequired,nonatomic,readonly) BOOL subscriptionRequired; 
@property (nonatomic,copy,readonly) ICRadioStationProviderResource * providerResource; 
-(long long)subtype;
-(BOOL)allowsItemLiking;
-(ICRadioStationProviderResource *)providerResource;
-(BOOL)isSubscriptionRequired;
-(NSString *)descriptionText;
-(id)initWithResponseDictionary:(id)arg1 ;
-(NSString *)name;
-(ICStoreArtworkInfo *)artworkInfo;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(BOOL)allowsSharing;
-(NSString *)attributionLabel;
-(long long)type;
-(long long)stationID;
-(NSString *)coreSeedName;
@end

