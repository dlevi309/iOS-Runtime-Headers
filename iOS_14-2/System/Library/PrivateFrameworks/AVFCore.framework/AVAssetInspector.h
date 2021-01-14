/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVFigObjectInspector.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, AVMetadataItem, NSString, NSData, AVDisplayCriteria;

@interface AVAssetInspector : AVFigObjectInspector <NSCopying>

@property (nonatomic,readonly) SCD_Struct_AV6 duration; 
@property (nonatomic,readonly) float preferredRate; 
@property (nonatomic,readonly) float preferredVolume; 
@property (nonatomic,readonly) float preferredSoundCheckVolumeNormalization; 
@property (nonatomic,readonly) CGAffineTransform preferredTransform; 
@property (nonatomic,readonly) SCD_Struct_AV6 minimumTimeOffsetFromLive; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,readonly) int naturalTimeScale; 
@property (nonatomic,readonly) BOOL providesPreciseDurationAndTiming; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,readonly) NSArray * trackIDs; 
@property (nonatomic,readonly) NSArray * alternateTrackGroups; 
@property (nonatomic,readonly) NSDictionary * trackReferences; 
@property (getter=_mediaSelectionGroupDictionaries,nonatomic,readonly) NSArray * mediaSelectionGroupDictionaries; 
@property (nonatomic,readonly) AVMetadataItem * creationDate; 
@property (nonatomic,readonly) NSString * lyrics; 
@property (nonatomic,readonly) NSArray * commonMetadata; 
@property (nonatomic,readonly) NSArray * availableMetadataFormats; 
@property (getter=isPlayable,nonatomic,readonly) BOOL playable; 
@property (getter=isExportable,nonatomic,readonly) BOOL exportable; 
@property (getter=isReadable,nonatomic,readonly) BOOL readable; 
@property (getter=isComposable,nonatomic,readonly) BOOL composable; 
@property (getter=isCompatibleWithSavedPhotosAlbum,nonatomic,readonly) BOOL compatibleWithSavedPhotosAlbum; 
@property (getter=isCompatibleWithAirPlayVideo,nonatomic,readonly) BOOL compatibleWithAirPlayVideo; 
@property (nonatomic,readonly) NSData * SHA1Digest; 
@property (nonatomic,readonly) BOOL canContainFragments; 
@property (nonatomic,readonly) BOOL containsFragments; 
@property (nonatomic,readonly) SCD_Struct_AV6 overallDurationHint; 
@property (nonatomic,readonly) long long firstFragmentSequenceNumber; 
@property (nonatomic,readonly) long long fragmentCount; 
@property (nonatomic,readonly) id propertyListForProxy; 
@property (nonatomic,readonly) NSString * identifyingTagClass; 
@property (nonatomic,readonly) NSString * identifyingTag; 
@property (nonatomic,readonly) CGSize maximumVideoResolution; 
@property (nonatomic,readonly) NSArray * availableVideoDynamicRanges; 
@property (nonatomic,readonly) AVDisplayCriteria * preferredDisplayCriteria; 
@property (getter=_instanceIdentifier,nonatomic,readonly) NSString * instanceIdentifier; 
@property (nonatomic,readonly) BOOL supportsAnalysisReporting; 
@property (getter=_assetAnalysisMessages,nonatomic,readonly) NSArray * assetAnalysisMessages; 
-(SCD_Struct_AV6)overallDurationHint;
-(BOOL)isPlayable;
-(NSString *)lyrics;
-(NSDictionary *)trackReferences;
-(BOOL)hasProtectedContent;
-(long long)trackCount;
-(BOOL)isReadable;
-(long long)firstFragmentSequenceNumber;
-(float)preferredSoundCheckVolumeNormalization;
-(NSArray *)commonMetadata;
-(CGSize)naturalSize;
-(BOOL)canContainFragments;
-(NSString *)identifyingTag;
-(float)preferredVolume;
-(BOOL)isComposable;
-(id)metadataForFormat:(id)arg1 ;
-(CGSize)maximumVideoResolution;
-(NSArray *)availableMetadataFormats;
-(CGAffineTransform)preferredTransform;
-(int)naturalTimeScale;
-(float)preferredRate;
-(id)_instanceIdentifier;
-(BOOL)containsFragments;
-(NSArray *)trackIDs;
-(id)propertyListForProxy;
-(NSArray *)alternateTrackGroups;
-(long long)fragmentCount;
-(BOOL)providesPreciseDurationAndTiming;
-(AVMetadataItem *)creationDate;
-(BOOL)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1 ;
-(BOOL)isCompatibleWithAirPlayVideo;
-(SCD_Struct_AV6)minimumTimeOffsetFromLive;
-(NSString *)identifyingTagClass;
-(BOOL)supportsAnalysisReporting;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(id)_mediaSelectionGroupDictionaries;
-(id)_assetAnalysisMessages;
-(NSArray *)availableVideoDynamicRanges;
-(id)makePropertyListForProxyWithOptions:(id)arg1 ;
-(SCD_Struct_AV6)duration;
-(AVDisplayCriteria *)preferredDisplayCriteria;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)SHA1Digest;
-(BOOL)isExportable;
@end

