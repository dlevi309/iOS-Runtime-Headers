/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAsset.h>

@class NSDictionary, AVAssetInspectorLoader, AVDispatchOnce, NSArray;

@interface AVDataAsset : AVAsset {

	NSDictionary* _initializationOptions;
	AVAssetInspectorLoader* _loader;
	AVDispatchOnce* _allocateTracksOnceOnly;
	NSArray* _tracks;

}
+(unsigned long long)_dataLengthLimit;
+(id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)tracks;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(OpaqueFigFormatReaderRef)_formatReader;
-(Class)_classForTrackInspectors;
-(unsigned long long)referenceRestrictions;
@end

