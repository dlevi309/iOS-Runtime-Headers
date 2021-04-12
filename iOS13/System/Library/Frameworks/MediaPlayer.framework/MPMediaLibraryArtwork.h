/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)originalFileURL;
-(ML3Artwork *)artwork;
-(void)setArtwork:(ML3Artwork *)arg1 ;
-(os_unfair_lock_s)stateLock;
-(MPMediaLibraryArtworkRequest *)artworkRequest;
-(void)setArtworkRequest:(MPMediaLibraryArtworkRequest *)arg1 ;
-(id)imageFileURLForSize:(CGSize)arg1 ;
-(id)imageFileURLForEffect:(id)arg1 ;
-(NSArray *)validSizes;
-(NSDictionary *)effectsMetadata;
-(void)setEffectsMetadata:(NSDictionary *)arg1 ;
@end

