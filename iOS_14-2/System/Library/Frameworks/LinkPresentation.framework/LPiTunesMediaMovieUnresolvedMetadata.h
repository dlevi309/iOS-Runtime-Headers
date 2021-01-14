/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <libobjc.A.dylib/LPiTunesMediaUnresolvedMetadata.h>

@class NSString, LPiTunesMediaAsset, NSArray;

@interface LPiTunesMediaMovieUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata> {

	NSString* _storeFrontIdentifier;
	NSString* _storeIdentifier;
	NSString* _name;
	NSString* _genre;
	LPiTunesMediaAsset* _artwork;
	NSArray* _offers;

}

@property (nonatomic,copy) NSString * storeFrontIdentifier;              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * storeIdentifier;                   //@synthesize storeIdentifier=_storeIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * genre;                             //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) LPiTunesMediaAsset * artwork;               //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) NSArray * offers;                           //@synthesize offers=_offers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)genre;
-(NSString *)storeFrontIdentifier;
-(void)setArtwork:(LPiTunesMediaAsset *)arg1 ;
-(void)setGenre:(NSString *)arg1 ;
-(id)assetsToFetch;
-(NSString *)name;
-(void)setOffers:(NSArray *)arg1 ;
-(LPiTunesMediaAsset *)artwork;
-(void)setStoreFrontIdentifier:(NSString *)arg1 ;
-(void)setStoreIdentifier:(NSString *)arg1 ;
-(id)resolve;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)offers;
-(NSString *)storeIdentifier;
@end

