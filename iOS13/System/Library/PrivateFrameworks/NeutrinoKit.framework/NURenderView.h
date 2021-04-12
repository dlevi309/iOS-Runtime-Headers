/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class _NUBackfillLayer, _NUROILayer, _NUContainerLayer, NUImageGeometry, CALayer, NSString;

@interface NURenderView : UIView <CAAnimationDelegate> {

	_NUBackfillLayer* _backfillLayer;
	_NUROILayer* _roiLayer;
	_NUContainerLayer* _containerLayer;
	NUImageGeometry* _geometry;
	BOOL _transitionAnimationInFlight;
	BOOL _shouldRemoveAnimation;
	CALayer* _geometryAnimationLayer;
	BOOL _debugMode;

}

@property (assign,nonatomic) BOOL debugMode;                          //@synthesize debugMode=_debugMode - In the implementation block
@property (nonatomic,retain) NUImageGeometry * geometry; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)animationDidStart:(id)arg1 ;
-(NUImageGeometry *)geometry;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(BOOL)debugMode;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)inLiveResize;
-(id)_containerLayer;
-(id)_backfillLayer;
-(id)_roiLayer;
-(void)renderFrameReachedTargetSize;
-(CGRect)convertRectToImage:(CGRect)arg1 ;
-(void)transitionToSize:(CGSize)arg1 duration:(double)arg2 animationCurve:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transitionToSize:(CGSize)arg1 offset:(CGPoint)arg2 duration:(double)arg3 animationCurve:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

