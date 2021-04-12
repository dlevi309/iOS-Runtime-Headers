/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CALayer, TSUImage, NSString;

@interface TSKHighlightController : NSObject <CALayerDelegate> {

	CALayer* _imageLayer;
	TSUImage* _image;
	CGRect _overallRect;
	CGAffineTransform _canvasTransform;
	CGAffineTransform _layerTransform;
	CALayer* _containingLayer;
	double _viewScale;
	CGPathRef _path;

}

@property (nonatomic,retain) TSUImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) CGAffineTransform transform; 
@property (assign,nonatomic) double viewScale;                         //@synthesize viewScale=_viewScale - In the implementation block
@property (nonatomic,readonly) CALayer * layer;                        //@synthesize containingLayer=_containingLayer - In the implementation block
@property (assign,nonatomic) CGPathRef path;                           //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGAffineTransform)transform;
-(CGPathRef)path;
-(void)setPath:(CGPathRef)arg1 ;
-(void)reset;
-(void)disconnect;
-(TSUImage *)image;
-(void)setImage:(TSUImage *)arg1 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(CALayer *)layer;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(void)hide;
-(BOOL)drawRoundedRect;
-(double)viewScale;
-(void)createLayerWithZOrder:(double)arg1 contentsScaleForLayers:(double)arg2 ;
-(CGRect)buildLayersForPath:(CGPathRef)arg1 withImage:(id)arg2 ;
-(void)setCanvasTransform:(CGAffineTransform)arg1 layerTransform:(CGAffineTransform)arg2 ;
@end

