/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
@class NSObject;

@interface JTCompositionSettings : NSObject {

	int _timeScale;
	int _frameRate;
	NSObject*<OS_dispatch_queue> _queue;
	CGSize _frameSize;
	CGSize _renderSize;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) int timeScale;                                   //@synthesize timeScale=_timeScale - In the implementation block
@property (assign,nonatomic) int frameRate;                                   //@synthesize frameRate=_frameRate - In the implementation block
@property (assign,nonatomic) CGSize frameSize;                                //@synthesize frameSize=_frameSize - In the implementation block
@property (assign,nonatomic) CGSize renderSize;                               //@synthesize renderSize=_renderSize - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setFrameSize:(CGSize)arg1 ;
-(CGSize)renderSize;
-(void)setRenderSize:(CGSize)arg1 ;
-(int)timeScale;
-(void)setFrameRate:(int)arg1 ;
-(int)frameRate;
-(void)setTimeScale:(int)arg1 ;
-(CGSize)frameSize;
@end

