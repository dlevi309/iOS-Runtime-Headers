/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
*/

#import <PassKitUIFoundation/PassKitUIFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SCNSceneRendererDelegate.h>

@class SCNView, PKPeerPayment3DScene, NSMutableArray, PKPeerPayment3DStore, NSString;

@interface PKPeerPayment3DTextView : UIView <SCNSceneRendererDelegate> {

	SCNView* _sceneView;
	PKPeerPayment3DScene* _scene;
	double _sceneWidthUnits;
	double _sceneHeightUnits;
	NSMutableArray* _performHandlers;
	double _dynamicRollPitchMix;
	double _startAnimationTime;
	double _animationDuration;
	double _lastRenderTime;
	BOOL _liveMotionEnabled;
	BOOL _willAnimate;
	BOOL _snapshotRequested;
	BOOL _usedForSnapshotting;
	unsigned long long _framesFullyRendered;
	PKPeerPayment3DStore* _3DStore;
	BOOL _layoutRequested;
	NSMutableArray* _charactersToDraw;
	unsigned long long _renderStyle;
	NSString* _text;

}

@property (nonatomic,readonly) unsigned long long renderStyle;              //@synthesize renderStyle=_renderStyle - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                        //@synthesize text=_text - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedCharacterSet;
-(void)dealloc;
-(NSString *)text;
-(BOOL)setText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)didBecomeActive;
-(void)willResignActive;
-(void)layoutText;
-(void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3 ;
-(void)renderer:(id)arg1 updateAtTime:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 renderStyle:(unsigned long long)arg2 usedForSnapshotting:(BOOL)arg3 ;
-(void)setMotionEffectEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)generatedSnapshot;
-(void)performPostRender:(/*^block*/id)arg1 ;
-(void)updateSceneUnits;
-(void)loadCharactersAndLayout;
-(unsigned long long)renderStyle;
@end

