/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoKit.framework/NeutrinoKit
*/

#import <NeutrinoKit/NeutrinoKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NUImageLayer, _NUContainerLayer, NUImageGeometry, CALayer, NSString;

@interface NURenderView : UIView <CAAnimationDelegate> {

	NUImageLayer* _backfillLayer;
	NUImageLayer* _roiLayer;
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
-(NUImageGeometry *)geometry;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_containerLayer;
-(BOOL)debugMode;
-(void)animationDidStart:(id)arg1 ;
-(void)layoutSubviews;
-(BOOL)inLiveResize;
-(void)setGeometry:(NUImageGeometry *)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDebugMode:(BOOL)arg1 ;
-(CGRect)convertRectToImage:(CGRect)arg1 ;
-(id)_backfillLayer;
-(id)_roiLayer;
-(void)renderFrameReachedTargetSize;
-(void)transitionToSize:(CGSize)arg1 duration:(double)arg2 animationCurve:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)transitionToSize:(CGSize)arg1 offset:(CGPoint)arg2 duration:(double)arg3 animationCurve:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

