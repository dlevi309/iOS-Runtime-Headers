/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlayer/MPRequest.h>
#import <libobjc.A.dylib/MPCMediaRemoteMiddlewareMetadataOperationConfiguration.h>

@class MPCPlayerPath, MPPropertySet, NSString;

@interface MPCPlayerSessionRequest : MPRequest <MPCMediaRemoteMiddlewareMetadataOperationConfiguration> {

	MPCPlayerPath* _playerPath;
	MPPropertySet* _sessionProperties;

}

@property (nonatomic,retain) MPCPlayerPath * playerPath;                                  //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,copy) MPPropertySet * sessionProperties;                             //@synthesize sessionProperties=_sessionProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) SCD_Struct_MP0 tracklistRange; 
@property (nonatomic,readonly) MPPropertySet * playingItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueSectionProperties; 
@property (nonatomic,readonly) NSString * preferredFallbackItemRelationship; 
+(Class)responseClass;
-(id)init;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)middlewareClasses;
-(MPCPlayerPath *)playerPath;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(SCD_Struct_MP0)tracklistRange;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueItemProperties;
-(MPPropertySet *)queueSectionProperties;
-(MPPropertySet *)sessionProperties;
-(void)setSessionProperties:(MPPropertySet *)arg1 ;
@end

