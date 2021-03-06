/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/PKControllerDelegate.h>
#import <libobjc.A.dylib/PKMetalRendererControllerDelegate.h>

@protocol PKPaintSurface, OS_dispatch_queue;
@class PKController, NSMutableArray, CIContext, NSMutableSet, PKPaintAreaView, NSObject, NSUUID, NSString;

@interface PKPaintAreaViewSurface : NSObject <PKControllerDelegate, PKMetalRendererControllerDelegate> {

	PKController* _drawingController;
	NSMutableArray* _textureSet;
	CGSize _pixelSize;
	CGPoint _oldEraseLocation;
	CIContext* _imageContext;
	BOOL _isDrawing;
	BOOL _allowLiveInteraction;
	BOOL _waitingForStrokeToEnd;
	BOOL _isErasingObjects;
	BOOL _isMipmapped;
	NSMutableArray* _strokesToErase;
	NSMutableSet* _strokeIDsToErase;
	PKPaintAreaView* _paintAreaView;
	id<PKPaintSurface> _surface;
	double _textureScale;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSUUID* _drawingUUID;
	CGSize _drawingSize;
	CGPoint _previousPoint;
	CGAffineTransform _strokeTransform;

}

@property (assign,nonatomic) BOOL isDrawing;                                            //@synthesize isDrawing=_isDrawing - In the implementation block
@property (assign) BOOL allowLiveInteraction;                                           //@synthesize allowLiveInteraction=_allowLiveInteraction - In the implementation block
@property (nonatomic,readonly) BOOL waitingForStrokeToEnd;                              //@synthesize waitingForStrokeToEnd=_waitingForStrokeToEnd - In the implementation block
@property (nonatomic,readonly) BOOL isErasingObjects;                                   //@synthesize isErasingObjects=_isErasingObjects - In the implementation block
@property (nonatomic,readonly) NSMutableArray * strokesToErase;                         //@synthesize strokesToErase=_strokesToErase - In the implementation block
@property (nonatomic,readonly) NSMutableSet * strokeIDsToErase;                         //@synthesize strokeIDsToErase=_strokeIDsToErase - In the implementation block
@property (nonatomic,readonly) PKController * drawingController;                        //@synthesize drawingController=_drawingController - In the implementation block
@property (assign,nonatomic,__weak) PKPaintAreaView * paintAreaView;                    //@synthesize paintAreaView=_paintAreaView - In the implementation block
@property (nonatomic,readonly) id<PKPaintSurface> surface;                              //@synthesize surface=_surface - In the implementation block
@property (nonatomic,readonly) CGSize drawingSize;                                      //@synthesize drawingSize=_drawingSize - In the implementation block
@property (nonatomic,readonly) double textureScale;                                     //@synthesize textureScale=_textureScale - In the implementation block
@property (nonatomic,readonly) CGAffineTransform strokeTransform;                       //@synthesize strokeTransform=_strokeTransform - In the implementation block
@property (nonatomic,readonly) BOOL isMipmapped;                                        //@synthesize isMipmapped=_isMipmapped - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSUUID * drawingUUID;                                    //@synthesize drawingUUID=_drawingUUID - In the implementation block
@property (assign,nonatomic) CGPoint previousPoint;                                     //@synthesize previousPoint=_previousPoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)vsync:(double)arg1 ;
-(void)setPreviousPoint:(CGPoint)arg1 ;
-(id<PKPaintSurface>)surface;
-(BOOL)isDrawing;
-(void)dealloc;
-(CGPoint)previousPoint;
-(void)setAllowLiveInteraction:(BOOL)arg1 ;
-(void)setNeedsDrawingDisplay;
-(CGAffineTransform)strokeTransform;
-(void)drawingChanged:(id)arg1 ;
-(BOOL)isErasingObjects;
-(NSUUID *)drawingUUID;
-(PKController *)drawingController;
-(void)setIsDrawing:(BOOL)arg1 ;
-(void)eraserCancelled;
-(void)drawingCancelled;
-(void)eraseStrokesForPoint:(CGPoint)arg1 prevPoint:(CGPoint)arg2 ;
-(void)_didFinishErasingStrokes:(BOOL)arg1 ;
-(BOOL)allowLiveInteraction;
-(NSMutableArray *)strokesToErase;
-(NSMutableSet *)strokeIDsToErase;
-(void)metalRendererController:(id)arg1 didCommitRenderingIntoTexture:(id)arg2 ;
-(id)nextTextureTargetForMetalRendererController:(id)arg1 ;
-(BOOL)waitingForStrokeToEnd;
-(void)drawingEndedWithDetectedShape:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithPaintSurface:(id)arg1 dispatchQueue:(id)arg2 ;
-(void)setPaintAreaView:(PKPaintAreaView *)arg1 ;
-(CGSize)drawingSize;
-(void)drawingBegan:(id)arg1 transformedLocation:(CGPoint)arg2 activeInputProperties:(unsigned long long)arg3 ;
-(void)eraserMoved:(id)arg1 transformedLocation:(CGPoint)arg2 ;
-(void)dispatchSyncOnSurfaceQueue:(/*^block*/id)arg1 ;
-(void)_setupPKController;
-(id)CIImageFromTexture:(id)arg1 ;
-(BOOL)eraserBegan:(id)arg1 transformedLocation:(CGPoint)arg2 ;
-(PKPaintAreaView *)paintAreaView;
-(void)eraserEnded;
-(double)textureScale;
-(BOOL)isMipmapped;
@end

