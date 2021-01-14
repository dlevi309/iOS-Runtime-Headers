/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspectorLoader.h>

@class AVAssetInspector;

@interface AVAssetSynchronousInspectorLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;

}
-(BOOL)isPlayable;
-(id)lyrics;
-(BOOL)isReadable;
-(BOOL)isComposable;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(SCD_Struct_AV6)duration;
-(id)assetInspector;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithAssetInspector:(id)arg1 ;
-(BOOL)isExportable;
@end

