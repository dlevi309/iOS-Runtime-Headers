/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/


@class NSDate, NSDictionary, NSString, NSArray;

@interface ICStorePlatformMetadata : NSObject {

	NSDate* _expirationDate;
	NSDictionary* _metadataDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * metadataDictionary;               //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,readonly) long long artistStoreAdamID; 
@property (nonatomic,copy,readonly) NSString * cloudUniversalLibraryID; 
@property (nonatomic,copy,readonly) NSString * collectionName; 
@property (nonatomic,readonly) long long collectionStoreAdamID; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,readonly) long long discNumber; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) long long explicitRating; 
@property (nonatomic,readonly) BOOL isExplicit; 
@property (nonatomic,copy,readonly) NSArray * genreNames; 
@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,readonly) BOOL hasTimeSyncedLyrics; 
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,readonly) long long movementCount; 
@property (nonatomic,copy,readonly) NSString * movementName; 
@property (nonatomic,readonly) long long movementNumber; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSString * playlistGlobalID; 
@property (nonatomic,copy,readonly) NSString * radioStationStringID; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) BOOL shouldShowComposer; 
@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) NSArray * formerStoreAdamIDs; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) long long trackNumber; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,copy,readonly) NSString * workName; 
@property (nonatomic,copy,readonly) NSArray * artworkInfos; 
+(id)storeServerCalendar;
-(BOOL)hasLyrics;
-(NSDate *)releaseDate;
-(long long)trackNumber;
-(long long)trackCount;
-(NSArray *)genreNames;
-(NSString *)composerName;
-(NSString *)movementName;
-(id)_storePlatformReleaseDateFormatter;
-(NSString *)artistName;
-(NSString *)kind;
-(NSString *)name;
-(id)offerWithType:(id)arg1 ;
-(long long)storeAdamID;
-(long long)discNumber;
-(NSArray *)artworkInfos;
-(NSDate *)expirationDate;
-(long long)artistStoreAdamID;
-(long long)movementCount;
-(long long)explicitRating;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSArray *)formerStoreAdamIDs;
-(BOOL)hasTimeSyncedLyrics;
-(BOOL)isExplicit;
-(NSDictionary *)metadataDictionary;
-(long long)collectionStoreAdamID;
-(NSString *)playlistGlobalID;
-(NSString *)radioStationStringID;
-(BOOL)shouldShowComposer;
-(double)duration;
-(NSString *)collectionName;
-(NSArray *)offers;
-(NSString *)cloudUniversalLibraryID;
-(NSString *)copyrightText;
-(NSString *)title;
-(long long)movementNumber;
-(NSString *)workName;
-(id)initWithMetadataDictionary:(id)arg1 expirationDate:(id)arg2 ;
@end

