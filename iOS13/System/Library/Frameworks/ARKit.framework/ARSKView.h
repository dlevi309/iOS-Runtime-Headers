/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <SpriteKit/SKView.h>
#import <ARKit/ARInternalSessionObserver.h>
#import <ARKit/ARSessionProviding.h>

@class ARSession, NSMutableDictionary, NSSet, NSString;

@interface ARSKView : SKView <ARInternalSessionObserver, ARSessionProviding> {

	ARSession* _session;
	NSMutableDictionary* _nodesByAnchorIdentifier;
	NSSet* _lastFrameAnchors;
	long long _interfaceOrientation;
	CGSize _viewportSize;

}

@property (assign,nonatomic,__weak) NSObject*<ARSKViewDelegate> delegate; 
@property (nonatomic,retain) ARSession * session; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(ARSession *)session;
-(void)setSession:(ARSession *)arg1 ;
-(void)commonInit;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)session:(id)arg1 didFailWithError:(id)arg2 ;
-(void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2 ;
-(void)sessionWasInterrupted:(id)arg1 ;
-(void)sessionInterruptionEnded:(id)arg1 ;
-(void)session:(id)arg1 didOutputAudioSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(void)sessionShouldAttemptRelocalization:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)hitTest:(CGPoint)arg1 types:(unsigned long long)arg2 ;
-(id)_anchorForNode:(id)arg1 inFrame:(id)arg2 ;
-(void)_updateNode:(id)arg1 forAnchor:(id)arg2 projectionMatrix:(SCD_Struct_AR1)arg3 camera:(id)arg4 orientation:(long long)arg5 ;
-(void)_updateAnchors:(id)arg1 camera:(id)arg2 ;
-(id)anchorForNode:(id)arg1 ;
-(id)nodeForAnchor:(id)arg1 ;
@end

