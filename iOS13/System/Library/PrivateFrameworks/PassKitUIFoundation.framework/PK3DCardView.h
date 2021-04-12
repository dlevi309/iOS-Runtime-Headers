/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKMotionManagerClientProtocol.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>

@protocol PK3DLiveCardViewDelegate;
@class SCNView, SCNMaterial, NSString;

@interface PK3DCardView : UIView <PKMotionManagerClientProtocol, SCNSceneRendererDelegate> {

	SCNView* _sceneView;
	SCNMaterial* _cardMaterial;
	int _design;
	 _lastRollPitch;
	BOOL _renderedOnce;
	BOOL _motionEnabled;
	BOOL _invalidated;
	id<PK3DLiveCardViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PK3DLiveCardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<PK3DLiveCardViewDelegate>)delegate;
-(void)setDelegate:(id<PK3DLiveCardViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)stopMotionUpdates;
-(void)startMotionUpdates;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)renderSceneWithTextures:(id)arg1 shaders:(id)arg2 ;
-(void)setRollPitch:;
-(void)motionManager:(id)arg1 didReceiveMotion:(id)arg2 ;
@end

