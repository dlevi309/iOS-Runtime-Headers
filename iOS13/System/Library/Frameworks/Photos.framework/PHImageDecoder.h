/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/


@interface PHImageDecoder : NSObject
+(id)sharedDecoder;
-(id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 maxSideLength:(long long)arg3 resizeMode:(long long)arg4 applyOrientationTransform:(BOOL)arg5 optimizeForDrawing:(BOOL)arg6 highPriority:(BOOL)arg7 waitUntilComplete:(BOOL)arg8 completion:(/*^block*/id)arg9 ;
-(void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1 ;
@end

