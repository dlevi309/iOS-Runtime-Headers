/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {

	AVWeakReference* _weakReferenceToAsset;
	int _trackID;

}
-(CGSize)naturalSize;
-(id)mediaType;
-(CGSize)dimensions;
-(SCD_Struct_AV7)timeRange;
-(int)trackID;
-(unsigned)figMediaType;
-(BOOL)isEnabled;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(void)dealloc;
-(id)mediaCharacteristics;
@end

