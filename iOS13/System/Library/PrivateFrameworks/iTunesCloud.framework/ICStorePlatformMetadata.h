/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)title;
-(NSDate *)expirationDate;
-(double)duration;
-(NSString *)kind;
-(long long)trackCount;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSArray *)offers;
-(NSString *)artistName;
-(NSArray *)genreNames;
-(NSDate *)releaseDate;
-(long long)discNumber;
-(BOOL)hasTimeSyncedLyrics;
-(NSString *)cloudUniversalLibraryID;
-(BOOL)shouldShowComposer;
-(NSString *)copyrightText;
-(NSString *)collectionName;
-(NSString *)composerName;
-(BOOL)hasLyrics;
-(long long)explicitRating;
-(long long)movementCount;
-(NSString *)movementName;
-(long long)movementNumber;
-(NSArray *)formerStoreAdamIDs;
-(long long)trackNumber;
-(NSString *)workName;
-(id)_storePlatformReleaseDateFormatter;
-(long long)artistStoreAdamID;
-(long long)storeAdamID;
-(NSDictionary *)metadataDictionary;
-(long long)collectionStoreAdamID;
-(id)offerWithType:(id)arg1 ;
-(NSString *)playlistGlobalID;
-(NSString *)radioStationStringID;
-(BOOL)isExplicit;
-(id)initWithMetadataDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(NSArray *)artworkInfos;
@end

