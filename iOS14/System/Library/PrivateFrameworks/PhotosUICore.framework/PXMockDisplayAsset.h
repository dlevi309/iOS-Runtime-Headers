/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXDisplayAsset.h>

@class NSDate, NSString, NSNumber, NSDictionary;

@interface PXMockDisplayAsset : NSObject <PXDisplayAsset> {

	NSDictionary* _backingDictionary;

}

@property (nonatomic,readonly) NSDictionary * backingDictionary;                     //@synthesize backingDictionary=_backingDictionary - In the implementation block
@property (nonatomic,readonly) long long mediaType; 
@property (nonatomic,readonly) unsigned long long mediaSubtypes; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,readonly) NSDate * localCreationDate; 
@property (getter=isFavorite,nonatomic,readonly) BOOL favorite; 
@property (nonatomic,readonly) BOOL representsBurst; 
@property (nonatomic,readonly) BOOL isInCloud; 
@property (nonatomic,readonly) BOOL isEligibleForAutoPlayback; 
@property (nonatomic,readonly) unsigned long long pixelWidth; 
@property (nonatomic,readonly) unsigned long long pixelHeight; 
@property (nonatomic,readonly) Class defaultImageProviderClass; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) long long playbackStyle; 
@property (nonatomic,readonly) long long playbackVariation; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) unsigned long long thumbnailVersion; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) NSNumber * hdrGain; 
@property (nonatomic,readonly) unsigned long long burstSelectionTypes; 
@property (nonatomic,readonly) NSString * localizedGeoDescription; 
@property (nonatomic,readonly) NSDate * importDate; 
@property (nonatomic,readonly) BOOL isAutoPlaybackEligibilityEstimated; 
@property (nonatomic,readonly) unsigned long long thumbnailIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)propertiesForImageWithSize:(CGSize)arg1 ;
+(id)propertiesForLivePhotoWithSize:(CGSize)arg1 ;
+(id)propertiesForVideoWithSize:(CGSize)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(BOOL)isFavorite;
-(NSString *)uuid;
-(long long)mediaType;
-(id)init;
-(BOOL)isInCloud;
-(NSDate *)localCreationDate;
-(unsigned long long)thumbnailIndex;
-(long long)playbackVariation;
-(BOOL)isEligibleForAutoPlayback;
-(Class)defaultImageProviderClass;
-(long long)_integerValueForKey:(id)arg1 ;
-(unsigned long long)_unsignedIntegerValueForKey:(id)arg1 ;
-(double)_doubleValueForKey:(id)arg1 ;
-(id)_dateValueForKey:(id)arg1 ;
-(id)_stringValueForKey:(id)arg1 ;
-(BOOL)representsBurst;
-(NSDictionary *)backingDictionary;
-(long long)playbackStyle;
-(NSDate *)creationDate;
-(long long)isContentEqualTo:(id)arg1 ;
-(unsigned long long)pixelHeight;
-(unsigned long long)mediaSubtypes;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_boolValueForKey:(id)arg1 ;
-(unsigned long long)pixelWidth;
@end

