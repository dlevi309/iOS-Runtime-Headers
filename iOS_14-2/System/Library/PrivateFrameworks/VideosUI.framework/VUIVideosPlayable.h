/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSDictionary, NSURL, VUIContentMetadata, NSString, NSNumber, NSDate, VUIExtrasInfo, VUIRouterDataSource;

@interface VUIVideosPlayable : NSObject {

	NSDictionary* _videosPlayableDict;
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
@property (nonatomic,readonly) NSString * bookmarkID; 
@property (nonatomic,readonly) BOOL isSubscription; 
@property (nonatomic,readonly) NSString * externalID; 
@property (nonatomic,readonly) NSString * channelID; 
@property (nonatomic,readonly) NSString * channelName; 
@property (nonatomic,readonly) NSString * mediaType; 
@property (nonatomic,readonly) NSString * utsEntityType; 
@property (nonatomic,readonly) BOOL isMovie; 
@property (nonatomic,readonly) BOOL isFamilySharingContent; 
@property (nonatomic,readonly) NSURL * playbackURL; 
@property (nonatomic,readonly) NSURL * hlsURL; 
@property (nonatomic,readonly) NSURL * downloadURL; 
@property (nonatomic,readonly) NSURL * fpsCertificateURL; 
@property (nonatomic,readonly) NSURL * fpsKeyServerURL; 
@property (nonatomic,readonly) NSDictionary * fpsAdditionalServerParams; 
@property (nonatomic,readonly) NSURL * fpsNonceURL; 
@property (nonatomic,readonly) NSURL * scrubVideoURL; 
@property (nonatomic,readonly) NSString * buyParams; 
@property (nonatomic,readonly) NSURL * previewArtwork;                                       //@synthesize previewArtwork=_previewArtwork - In the implementation block
@property (nonatomic,readonly) NSNumber * resumeTime; 
@property (nonatomic,readonly) NSDate * resumeTimeTimestamp; 
@property (nonatomic,readonly) NSNumber * mainContentRelativeResumeTime; 
@property (nonatomic,readonly) NSDate * mainContentRelativeResumeTimeTimestamp; 
@property (nonatomic,readonly) VUIContentMetadata * metadata;                                //@synthesize metadata=_metadata - In the implementation block
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
@property (nonatomic,readonly) BOOL isAmbientVideo; 
@property (nonatomic,readonly) NSNumber * repeatLoopCount; 
+(id)videosPlayablesFromDictionaries:(id)arg1 andMetadataDictionary:(id)arg2 ;
-(NSURL *)downloadURL;
-(NSURL *)hlsURL;
-(NSString *)mediaType;
-(BOOL)isRental;
-(NSString *)externalID;
-(NSString *)canonicalID;
-(NSNumber *)rentalID;
-(NSString *)channelID;
-(BOOL)isMovie;
-(NSString *)bookmarkID;
-(NSString *)adamID;
-(NSURL *)stopURL;
-(NSURL *)tvAppDeeplinkURL;
-(NSString *)channelName;
-(VUIContentMetadata *)metadata;
-(NSString *)buyParams;
-(NSString *)seasonCanonicalID;
-(NSString *)showCanonicalID;
-(NSURL *)playbackURL;
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
-(NSString *)utsEntityType;
-(NSURL *)tokenServerURL;
-(BOOL)isiTunesPurchaseOrRental;
-(BOOL)isSharedPurchase;
-(NSDictionary *)tokenServerParams;
-(BOOL)disableScrubbing;
-(NSString *)externalServiceID;
-(BOOL)mostRecentResumeTime:(id*)arg1 mostRecentTimestamp:(id*)arg2 ;
-(NSDate *)resumeTimeTimestamp;
-(NSURL *)scrubVideoURL;
-(BOOL)isFamilySharingContent;
-(VUIRouterDataSource *)upsellRouterDataSource;
-(BOOL)isAmbientVideo;
-(NSNumber *)repeatLoopCount;
-(VUIExtrasInfo *)extrasInfo;
-(NSNumber *)resumeTime;
-(NSNumber *)mainContentRelativeResumeTime;
-(NSDate *)mainContentRelativeResumeTimeTimestamp;
-(id)initWithDictionary:(id)arg1 andMetadataDictionary:(id)arg2 ;
-(BOOL)isSubscription;
-(NSURL *)previewArtwork;
@end

