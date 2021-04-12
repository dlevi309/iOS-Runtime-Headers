/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class MPQueueFeederIdentifierRegistry, NSString, NSData, NSDictionary, MPModelPlayEvent;

@interface MPQueueFeeder : NSObject {

	MPQueueFeederIdentifierRegistry* _identifierRegistry;
	os_unfair_lock_s _identifierRegistryLock;
	NSString* _uniqueIdentifier;
	NSString* _playActivityFeatureName;
	NSData* _playActivityRecommendationData;
	NSString* _siriReferenceIdentifier;
	NSDictionary* _siriWHAMetricsInfo;
	MPModelPlayEvent* _modelPlayEvent;

}

@property (nonatomic,copy) NSString * playActivityFeatureName;                   //@synthesize playActivityFeatureName=_playActivityFeatureName - In the implementation block
@property (nonatomic,copy) NSData * playActivityRecommendationData;              //@synthesize playActivityRecommendationData=_playActivityRecommendationData - In the implementation block
@property (nonatomic,copy) NSString * siriReferenceIdentifier;                   //@synthesize siriReferenceIdentifier=_siriReferenceIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * siriWHAMetricsInfo;                    //@synthesize siriWHAMetricsInfo=_siriWHAMetricsInfo - In the implementation block
@property (nonatomic,readonly) MPModelPlayEvent * modelPlayEvent;                //@synthesize modelPlayEvent=_modelPlayEvent - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                      //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(id)init;
-(NSString *)uniqueIdentifier;
-(MPModelPlayEvent *)modelPlayEvent;
-(void)replaceIdentifierRegistry:(id)arg1 ;
-(void)identifierRegistryWithExclusiveAccess:(/*^block*/id)arg1 ;
-(id)identifierRegistryWithExclusiveAccessReturningObject:(/*^block*/id)arg1 ;
-(BOOL)identifierRegistryWithExclusiveAccessReturningBOOL:(/*^block*/id)arg1 ;
-(long long)identifierRegistryWithExclusiveAccessReturningInteger:(/*^block*/id)arg1 ;
-(long long)supplementalPlaybackContextBehavior;
-(id)supplementalPlaybackContextWithReason:(long long)arg1 ;
-(void)getRepresentativeMetadataForPlaybackContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)errorResolverForItem:(id)arg1 ;
-(void)applyVolumeNormalizationForItem:(id)arg1 ;
-(id)playbackInfoForItem:(id)arg1 ;
-(NSString *)playActivityFeatureName;
-(void)setPlayActivityFeatureName:(NSString *)arg1 ;
-(NSData *)playActivityRecommendationData;
-(void)setPlayActivityRecommendationData:(NSData *)arg1 ;
-(NSString *)siriReferenceIdentifier;
-(void)setSiriReferenceIdentifier:(NSString *)arg1 ;
-(NSDictionary *)siriWHAMetricsInfo;
-(void)setSiriWHAMetricsInfo:(NSDictionary *)arg1 ;
@end

