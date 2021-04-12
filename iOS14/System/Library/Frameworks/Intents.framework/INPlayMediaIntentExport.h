/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INMediaItem, NSNumber, NSDate, NSString, INMediaSearch, INPrivatePlayMediaIntentData;


@protocol INPlayMediaIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSArray * mediaItems; 
@property (nonatomic,copy) INMediaItem * mediaContainer; 
@property (nonatomic,copy) NSNumber * playShuffled; 
@property (assign,nonatomic) long long playbackRepeatMode; 
@property (nonatomic,copy) NSNumber * resumePlayback; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSArray * buckets; 
@property (nonatomic,copy) NSString * recoID; 
@property (assign,nonatomic) long long playbackQueueLocation; 
@property (nonatomic,copy) NSNumber * playbackSpeed; 
@property (nonatomic,copy) INMediaSearch * mediaSearch; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSArray * audioSearchResults; 
@property (nonatomic,copy) NSArray * alternativeResults; 
@property (assign,nonatomic) long long parsecCategory; 
@property (nonatomic,copy) NSString * proxiedBundleIdentifier; 
@property (nonatomic,copy) INPrivatePlayMediaIntentData * privatePlayMediaIntentData; 
@required
-(void)setExpirationDate:(id)arg1;
-(id)init;
-(NSString *)recoID;
-(NSNumber *)playbackSpeed;
-(void)setPlaybackSpeed:(id)arg1;
-(NSArray *)buckets;
-(NSDate *)expirationDate;
-(void)setBuckets:(id)arg1;
-(NSNumber *)playShuffled;
-(NSArray *)mediaItems;
-(INMediaSearch *)mediaSearch;
-(NSArray *)alternativeResults;
-(void)setAlternativeResults:(id)arg1;
-(NSArray *)audioSearchResults;
-(void)setAudioSearchResults:(id)arg1;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(id)arg1;
-(INMediaItem *)mediaContainer;
-(void)setMediaContainer:(id)arg1;
-(void)setMediaItems:(id)arg1;
-(void)setMediaSearch:(id)arg1;
-(long long)parsecCategory;
-(void)setParsecCategory:(long long)arg1;
-(void)setPlayShuffled:(id)arg1;
-(long long)playbackQueueLocation;
-(void)setPlaybackQueueLocation:(long long)arg1;
-(long long)playbackRepeatMode;
-(void)setPlaybackRepeatMode:(long long)arg1;
-(INPrivatePlayMediaIntentData *)privatePlayMediaIntentData;
-(void)setPrivatePlayMediaIntentData:(id)arg1;
-(NSString *)proxiedBundleIdentifier;
-(void)setProxiedBundleIdentifier:(id)arg1;
-(void)setRecoID:(id)arg1;
-(NSNumber *)resumePlayback;
-(void)setResumePlayback:(id)arg1;

@end

