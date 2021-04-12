/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (readonly) SCD_Struct_MP1 tracklistRange; 
@property (nonatomic,readonly) MPPropertySet * playingItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueSectionProperties; 
@property (nonatomic,readonly) NSString * preferredFallbackItemRelationship; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)responseClass;
-(SCD_Struct_MP1)tracklistRange;
-(id)init;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueSectionProperties;
-(NSString *)description;
-(void)setPlayerPath:(MPCPlayerPath *)arg1 ;
-(MPCPlayerPath *)playerPath;
-(MPPropertySet *)queueItemProperties;
-(id)middlewareClasses;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MPPropertySet *)sessionProperties;
-(void)setSessionProperties:(MPPropertySet *)arg1 ;
@end

