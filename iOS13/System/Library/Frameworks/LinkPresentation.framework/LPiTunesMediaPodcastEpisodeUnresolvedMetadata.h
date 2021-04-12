/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/LPiTunesMediaUnresolvedMetadata.h>

@class NSString, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaPodcastEpisodeUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _episodeName;
	NSString* _podcastName;
	NSString* _artist;
	NSString* _releaseDate;
	LPiTunesMediaAsset* _artwork;
	NSArray* _offers;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                   //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * episodeName;                       //@synthesize episodeName=_episodeName - In the implementation block
@property (nonatomic,copy) NSString * podcastName;                       //@synthesize podcastName=_podcastName - In the implementation block
@property (nonatomic,copy) NSString * artist;                            //@synthesize artist=_artist - In the implementation block
@property (nonatomic,copy) NSString * releaseDate;                       //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * artwork;               //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSArray * offers;                           //@synthesize offers=_offers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)resolve;
-(NSString *)artist;
-(NSString *)storeIdentifier;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(LPiTunesMediaAsset *)artwork;
-(void)setArtwork:(LPiTunesMediaAsset *)arg1 ;
-(NSArray *)offers;
-(void)setOffers:(NSArray *)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(NSString *)podcastName;
-(void)setPodcastName:(NSString *)arg1 ;
-(NSString *)releaseDate;
-(void)setReleaseDate:(NSString *)arg1 ;
-(NSString *)storeFrontIdentifier;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(NSString *)episodeName;
-(void)setEpisodeName:(NSString *)arg1 ;
-(id)assetsToFetch;
@end

