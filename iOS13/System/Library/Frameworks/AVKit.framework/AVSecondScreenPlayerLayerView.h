/*
* Generated on Monday, March 1, 2021 at 2:31:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(AVObservationController *)observationController;
-(void)setObservationController:(AVObservationController *)arg1 ;
-(void)startShowingContentFromSourcePlayerLayer:(id)arg1 ;
-(void)stopShowingContentFromActiveSourcePlayerLayer;
-(AVPlayerLayer *)activeSourcePlayerLayer;
-(void)setActiveSourcePlayerLayer:(AVPlayerLayer *)arg1 ;
@end

