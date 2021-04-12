/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFoundation/AVPlayer.h>

@class ISRateCurveRequest;

@interface ISAVPlayer : AVPlayer {

	ISRateCurveRequest* _currentRequest;

}
-(void)dealloc;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)setRate:(float)arg1 ;
-(void)playToTime:(SCD_Struct_IS0)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(/*^block*/id)arg4 ;
-(void)_setRate:(float)arg1 ;
-(void)_cancelRateCurveRequest;
@end

