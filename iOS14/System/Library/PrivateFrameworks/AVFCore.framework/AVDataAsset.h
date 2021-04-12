/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAsset.h>

@class NSDictionary, AVAssetInspectorLoader, AVDispatchOnce, NSArray;

@interface AVDataAsset : AVAsset {

	NSDictionary* _initializationOptions;
	AVAssetInspectorLoader* _loader;
	AVDispatchOnce* _allocateTracksOnceOnly;
	NSArray* _tracks;

}
+(unsigned long long)_dataLengthLimit;
+(id)_getFigAssetCreationOptionsFromDataAssetInitializationOptions:(id)arg1 figAssetCreationFlags:(unsigned long long*)arg2 ;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)initWithData:(id)arg1 contentType:(id)arg2 ;
-(id)tracks;
-(id)initWithData:(id)arg1 contentType:(id)arg2 options:(id)arg3 ;
-(id)_assetInspectorLoader;
-(id)_assetInspector;
-(unsigned long long)referenceRestrictions;
-(BOOL)_requiresInProcessOperation;
-(Class)_classForTrackInspectors;
-(void)dealloc;
@end

