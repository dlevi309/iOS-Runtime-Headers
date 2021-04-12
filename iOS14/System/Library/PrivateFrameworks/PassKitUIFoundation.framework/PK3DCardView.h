/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PK3DLiveCardViewDelegate>)delegate;
-(void)setDelegate:(id<PK3DLiveCardViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setMotionEnabled:(BOOL)arg1 ;
-(void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)invalidate;
-(void)renderSceneWithTextures:(id)arg1 shaders:(id)arg2 ;
-(void)dealloc;
-(void)stopMotionUpdates;
-(void)startMotionUpdates;
-(void)setRollPitch:;
-(void)motionManager:(id)arg1 didReceiveMotion:(id)arg2 ;
@end

