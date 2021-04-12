/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSNumber, NSString, NSDate;

@interface ICStoreFinanceItemMetadata : NSObject <NSCopying> {

	NSDictionary* _metadataDictionary;
	NSNumber* _playlistID;

}

@property (nonatomic,copy,readonly) NSDictionary * metadataDictionary;              //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * itemAdamID; 
@property (nonatomic,copy,readonly) NSNumber * itemCloudID; 
@property (nonatomic,copy,readonly) NSString * itemName; 
@property (nonatomic,copy,readonly) NSString * itemSortName; 
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,copy,readonly) NSString * artistSortName; 
@property (nonatomic,copy,readonly) NSNumber * artistID; 
@property (nonatomic,copy,readonly) NSString * playlistName; 
@property (nonatomic,copy,readonly) NSString * albumSortName; 
@property (nonatomic,copy,readonly) NSString * playlistArtistName; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * composerSortName; 
@property (nonatomic,copy,readonly) NSString * genre; 
@property (nonatomic,copy,readonly) NSNumber * genreID; 
@property (nonatomic,copy,readonly) NSNumber * playlistID;                          //@synthesize playlistID=_playlistID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * discCount; 
@property (nonatomic,copy,readonly) NSNumber * discNumber; 
@property (nonatomic,copy,readonly) NSNumber * trackCount; 
@property (nonatomic,copy,readonly) NSNumber * trackNumber; 
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,copy,readonly) NSNumber * isExplicit; 
@property (nonatomic,copy,readonly) NSNumber * year; 
@property (nonatomic,copy,readonly) NSNumber * bitrate; 
@property (nonatomic,copy,readonly) NSString * comments; 
@property (nonatomic,copy,readonly) NSDate * dateAdded; 
@property (nonatomic,copy,readonly) NSNumber * drmVersionNumber; 
@property (nonatomic,copy,readonly) NSString * fileExtension; 
@property (nonatomic,copy,readonly) NSNumber * isGapless; 
@property (nonatomic,copy,readonly) NSNumber * isMasteredForITunes; 
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,copy,readonly) NSNumber * sampleRate; 
@property (nonatomic,copy,readonly) NSNumber * versionRestrictions; 
@property (nonatomic,copy,readonly) NSString * xid; 
@property (nonatomic,copy,readonly) NSNumber * isCompilation; 
@property (nonatomic,copy,readonly) NSString * copyright; 
@property (nonatomic,copy,readonly) NSNumber * rank; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSNumber * storefrontID; 
@property (nonatomic,copy,readonly) NSNumber * vendorID; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)year;
-(NSNumber *)duration;
-(NSString *)kind;
-(NSString *)itemName;
-(NSString *)genre;
-(NSNumber *)genreID;
-(NSNumber *)rank;
-(NSNumber *)sampleRate;
-(NSString *)fileExtension;
-(NSString *)comments;
-(NSNumber *)vendorID;
-(NSNumber *)trackCount;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSNumber *)bitrate;
-(NSString *)artistName;
-(NSString *)playlistName;
-(NSDate *)releaseDate;
-(NSNumber *)discNumber;
-(NSNumber *)discCount;
-(NSString *)composerName;
-(NSNumber *)isCompilation;
-(NSNumber *)isMasteredForITunes;
-(NSNumber *)trackNumber;
-(NSDictionary *)metadataDictionary;
-(NSDate *)dateAdded;
-(NSString *)copyright;
-(NSNumber *)itemCloudID;
-(NSNumber *)isExplicit;
-(NSNumber *)artistID;
-(NSString *)xid;
-(NSNumber *)itemAdamID;
-(NSString *)itemSortName;
-(NSString *)artistSortName;
-(NSString *)albumSortName;
-(NSString *)playlistArtistName;
-(NSString *)composerSortName;
-(id)albumID;
-(NSNumber *)drmVersionNumber;
-(NSNumber *)isGapless;
-(NSNumber *)versionRestrictions;
-(NSNumber *)storefrontID;
-(NSNumber *)playlistID;
@end

