/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/


@class NSString, WLKChannelDetails, WLKBasicContentMetadata, NSArray, NSNumber, WLKLocale, NSDate, WLKPlayEvent, NSURL, NSDictionary, WLKComingSoonInfo, WLKOfferListing, WLKStoreOffer;

@interface WLKPlayable : NSObject {

	BOOL _entitled;
	BOOL _entitledAnywhere;
	BOOL _appInstalled;
	BOOL _itunes;
	BOOL _subtitled;
	NSString* _playableID;
	NSString* _canonicalID;
	NSString* _channelID;
	WLKChannelDetails* _channelDetails;
	NSString* _contentID;
	long long _contentSourceType;
	long long _airingType;
	WLKBasicContentMetadata* _content;
	NSArray* _adLocales;
	NSArray* _audioTrackLocales;
	NSArray* _audioTrackFormats;
	NSArray* _closedCaptionLocales;
	NSArray* _SDHLocales;
	NSNumber* _duration;
	WLKLocale* _primaryLocale;
	NSString* _externalID;
	NSString* _externalServiceID;
	NSArray* _subtitledLocales;
	NSString* _videoQuality;
	NSString* _videoColorRange;
	NSDate* _endAirTime;
	NSDate* _startAirTime;
	WLKPlayEvent* _playEvent;
	NSURL* _tvAppDeeplinkURL;
	NSDictionary* _punchoutUrls;
	WLKComingSoonInfo* _comingSoonInfo;
	NSArray* _movieClips;
	NSArray* _subscriptionOffers;
	WLKOfferListing* _offerListing;

}

@property (nonatomic,copy,readonly) NSString * playableID;                                   //@synthesize playableID=_playableID - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalID;                                  //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                                    //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) WLKChannelDetails * channelDetails;                      //@synthesize channelDetails=_channelDetails - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentID;                                    //@synthesize contentID=_contentID - In the implementation block
@property (nonatomic,readonly) long long contentSourceType;                                  //@synthesize contentSourceType=_contentSourceType - In the implementation block
@property (getter=isEntitled,nonatomic,readonly) BOOL entitled;                              //@synthesize entitled=_entitled - In the implementation block
@property (getter=isEntitledAnywhere,nonatomic,readonly) BOOL entitledAnywhere;              //@synthesize entitledAnywhere=_entitledAnywhere - In the implementation block
@property (getter=isAppInstalled,nonatomic,readonly) BOOL appInstalled;                      //@synthesize appInstalled=_appInstalled - In the implementation block
@property (getter=isiTunes,nonatomic,readonly) BOOL itunes;                                  //@synthesize itunes=_itunes - In the implementation block
@property (nonatomic,readonly) long long airingType;                                         //@synthesize airingType=_airingType - In the implementation block
@property (nonatomic,readonly) WLKBasicContentMetadata * content;                            //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSArray * adLocales;                                     //@synthesize adLocales=_adLocales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioTrackLocales;                             //@synthesize audioTrackLocales=_audioTrackLocales - In the implementation block
@property (nonatomic,copy,readonly) NSArray * audioTrackFormats;                             //@synthesize audioTrackFormats=_audioTrackFormats - In the implementation block
@property (nonatomic,copy,readonly) NSArray * closedCaptionLocales;                          //@synthesize closedCaptionLocales=_closedCaptionLocales - In the implementation block
@property (setter=DHLocales,nonatomic,copy,readonly) NSArray * SDHLocales;                   //@synthesize SDHLocales=_SDHLocales - In the implementation block
@property (nonatomic,readonly) NSNumber * duration;                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) WLKLocale * primaryLocale;                               //@synthesize primaryLocale=_primaryLocale - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalID;                                   //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalServiceID;                            //@synthesize externalServiceID=_externalServiceID - In the implementation block
@property (getter=isSubtitled,nonatomic,readonly) BOOL subtitled;                            //@synthesize subtitled=_subtitled - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subtitledLocales;                              //@synthesize subtitledLocales=_subtitledLocales - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoQuality;                                 //@synthesize videoQuality=_videoQuality - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoColorRange;                              //@synthesize videoColorRange=_videoColorRange - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endAirTime;                                     //@synthesize endAirTime=_endAirTime - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startAirTime;                                   //@synthesize startAirTime=_startAirTime - In the implementation block
@property (nonatomic,readonly) WLKPlayEvent * playEvent;                                     //@synthesize playEvent=_playEvent - In the implementation block
@property (nonatomic,copy,readonly) NSURL * tvAppDeeplinkURL;                                //@synthesize tvAppDeeplinkURL=_tvAppDeeplinkURL - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * punchoutUrls;                             //@synthesize punchoutUrls=_punchoutUrls - In the implementation block
@property (nonatomic,copy,readonly) WLKComingSoonInfo * comingSoonInfo;                      //@synthesize comingSoonInfo=_comingSoonInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * movieClips;                                    //@synthesize movieClips=_movieClips - In the implementation block
@property (nonatomic,copy,readonly) NSArray * storeOffers; 
@property (nonatomic,copy,readonly) NSArray * subscriptionOffers;                            //@synthesize subscriptionOffers=_subscriptionOffers - In the implementation block
@property (nonatomic,copy,readonly) WLKOfferListing * offerListing;                          //@synthesize offerListing=_offerListing - In the implementation block
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreRentalOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreBuyOffer; 
@property (nonatomic,copy,readonly) WLKStoreOffer * bestStoreSubscriptionOffer; 
+(id)playablesWithDictionaries:(id)arg1 context:(id)arg2 ;
-(WLKBasicContentMetadata *)content;
-(id)init;
-(BOOL)isEntitled;
-(NSString *)externalID;
-(NSString *)canonicalID;
-(BOOL)isiTunes;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)contentID;
-(NSDictionary *)punchoutUrls;
-(NSString *)channelID;
-(id)description;
-(NSArray *)movieClips;
-(id)initWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)tvAppDeeplinkURL;
-(NSArray *)subscriptionOffers;
-(WLKStoreOffer *)bestStoreSubscriptionOffer;
-(WLKStoreOffer *)bestStoreRentalOffer;
-(unsigned long long)hash;
-(NSString *)videoQuality;
-(WLKChannelDetails *)channelDetails;
-(WLKPlayEvent *)playEvent;
-(BOOL)isAppInstalled;
-(NSNumber *)duration;
-(WLKStoreOffer *)bestStoreBuyOffer;
-(NSArray *)storeOffers;
-(WLKLocale *)primaryLocale;
-(BOOL)isEqual:(id)arg1 ;
-(WLKOfferListing *)offerListing;
-(NSString *)externalServiceID;
-(id)_localesArrayForDictionary:(id)arg1 andKey:(id)arg2 ;
-(long long)contentSourceType;
-(NSString *)playableID;
-(id)playPunchoutURL;
-(id)openPunchoutURL;
-(BOOL)isEntitledAnywhere;
-(long long)airingType;
-(NSArray *)adLocales;
-(NSArray *)audioTrackLocales;
-(NSArray *)audioTrackFormats;
-(NSArray *)closedCaptionLocales;
-(NSArray *)SDHLocales;
-(BOOL)isSubtitled;
-(NSArray *)subtitledLocales;
-(NSString *)videoColorRange;
-(NSDate *)endAirTime;
-(NSDate *)startAirTime;
-(WLKComingSoonInfo *)comingSoonInfo;
@end

