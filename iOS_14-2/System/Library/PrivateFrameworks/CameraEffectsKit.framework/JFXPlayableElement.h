/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

@class NSString, JFXMediaItem, NSData, PVTransformAnimation;


@protocol JFXPlayableElement <NSObject,JFXDepthDataReaderCreationAttributesProvider,JFXARMetadataReaderCreationAttributesProvider>
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) JFXMediaItem * mediaItem; 
@property (nonatomic,readonly) BOOL isAssetUnavailable; 
@property (nonatomic,readonly) BOOL isAssetLoaded; 
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) BOOL isStill; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL shouldRenderVideoAsBlack; 
@property (nonatomic,readonly) CGSize playableMediaSizeWithTransform; 
@property (nonatomic,readonly) NSData * originalAnimojiDataRepresentation; 
@property (nonatomic,readonly) unsigned long long originalAnimojiVersionNumber; 
@property (nonatomic,readonly) int presentationTime; 
@property (nonatomic,readonly) int duration; 
@property (nonatomic,readonly) int mediaStartOffset; 
@property (nonatomic,readonly) PVTransformAnimation * transformAnimation; 
@required
-(NSString *)uuid;
-(long long)mediaType;
-(int)presentationTime;
-(JFXMediaItem *)mediaItem;
-(BOOL)isAssetLoaded;
-(BOOL)isVideo;
-(BOOL)isStill;
-(int)duration;
-(PVTransformAnimation *)transformAnimation;
-(int)mediaStartOffset;
-(BOOL)hasPlayableEffectOfType:(int)arg1;
-(id)playableEffectsOfType:(int)arg1;
-(CGSize)playableMediaSizeWithTransform;
-(id)playableEffectStack;
-(id)playableEffectStackExcludingType:(int)arg1;
-(BOOL)isAssetUnavailable;
-(BOOL)shouldRenderVideoAsBlack;
-(NSData *)originalAnimojiDataRepresentation;
-(unsigned long long)originalAnimojiVersionNumber;

@end

