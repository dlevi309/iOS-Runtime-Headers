/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INPlayMediaIntentExport.h>

@class NSArray, INMediaItem, NSNumber, NSDate, NSString, INMediaSearch;

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>

@property (nonatomic,copy,readonly) NSArray * mediaItems; 
@property (nonatomic,copy,readonly) INMediaItem * mediaContainer; 
@property (nonatomic,copy,readonly) NSNumber * playShuffled; 
@property (nonatomic,readonly) long long playbackRepeatMode; 
@property (nonatomic,copy,readonly) NSNumber * resumePlayback; 
@property (nonatomic,readonly) long long playbackQueueLocation; 
@property (nonatomic,copy,readonly) NSNumber * playbackSpeed; 
@property (nonatomic,copy,readonly) INMediaSearch * mediaSearch; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDate * expirationDate; 
@property (nonatomic,copy) NSArray * buckets; 
@property (nonatomic,copy) NSString * recoID; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,copy) NSArray * audioSearchResults; 
@property (nonatomic,copy) NSArray * alternativeResults; 
@property (assign,nonatomic) long long parsecCategory; 
@property (nonatomic,copy) NSString * proxiedBundleIdentifier; 
+(id)_ignoredParameters;
-(id)domain;
-(id)_metadata;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)verb;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSArray *)buckets;
-(void)_setMetadata:(id)arg1 ;
-(NSArray *)mediaItems;
-(void)setMediaItems:(NSArray *)arg1 ;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(void)setVerb:(id)arg1 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 ;
-(long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2 ;
-(id)_spotlightContentType;
-(id)_titleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(NSArray *)alternativeResults;
-(void)setAlternativeResults:(NSArray *)arg1 ;
-(NSArray *)audioSearchResults;
-(void)setAudioSearchResults:(NSArray *)arg1 ;
-(void)setBuckets:(NSArray *)arg1 ;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(INMediaItem *)mediaContainer;
-(void)setMediaContainer:(INMediaItem *)arg1 ;
-(INMediaSearch *)mediaSearch;
-(void)setMediaSearch:(INMediaSearch *)arg1 ;
-(long long)parsecCategory;
-(void)setParsecCategory:(long long)arg1 ;
-(NSNumber *)playShuffled;
-(void)setPlayShuffled:(NSNumber *)arg1 ;
-(long long)playbackQueueLocation;
-(void)setPlaybackQueueLocation:(long long)arg1 ;
-(long long)playbackRepeatMode;
-(void)setPlaybackRepeatMode:(long long)arg1 ;
-(NSNumber *)playbackSpeed;
-(void)setPlaybackSpeed:(NSNumber *)arg1 ;
-(NSString *)proxiedBundleIdentifier;
-(void)setProxiedBundleIdentifier:(NSString *)arg1 ;
-(NSString *)recoID;
-(void)setRecoID:(NSString *)arg1 ;
-(NSNumber *)resumePlayback;
-(void)setResumePlayback:(NSNumber *)arg1 ;
-(id)_keyCodableAttributes;
-(id)initWithMediaItems:(id)arg1 mediaContainer:(id)arg2 playShuffled:(id)arg3 playbackRepeatMode:(long long)arg4 resumePlayback:(id)arg5 playbackQueueLocation:(long long)arg6 playbackSpeed:(id)arg7 mediaSearch:(id)arg8 ;
@end

