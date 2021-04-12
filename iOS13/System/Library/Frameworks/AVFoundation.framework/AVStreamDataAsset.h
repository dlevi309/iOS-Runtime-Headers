/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class AVStreamDataParser, AVStreamDataAssetInspector, AVAssetSynchronousInspectorLoader, AVDispatchOnce, NSArray, NSDictionary;

@interface AVStreamDataAsset : AVAsset {

	AVStreamDataParser* _weakReferenceToParser;
	AVStreamDataAssetInspector* _inspector;
	AVAssetSynchronousInspectorLoader* _inspectorLoader;
	AVDispatchOnce* _tracksOnce;
	NSArray* _tracks;
	NSDictionary* _trackDictsByTrackID;

}
-(void)dealloc;
-(id)tracks;
-(id)parser;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(id)copyAssetWithReplacementFormatDescription:(opaqueCMFormatDescriptionRef)arg1 forTrackID:(int)arg2 ;
-(id)copyAssetRemovingTrackID:(int)arg1 ;
-(id)formatDescriptionsForTrackID:(int)arg1 ;
-(id)copyAssetWithAdditionalTrackID:(int)arg1 mediaType:(id)arg2 ;
-(id)mediaTypeForTrackID:(int)arg1 ;
-(id)initWithParser:(id)arg1 tracks:(id)arg2 ;
@end

