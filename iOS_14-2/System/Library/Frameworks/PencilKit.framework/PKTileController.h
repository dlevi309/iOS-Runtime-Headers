/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol OS_dispatch_queue;
#import <PencilKit/PencilKit-Structs.h>
@class PKMetalRendererController, NSObject;

@interface PKTileController : NSObject {

	BOOL _invertColors;
	BOOL _previewsSuspended;
	PKMetalRendererController* _rendererController;
	NSObject*<OS_dispatch_queue> _previewQueue;

}

@property (nonatomic,retain) PKMetalRendererController * rendererController;              //@synthesize rendererController=_rendererController - In the implementation block
@property (assign,nonatomic) BOOL previewsSuspended;                                      //@synthesize previewsSuspended=_previewsSuspended - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> previewQueue;                   //@synthesize previewQueue=_previewQueue - In the implementation block
@property (assign,nonatomic) BOOL invertColors;                                           //@synthesize invertColors=_invertColors - In the implementation block
-(NSObject*<OS_dispatch_queue>)previewQueue;
-(void)teardown;
-(id)initWithPixelSize:(CGSize)arg1 actualSize:(CGSize)arg2 renderQueue:(id)arg3 usePrivateResourceHandler:(BOOL)arg4 pixelFormat:(unsigned long long)arg5 ;
-(PKMetalRendererController *)rendererController;
-(void)setInvertColors:(BOOL)arg1 ;
-(void)setRendererController:(PKMetalRendererController *)arg1 ;
-(BOOL)invertColors;
-(void)flushMemoryIfPossible;
-(void)resumePreviews;
-(void)suspendPreviews;
-(void)callbackAfterTileGeneration:(/*^block*/id)arg1 ;
-(void)renderTilesIntoTiles:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)renderStrokes:(id)arg1 additionalStrokes:(id)arg2 intoTile:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)strokes:(id)arg1 updateWithAdditionalStrokes:(id)arg2 ;
-(BOOL)previewsSuspended;
-(void)setPreviewsSuspended:(BOOL)arg1 ;
-(void)setPreviewQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

