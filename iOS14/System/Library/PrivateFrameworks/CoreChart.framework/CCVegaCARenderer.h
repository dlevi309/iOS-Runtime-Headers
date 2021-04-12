/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <CoreChart/CoreChart-Structs.h>
#import <libobjc.A.dylib/CCVegaCARendererDelegateInterface.h>

@class CCVegaRenderer, NSDictionary, CALayer, NSMutableDictionary, CCVegaAccessibilityHelper, JSContext, NSString, NSArray, JSManagedValue;

@interface CCVegaCARenderer : NSObject <CCVegaCARendererDelegateInterface> {

	CCVegaRenderer* _renderer;
	BOOL _updateFromBackground;
	NSDictionary* _marks;
	CALayer* _rootLayer;
	CALayer* _contentLayer;
	BOOL _initialized;
	double _width;
	double _height;
	CGSize _containerSize;
	double _originX;
	double _originY;
	BOOL _dirty;
	BOOL _dirtyAll;
	BOOL _pendingUpdate;
	BOOL _pendingUpdateDirtyAll;
	NSMutableDictionary* _imageCache;
	CCVegaAccessibilityHelper* _accessibilityHelper;
	CGPoint _currentTranslate;
	JSContext* context;
	NSString* backgroundColor;
	double pixelRatio;
	double zoomFactor;
	NSArray* accessibilityElements;
	JSManagedValue* scenegraphRoot;
	CGSize containerSize;

}

@property (__weak) JSContext * context; 
@property (__weak) CALayer * rootLayer; 
@property (assign) CGSize containerSize; 
@property (retain) NSArray * accessibilityElements; 
@property (retain) JSManagedValue * scenegraphRoot; 
@property (readonly) CGAffineTransform _currentCombinedCTM; 
@property (retain) NSString * backgroundColor; 
@property (assign) double pixelRatio; 
@property (assign) double zoomFactor; 
-(void)setContainerSize:(CGSize)arg1 ;
-(void)dirty;
-(CALayer *)rootLayer;
-(id)marks;
-(NSArray *)accessibilityElements;
-(JSContext *)context;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(double)zoomFactor;
-(double)pixelRatio;
-(void)setPixelRatio:(double)arg1 ;
-(void)invalidateCaches;
-(NSString *)backgroundColor;
-(CGSize)containerSize;
-(void)render:(id)arg1 ;
-(void)setZoomFactor:(double)arg1 ;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setContext:(JSContext *)arg1 ;
-(void)setRootLayer:(CALayer *)arg1 ;
-(CGColorRef)newColorFromCSSString:(id)arg1 alpha:(double)arg2 ;
-(CGColorRef)newColorFromCSSString:(id)arg1 ;
-(id)fontOptions;
-(CGAffineTransform)_currentCombinedCTM;
-(CGImageRef)newImageFromURL:(id)arg1 ;
-(void)setScenegraphRoot:(JSManagedValue *)arg1 ;
-(JSManagedValue *)scenegraphRoot;
-(void)updateCALayers:(id)arg1 dirtyAll:(BOOL)arg2 ;
-(void)drawMark:(id)arg1 parentGroup:(id)arg2 into:(id)arg3 dirtyAll:(BOOL)arg4 ;
-(void)callFromJSFunction:(/*^block*/id)arg1 ;
-(id)compositingFilterForItem:(id)arg1 ;
-(void)applyClip:(id)arg1 onLayer:(id)arg2 ;
-(id)drawMark:(id)arg1 parentGroup:(id)arg2 item:(id)arg3 into:(id)arg4 dirtyAll:(BOOL)arg5 ;
-(id)initWithRenderer:(id)arg1 context:(id)arg2 rootLayer:(id)arg3 updateFromBackground:(BOOL)arg4 ;
-(void)dirtyAll;
-(void)updateCALayers;
-(void)resizeWidth:(double)arg1 height:(double)arg2 originX:(double)arg3 originY:(double)arg4 ;
@end

