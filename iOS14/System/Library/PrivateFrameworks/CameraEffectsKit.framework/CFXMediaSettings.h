/*
* Generated on Thursday, January 14, 2021 at 2:27:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaSettingsProvider.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface CFXMediaSettings : NSObject <JFXMediaSettingsProvider> {

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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)setRenderSize:(CGSize)arg1 ;
-(int)timeScale;
-(void)setTimeScale:(int)arg1 ;
-(int)frameRate;
-(void)setFrameRate:(int)arg1 ;
-(void)setFrameSize:(CGSize)arg1 ;
-(CGSize)renderSize;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(CGSize)frameSize;
@end

