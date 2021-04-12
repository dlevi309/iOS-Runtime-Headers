/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSArray, MPMediaLibraryArtworkRequest, ML3Artwork, NSURL, NSDictionary;

@interface MPMediaLibraryArtwork : NSObject {

	os_unfair_lock_s _stateLock;
	NSArray* _validSizes;
	MPMediaLibraryArtworkRequest* _artworkRequest;
	ML3Artwork* _artwork;

}

@property (assign,nonatomic,__weak) MPMediaLibraryArtworkRequest * artworkRequest;              //@synthesize artworkRequest=_artworkRequest - In the implementation block
@property (nonatomic,retain) ML3Artwork * artwork;                                              //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s stateLock;                                      //@synthesize stateLock=_stateLock - In the implementation block
@property (nonatomic,readonly) NSArray * validSizes;                                            //@synthesize validSizes=_validSizes - In the implementation block
@property (nonatomic,copy,readonly) NSURL * originalFileURL; 
@property (nonatomic,copy) NSDictionary * effectsMetadata; 
+(BOOL)artworkExistsForRequest:(id)arg1 ;
+(BOOL)needsToFetchArtworkForRequest:(id)arg1 ;
+(id)availableArtworkWithRequest:(id)arg1 ;
+(void)fetchArtworkForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)cancelFetchingArtworkForRequest:(id)arg1 ;
+(void)fetchArtworkInfoForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)setArtwork:(ML3Artwork *)arg1 ;
-(ML3Artwork *)artwork;
-(NSArray *)validSizes;
-(os_unfair_lock_s)stateLock;
-(unsigned long long)hash;
-(MPMediaLibraryArtworkRequest *)artworkRequest;
-(void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg1 ;
-(NSURL *)originalFileURL;
-(id)imageFileURLForSize:(CGSize)arg1 ;
-(id)imageFileURLForEffect:(id)arg1 ;
-(NSDictionary *)effectsMetadata;
-(void)setEffectsMetadata:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

