/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPRequest.h>
#import <libobjc.A.dylib/MPCMediaRemoteMiddlewareMetadataOperationConfiguration.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@interface MPCPlayerRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration> {

	BOOL _disablePlaybackStateValidation;
	BOOL _disablePlaybackRateValidation;
	MPCPlayerPath* _playerPath;
	MPPropertySet* _playingItemProperties;
	MPPropertySet* _queueSectionProperties;
	MPPropertySet* _queueItemProperties;
	NSString* _preferredFallbackItemRelationship;
	SCD_Struct_MP7 _tracklistRange;

}

@property (nonatomic,copy) MPPropertySet * playingItemProperties;                     //@synthesize playingItemProperties=_playingItemProperties - In the implementation block
@property (nonatomic,copy) MPPropertySet * queueSectionProperties;                    //@synthesize queueSectionProperties=_queueSectionProperties - In the implementation block
@property (nonatomic,copy) MPPropertySet * queueItemProperties;                       //@synthesize queueItemProperties=_queueItemProperties - In the implementation block
@property (assign,nonatomic) BOOL disablePlaybackStateValidation;                     //@synthesize disablePlaybackStateValidation=_disablePlaybackStateValidation - In the implementation block
@property (assign,nonatomic) BOOL disablePlaybackRateValidation;                      //@synthesize disablePlaybackRateValidation=_disablePlaybackRateValidation - In the implementation block
@property (nonatomic,copy) NSString * preferredFallbackItemRelationship;              //@synthesize preferredFallbackItemRelationship=_preferredFallbackItemRelationship - In the implementation block
@property (nonatomic,retain) MPCPlayerPath * playerPath;                              //@synthesize playerPath=_playerPath - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP7 tracklistRange;                           //@synthesize tracklistRange=_tracklistRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_stateDumpObject;
-(id)middlewareClasses;
-(MPCPlayerPath *)playerPath;
-(void)setPlayingItemProperties:(MPPropertySet *)arg1 ;
-(void)setQueueSectionProperties:(MPPropertySet *)arg1 ;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(SCD_Struct_MP7)tracklistRange;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueItemProperties;
-(MPPropertySet *)queueSectionProperties;
-(NSString *)preferredFallbackItemRelationship;
-(void)setTracklistRange:(SCD_Struct_MP7)arg1 ;
-(void)setQueueItemProperties:(MPPropertySet *)arg1 ;
-(BOOL)disablePlaybackStateValidation;
-(void)setDisablePlaybackStateValidation:(BOOL)arg1 ;
-(BOOL)disablePlaybackRateValidation;
-(void)setDisablePlaybackRateValidation:(BOOL)arg1 ;
-(void)setPreferredFallbackItemRelationship:(NSString *)arg1 ;
@end

