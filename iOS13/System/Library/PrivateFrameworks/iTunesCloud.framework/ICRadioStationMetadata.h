/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(long long)type;
-(long long)subtype;
-(BOOL)allowsSharing;
-(long long)stationID;
-(NSString *)descriptionText;
-(NSString *)stationHash;
-(NSString *)stationStringID;
-(NSString *)attributionLabel;
-(id)initWithResponseDictionary:(id)arg1 ;
-(BOOL)isSubscriptionRequired;
-(ICStoreArtworkInfo *)artworkInfo;
-(NSString *)coreSeedName;
-(BOOL)allowsItemLiking;
-(ICRadioStationProviderResource *)providerResource;
@end

