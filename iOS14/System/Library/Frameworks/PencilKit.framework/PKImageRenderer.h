/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


#import <PencilKit/PencilKit-Structs.h>
@class PKMetalRendererController;

@interface PKImageRenderer : NSObject {

	BOOL _synchronous;
	double _scale;
	PKMetalRendererController* _rendererController;
	long long _cancelCount;
	CGSize _size;

}

@property (nonatomic,retain) PKMetalRendererController * rendererController;              //@synthesize rendererController=_rendererController - In the implementation block
@property (assign,nonatomic) long long cancelCount;                                       //@synthesize cancelCount=_cancelCount - In the implementation block
@property (assign,nonatomic) BOOL synchronous;                                            //@synthesize synchronous=_synchronous - In the implementation block
@property (nonatomic,readonly) CGSize size;                                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                                              //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) BOOL invertColors; 
+(void)_fuzzTestUnzippedData:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(BOOL)synchronous;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)cancel;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)resume;
-(void)dealloc;
-(PKMetalRendererController *)rendererController;
-(void)setInvertColors:(BOOL)arg1 ;
-(void)setRendererController:(PKMetalRendererController *)arg1 ;
-(BOOL)invertColors;
-(void)renderDrawing:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initSyncWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)renderStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 scale:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 renderQueue:(id)arg3 ;
-(void)renderDrawing:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 scale:(double)arg3 completion:(/*^block*/id)arg4 ;
-(void)renderCGStrokes:(id)arg1 clippedToStrokeSpaceRect:(CGRect)arg2 scale:(double)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 useMetal:(BOOL)arg3 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 useMetal:(BOOL)arg3 renderQueue:(id)arg4 ;
-(void)buildStrokeRenderCacheForDrawing:(id)arg1 ;
-(long long)cancelCount;
-(void)setCancelCount:(long long)arg1 ;
@end

