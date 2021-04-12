/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUICore.framework/GameCenterUICore
*/


@class GKEventEmitter;

@interface GKScreenConfigurationController : NSObject {

	double _greatestScreenScale;
	GKEventEmitter* _emitter;

}

@property (nonatomic,retain) GKEventEmitter * emitter;              //@synthesize emitter=_emitter - In the implementation block
@property (readonly) double greatestScreenScale;                    //@synthesize greatestScreenScale=_greatestScreenScale - In the implementation block
+(id)sharedController;
+(double)_scaleForCurrentDisplayConfiguration;
-(void)registerListener:(id)arg1 ;
-(void)setEmitter:(GKEventEmitter *)arg1 ;
-(id)init;
-(void)unregisterListener:(id)arg1 ;
-(GKEventEmitter *)emitter;
-(double)greatestScreenScale;
-(void)_screensDidChange:(id)arg1 ;
@end

