/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <AVFCore/AVPlayer.h>

@protocol OS_dispatch_queue;
@class ISRateCurveRequest, NSObject;

@interface ISAVPlayer : AVPlayer {

	ISRateCurveRequest* _currentRequest;
	NSObject*<OS_dispatch_queue> _initializedDispatchQueue;
	NSObject*<OS_dispatch_queue> _actualDispatchQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> actualDispatchQueue;              //@synthesize actualDispatchQueue=_actualDispatchQueue - In the implementation block
+(BOOL)isSpringBoard;
+(BOOL)isAppleInternal;
-(id)init;
-(id)initWithDispatchQueue:(id)arg1 ;
-(void)setRate:(float)arg1 ;
-(id)dispatchQueue;
-(void)dealloc;
-(void)playToTime:(SCD_Struct_IS0)arg1 withInitialRate:(float)arg2 overDuration:(double)arg3 progressHandler:(/*^block*/id)arg4 ;
-(void)_setRate:(float)arg1 ;
-(void)_cancelRateCurveRequest;
-(NSObject*<OS_dispatch_queue>)actualDispatchQueue;
@end

