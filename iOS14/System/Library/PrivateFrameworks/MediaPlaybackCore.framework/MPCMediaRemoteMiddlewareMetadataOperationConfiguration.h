/*
* Generated on Thursday, January 14, 2021 at 2:25:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class MPCPlayerPath, MPPropertySet, NSString;


@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration <NSObject>
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (readonly) SCD_Struct_MP1 tracklistRange; 
@property (nonatomic,readonly) MPPropertySet * playingItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueSectionProperties; 
@property (nonatomic,readonly) NSString * preferredFallbackItemRelationship; 
@optional
-(NSString *)preferredFallbackItemRelationship;

@required
-(SCD_Struct_MP1)tracklistRange;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueSectionProperties;
-(MPCPlayerPath *)playerPath;
-(MPPropertySet *)queueItemProperties;

@end

