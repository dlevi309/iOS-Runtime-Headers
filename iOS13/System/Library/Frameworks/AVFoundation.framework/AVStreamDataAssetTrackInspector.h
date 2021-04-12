/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVStreamDataAssetTrackInspector : AVAssetTrackInspector {

	AVWeakReference* _weakReferenceToAsset;
	int _trackID;

}
-(void)dealloc;
-(BOOL)isEnabled;
-(int)trackID;
-(id)mediaType;
-(CGSize)dimensions;
-(SCD_Struct_AV8)timeRange;
-(CGSize)naturalSize;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(id)mediaCharacteristics;
-(unsigned)figMediaType;
@end

