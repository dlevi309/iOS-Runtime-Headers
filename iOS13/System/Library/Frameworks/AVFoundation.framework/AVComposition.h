/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class AVCompositionInternal, NSArray, NSDictionary;

@interface AVComposition : AVAsset <NSSecureCoding, NSMutableCopying> {

	AVCompositionInternal* _priv;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (nonatomic,readonly) CGSize naturalSize; 
@property (nonatomic,copy,readonly) NSDictionary * URLAssetInitializationOptions; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(BOOL)expectsPropertyRevisedNotifications;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(CGSize)naturalSize;
-(NSArray *)tracks;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(OpaqueFigAssetRef)_figAsset;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(id)trackWithTrackID:(int)arg1 ;
-(id)_mediaSelectionGroupDictionaries;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(NSDictionary *)URLAssetInitializationOptions;
-(int)_createEmptyMutableCompositionIfNeeded;
-(id)_initWithComposition:(id)arg1 ;
-(void)_loadAssetInspectorAndLoaderOnce;
-(id)_newTrackForIndex:(long long)arg1 ;
-(id)_mutableTracks;
-(BOOL)_clientProvidesNaturalSize;
-(void)_setNaturalSize:(CGSize)arg1 ;
-(BOOL)_setURLAssetInitializationOptions:(id)arg1 error:(id*)arg2 ;
@end

