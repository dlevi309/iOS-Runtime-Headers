/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(ARSession *)session;
-(void)sessionWasInterrupted:(id)arg1 ;
-(void)session:(id)arg1 didFailWithError:(id)arg2 ;
-(void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2 ;
-(void)sessionInterruptionEnded:(id)arg1 ;
-(void)session:(id)arg1 didOutputAudioSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(void)session:(id)arg1 didChangeGeoTrackingStatus:(id)arg2 ;
-(void)session:(id)arg1 didUpdateFrame:(id)arg2 ;
-(void)commonInit;
-(void)layoutSubviews;
-(void)setSession:(ARSession *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 types:(unsigned long long)arg2 ;
-(void)sessionShouldAttemptRelocalization:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_anchorForNode:(id)arg1 inFrame:(id)arg2 ;
-(void)_updateNode:(id)arg1 forAnchor:(id)arg2 projectionMatrix:(SCD_Struct_AR0)arg3 camera:(id)arg4 orientation:(long long)arg5 ;
-(void)_updateAnchors:(id)arg1 camera:(id)arg2 ;
-(id)anchorForNode:(id)arg1 ;
-(id)nodeForAnchor:(id)arg1 ;
@end

