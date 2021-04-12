/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <libobjc.A.dylib/SSURLConnectionRequestDelegate.h>

@class NSDate, NSArray, NSDictionary, NSString, NSMutableArray, SSURLConnectionRequest, NSNumber, SSItemOffer, NSURL, SSItemImageCollection;

@interface SSItem : NSObject <SSURLConnectionRequestDelegate> {

	NSDate* _expirationDate;
	NSArray* _offers;
	NSDictionary* _properties;
	NSString* _tellAFriendBody;
	NSString* _tellAFriendBodyMIMEType;
	NSMutableArray* _tellAFriendHandlers;
	SSURLConnectionRequest* _tellAFriendRequest;
	NSString* _tellAFriendSubject;

}

@property (nonatomic,readonly) NSNumber * ITunesStoreIdentifier; 
@property (nonatomic,readonly) NSArray * allItemOffers; 
@property (nonatomic,readonly) SSItemOffer * defaultItemOffer; 
@property (nonatomic,readonly) NSString * artistName; 
@property (nonatomic,readonly) NSDate * expirationDate;                                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) NSString * itemTitle; 
@property (nonatomic,readonly) NSString * itemKind; 
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted; 
@property (getter=isHighDefinition,nonatomic,readonly) BOOL highDefinition; 
@property (getter=isGameCenterEnabled,nonatomic,readonly) BOOL gameCenterEnabled; 
@property (nonatomic,readonly) NSURL * viewItemURL; 
@property (nonatomic,readonly) float averageUserRating; 
@property (nonatomic,readonly) long long numberOfUserRatings; 
@property (nonatomic,readonly) SSItemImageCollection * imageCollection; 
@property (nonatomic,readonly) NSArray * thumbnailImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)networkName;
-(id)seriesName;
-(BOOL)isRestricted;
-(id)seasonNumber;
-(id)collectionIdentifier;
-(id)releaseDate;
-(NSString *)itemKind;
-(id)composerName;
-(void)_setExpirationDate:(id)arg1 ;
-(id)podcastFeedURL;
-(id)mediaKind;
-(long long)numberOfUserRatings;
-(id)genreIdentifier;
-(SSItemOffer *)defaultItemOffer;
-(NSNumber *)ITunesStoreIdentifier;
-(id)preOrderIdentifier;
-(id)artistIdentifier;
-(id)collectionArtistName;
-(id)collectionIndexInCollectionGroup;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)bundleIdentifier;
-(id)shortDescription;
-(id)indexInCollection;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)podcastEpisodeGUID;
-(id)videoDetails;
-(id)softwareType;
-(BOOL)isHighDefinition;
-(id)playableMedia;
-(SSItemImageCollection *)imageCollection;
-(NSString *)artistName;
-(id)bundleVersion;
-(id)releaseDateString;
-(BOOL)isGameCenterEnabled;
-(id)longDescription;
-(id)buyParameters;
-(NSString *)description;
-(NSString *)itemTitle;
-(id)initWithItemDictionary:(id)arg1 ;
-(id)contentRating;
-(NSDate *)expirationDate;
-(BOOL)isCompilation;
-(id)tweetURL;
-(id)rawItemDictionary;
-(id)itemOfferForIdentifier:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)priceDisplay;
-(void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(id)genreName;
-(id)tellAFriendBody;
-(id)_tellAFriendDictionary;
-(void)_finishTellAFriendLoadWithError:(id)arg1 ;
-(NSArray *)allItemOffers;
-(float)averageUserRating;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)numberOfPrintedPages;
-(id)relatedItemsForRelationType:(id)arg1 ;
-(NSArray *)thumbnailImages;
-(id)tellAFriendBodyMIMEType;
-(id)tellAFriendBodyURL;
-(id)tellAFriendSubject;
-(id)tweetInitialText;
-(NSURL *)viewItemURL;
-(id)sendGiftURL;
-(id)viewReviewsURL;
-(id)collectionName;
-(id)_offers;
-(void)dealloc;
@end

