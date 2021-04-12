/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/

@class MPCPlayerPath, MPPropertySet, NSString;


@protocol MPCMediaRemoteMiddlewareMetadataOperationConfiguration <NSObject>
@property (nonatomic,readonly) MPCPlayerPath * playerPath; 
@property (readonly) SCD_Struct_MP0 tracklistRange; 
@property (nonatomic,readonly) MPPropertySet * playingItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueItemProperties; 
@property (nonatomic,readonly) MPPropertySet * queueSectionProperties; 
@property (nonatomic,readonly) NSString * preferredFallbackItemRelationship; 
@optional
-(NSString *)preferredFallbackItemRelationship;

@required
-(MPCPlayerPath *)playerPath;
-(SCD_Struct_MP0)tracklistRange;
-(MPPropertySet *)playingItemProperties;
-(MPPropertySet *)queueItemProperties;
-(MPPropertySet *)queueSectionProperties;

@end

