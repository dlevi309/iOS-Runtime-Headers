/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSDictionary, NSString, NSURL, VUIContentMetadata, NSNumber, NSDate, VUIExtrasInfo, VUIRouterDataSource;

@interface VUIVideosPlayable : NSObject {

	NSDictionary* _videosPlayableDict;
	NSString* _bookmarkID;
	NSURL* _previewArtwork;
	VUIContentMetadata* _metadata;

}

@property (nonatomic,readonly) NSString * canonicalID; 
@property (nonatomic,readonly) NSString * referenceID; 
@property (nonatomic,readonly) NSString * showCanonicalID; 
@property (nonatomic,readonly) NSString * seasonCanonicalID; 
@property (nonatomic,readonly) NSString * adamID; 
@property (nonatomic,readonly) BOOL isRental; 
@property (nonatomic,readonly) NSNumber * rentalID; 
@property (nonatomic,readonly) NSString * bookmarkID;                                     //@synthesize bookmarkID=_bookmarkID - In the implementation block
@property (nonatomic,readonly) BOOL isSubscription; 
@property (nonatomic,readonly) NSString * externalID; 
@property (nonatomic,readonly) NSString * channelID; 
@property (nonatomic,readonly) NSString * channelName; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) BOOL isMovie; 
@property (nonatomic,readonly) NSURL * playbackURL; 
@property (nonatomic,readonly) NSURL * hlsURL; 
@property (nonatomic,readonly) NSURL * downloadURL; 
@property (nonatomic,readonly) NSURL * fpsCertificateURL; 
@property (nonatomic,readonly) NSURL * fpsKeyServerURL; 
@property (nonatomic,readonly) NSDictionary * fpsAdditionalServerParams; 
@property (nonatomic,readonly) NSURL * fpsNonceURL; 
@property (nonatomic,readonly) NSURL * scrubVideoURL; 
@property (nonatomic,readonly) NSString * buyParams; 
@property (nonatomic,readonly) NSURL * previewArtwork;                                    //@synthesize previewArtwork=_previewArtwork - In the implementation block
@property (nonatomic,readonly) NSNumber * resumeTime; 
@property (nonatomic,readonly) NSDate * resumeTimeTimeStamp; 
@property (nonatomic,readonly) VUIContentMetadata * metadata;                             //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) NSDictionary * vpafMetrics; 
@property (nonatomic,readonly) NSDictionary * mediaMetrics; 
@property (nonatomic,readonly) NSURL * tokenServerURL; 
@property (nonatomic,readonly) NSURL * stopURL; 
@property (nonatomic,readonly) NSDictionary * tokenServerParams; 
@property (nonatomic,readonly) NSString * liveStreamServiceID; 
@property (nonatomic,readonly) NSString * externalServiceID; 
@property (nonatomic,readonly) BOOL disableScrubbing; 
@property (nonatomic,readonly) NSString * rtcServiceIdentifier; 
@property (nonatomic,readonly) VUIExtrasInfo * extrasInfo; 
@property (nonatomic,readonly) NSURL * tvAppDeeplinkURL; 
@property (nonatomic,readonly) NSNumber * requiredAgeForPlayback; 
@property (nonatomic,readonly) NSNumber * frequencyOfAgeConfirmation; 
@property (nonatomic,readonly) BOOL isiTunesPurchaseOrRental; 
@property (getter=isSharedPurchase,nonatomic,readonly) BOOL sharedPurchase; 
@property (nonatomic,readonly) VUIRouterDataSource * upsellRouterDataSource; 
+(id)videosPlayablesFromDictionaries:(id)arg1 andMetadataDictionary:(id)arg2 ;
-(VUIContentMetadata *)metadata;
-(NSString *)mediaType;
-(NSString *)buyParams;
-(NSURL *)downloadURL;
-(BOOL)isMovie;
-(NSString *)externalID;
-(NSString *)adamID;
-(BOOL)isRental;
-(NSURL *)hlsURL;
-(NSString *)channelName;
-(NSNumber *)rentalID;
-(NSString *)bookmarkID;
-(NSNumber *)resumeTime;
-(NSString *)channelID;
-(NSString *)canonicalID;
-(NSURL *)tvAppDeeplinkURL;
-(NSURL *)playbackURL;
-(NSString *)showCanonicalID;
-(NSString *)seasonCanonicalID;
-(NSURL *)fpsCertificateURL;
-(NSURL *)fpsKeyServerURL;
-(NSURL *)fpsNonceURL;
-(NSString *)referenceID;
-(NSNumber *)requiredAgeForPlayback;
-(NSNumber *)frequencyOfAgeConfirmation;
-(NSString *)rtcServiceIdentifier;
-(NSDictionary *)fpsAdditionalServerParams;
-(NSDictionary *)vpafMetrics;
-(NSDictionary *)mediaMetrics;
-(NSString *)liveStreamServiceID;
-(NSURL *)tokenServerURL;
-(BOOL)isiTunesPurchaseOrRental;
-(BOOL)isSharedPurchase;
-(NSDictionary *)tokenServerParams;
-(NSURL *)stopURL;
-(BOOL)disableScrubbing;
-(NSString *)externalServiceID;
-(NSDate *)resumeTimeTimeStamp;
-(NSURL *)scrubVideoURL;
-(VUIRouterDataSource *)upsellRouterDataSource;
-(VUIExtrasInfo *)extrasInfo;
-(id)initWithDictionary:(id)arg1 andMetadataDictionary:(id)arg2 ;
-(BOOL)isSubscription;
-(NSURL *)previewArtwork;
@end

