/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>
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
-(OpaqueFigFormatReaderRef)_formatReader;
-(CGSize)naturalSize;
-(id)init;
-(NSArray *)tracks;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)trackWithTrackID:(int)arg1 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(id)tracksWithMediaType:(id)arg1 ;
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)_classForTrackInspectors;
-(id)_mediaSelectionGroupDictionaries;
-(OpaqueFigAssetRef)_figAsset;
-(void)dealloc;
-(void)_setNaturalSize:(CGSize)arg1 ;
-(NSDictionary *)URLAssetInitializationOptions;
-(id)_initWithComposition:(id)arg1 ;
-(int)_createEmptyMutableCompositionIfNeeded;
-(id)_mutableTracks;
-(void)_loadAssetInspectorAndLoaderOnce;
-(id)_newTrackForIndex:(long long)arg1 ;
-(BOOL)_clientProvidesNaturalSize;
-(BOOL)_setURLAssetInitializationOptions:(id)arg1 error:(id*)arg2 ;
@end

