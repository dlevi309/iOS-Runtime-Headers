/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, INMediaItem, NSNumber, NSDate, NSString, INMediaSearch;


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
@required
-(id)init;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(id)arg1;
-(NSArray *)buckets;
-(NSArray *)mediaItems;
-(void)setMediaItems:(id)arg1;
-(NSArray *)alternativeResults;
-(void)setAlternativeResults:(id)arg1;
-(NSArray *)audioSearchResults;
-(void)setAudioSearchResults:(id)arg1;
-(void)setBuckets:(id)arg1;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(id)arg1;
-(INMediaItem *)mediaContainer;
-(void)setMediaContainer:(id)arg1;
-(INMediaSearch *)mediaSearch;
-(void)setMediaSearch:(id)arg1;
-(long long)parsecCategory;
-(void)setParsecCategory:(long long)arg1;
-(NSNumber *)playShuffled;
-(void)setPlayShuffled:(id)arg1;
-(long long)playbackQueueLocation;
-(void)setPlaybackQueueLocation:(long long)arg1;
-(long long)playbackRepeatMode;
-(void)setPlaybackRepeatMode:(long long)arg1;
-(NSNumber *)playbackSpeed;
-(void)setPlaybackSpeed:(id)arg1;
-(NSString *)proxiedBundleIdentifier;
-(void)setProxiedBundleIdentifier:(id)arg1;
-(NSString *)recoID;
-(void)setRecoID:(id)arg1;
-(NSNumber *)resumePlayback;
-(void)setResumePlayback:(id)arg1;

@end

