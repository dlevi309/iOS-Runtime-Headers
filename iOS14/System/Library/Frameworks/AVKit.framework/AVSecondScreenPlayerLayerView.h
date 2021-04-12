/*
* Generated on Thursday, January 14, 2021 at 2:23:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <UIKitCore/UIView.h>

@class AVPlayerLayer, AVObservationController;

@interface AVSecondScreenPlayerLayerView : UIView {

	AVPlayerLayer* _activeSourcePlayerLayer;
	AVObservationController* _observationController;

}

@property (nonatomic,readonly) AVPlayerLayer * layer; 
@property (assign,nonatomic,__weak) AVPlayerLayer * activeSourcePlayerLayer;               //@synthesize activeSourcePlayerLayer=_activeSourcePlayerLayer - In the implementation block
@property (nonatomic,retain) AVObservationController * observationController;              //@synthesize observationController=_observationController - In the implementation block
+(Class)layerClass;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(void)startShowingContentFromSourcePlayerLayer:(id)arg1 ;
-(void)stopShowingContentFromActiveSourcePlayerLayer;
-(AVPlayerLayer *)activeSourcePlayerLayer;
-(void)setActiveSourcePlayerLayer:(AVPlayerLayer *)arg1 ;
-(AVObservationController *)observationController;
-(void)dealloc;
@end

