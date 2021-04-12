/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSString *)description;
-(id)bundleIdentifier;
-(NSDate *)expirationDate;
-(void)_setExpirationDate:(id)arg1 ;
-(BOOL)isRestricted;
-(id)bundleVersion;
-(BOOL)isGameCenterEnabled;
-(id)shortDescription;
-(id)valueForProperty:(id)arg1 ;
-(NSString *)itemTitle;
-(id)longDescription;
-(id)networkName;
-(id)mediaKind;
-(id)_offers;
-(NSString *)artistName;
-(id)releaseDate;
-(id)collectionName;
-(id)composerName;
-(BOOL)isCompilation;
-(NSString *)itemKind;
-(id)seasonNumber;
-(id)buyParameters;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(id)collectionIdentifier;
-(id)seriesName;
-(id)genreName;
-(long long)numberOfUserRatings;
-(id)contentRating;
-(id)podcastFeedURL;
-(SSItemOffer *)defaultItemOffer;
-(NSNumber *)ITunesStoreIdentifier;
-(id)preOrderIdentifier;
-(id)artistIdentifier;
-(id)collectionArtistName;
-(id)collectionIndexInCollectionGroup;
-(id)episodeIdentifier;
-(id)episodeSortIdentifier;
-(id)genreIdentifier;
-(id)indexInCollection;
-(id)numberOfCollectionsInCollectionGroup;
-(id)numberOfItemsInCollection;
-(id)podcastEpisodeGUID;
-(id)videoDetails;
-(id)softwareType;
-(BOOL)isHighDefinition;
-(id)playableMedia;
-(SSItemImageCollection *)imageCollection;
-(id)releaseDateString;
-(id)initWithItemDictionary:(id)arg1 ;
-(id)rawItemDictionary;
-(id)itemOfferForIdentifier:(id)arg1 ;
-(void)urlConnectionRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)tellAFriendBody;
-(id)_tellAFriendDictionary;
-(id)priceDisplay;
-(void)_finishTellAFriendLoadWithError:(id)arg1 ;
-(NSArray *)allItemOffers;
-(float)averageUserRating;
-(void)loadTellAFriendMessageWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)numberOfPrintedPages;
-(id)relatedItemsForRelationType:(id)arg1 ;
-(id)tellAFriendBodyMIMEType;
-(id)tellAFriendBodyURL;
-(id)tellAFriendSubject;
-(NSArray *)thumbnailImages;
-(id)tweetInitialText;
-(id)tweetURL;
-(NSURL *)viewItemURL;
-(id)sendGiftURL;
-(id)viewReviewsURL;
@end

