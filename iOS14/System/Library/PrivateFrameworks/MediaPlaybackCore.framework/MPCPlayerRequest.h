/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_MP8 _tracklistRange;

}

@property (nonatomic,copy) MPPropertySet * playingItemProperties;                     //@synthesize playingItemProperties=_playingItemProperties - In the implementation block
@property (nonatomic,copy) MPPropertySet * queueSectionProperties;                    //@synthesize queueSectionProperties=_queueSectionProperties - In the implementation block
@property (nonatomic,copy) MPPropertySet * queueItemProperties;                       //@synthesize queueItemProperties=_queueItemProperties - In the implementation block
@property (assign,nonatomic) BOOL disablePlaybackStateValidation;                     //@synthesize disablePlaybackStateValidation=_disablePlaybackStateValidation - In the implementation block
@property (assign,nonatomic) BOOL disablePlaybackRateValidation;                      //@synthesize disablePlaybackRateValidation=_disablePlaybackRateValidation - In the implementation block
@property (nonatomic,copy) NSString * preferredFallbackItemRelationship;              //@synthesize preferredFallbackItemRelationship=_preferredFallbackItemRelationship - In the implementation block
@property (nonatomic,retain) MPCPlayerPath * playerPath;                              //@synthesize playerPath=_playerPath - In the implementation block
@property (assign,nonatomic) SCD_Struct_MP8 tracklistRange;                           //@synthesize tracklistRange=_tracklistRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
-(SCD_Struct_MP8)tracklistRange;
-(void)setPreferredFallbackItemRelationship:(NSString *)arg1 ;
-(id)init;
-(void)setTracklistRange:(SCD_Struct_MP8)arg1 ;
-(void)setDisablePlaybackStateValidation:(BOOL)arg1 ;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueSectionProperties;
-(NSString *)description;
-(BOOL)disablePlaybackRateValidation;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(id)_stateDumpObject;
-(MPCPlayerPath *)playerPath;
-(void)setQueueSectionProperties:(MPPropertySet *)arg1 ;
-(MPPropertySet *)queueItemProperties;
-(void)setPlayingItemProperties:(MPPropertySet *)arg1 ;
-(BOOL)disablePlaybackStateValidation;
-(id)middlewareClasses;
-(void)setDisablePlaybackRateValidation:(BOOL)arg1 ;
-(NSString *)preferredFallbackItemRelationship;
-(void)setQueueItemProperties:(MPPropertySet *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

