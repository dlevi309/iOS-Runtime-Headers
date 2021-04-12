/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
*/

#import <ProgressUI/ProgressUI-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CAContext, CALayer, CATextLayer, NSString;

@interface PUIProgressWindow : NSObject <CALayerDelegate> {

	BOOL _weCreatedTheContext;
	CAContext* _context;
	int _deviceClass;
	int _screenClass;
	int _productType;
	BOOL _isSecurityResearchDevice;
	CGSize _displaySize;
	CGSize _framebufferSize;
	CGSize _layerPositioningSize;
	float _displayScale;
	float _displayOrientation;
	BOOL _sideways;
	BOOL _renderWithIOSurface;
	id _framebufferListenerToken;
	float _currentProgress;
	CGImageRef _appleLogo;
	double _progressXDelta;
	double _progressYDelta;
	double _progressWidth;
	double _progressHeight;
	BOOL _forceInverted;
	BOOL _white;
	BOOL _showsProgressBar;
	CALayer* _progressLayer;
	CATextLayer* _statusTextLayer;
	IOSurfaceRef _ioSurface;
	CALayer* _ioSurfaceLayer;
	CALayer* _layer;

}

@property (nonatomic,readonly) CALayer * layer;                     //@synthesize layer=_layer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_usesPreBoardAppearance;
+(void)setUsesPreBoardAppearance;
-(CALayer *)layer;
-(id)init;
-(const char*)_appleTVProductSuffix;
-(void)setVisible:(BOOL)arg1 ;
-(void)_collectDisplayInfo;
-(void)_updateLayerForFramebufferSize:(CGSize)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 contextLevel:(float)arg2 appearance:(long long)arg3 ;
-(CGImageRef)_createImageWithName:(const char*)arg1 scale:(int)arg2 displayHeight:(int)arg3 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 createContext:(BOOL)arg2 contextLevel:(float)arg3 appearance:(long long)arg4 ;
-(BOOL)_isNano;
-(void)_layoutScreen;
-(int)_nanoMaterial;
-(id)initWithProgressBarVisibility:(BOOL)arg1 ;
-(void)setProgressValue:(float)arg1 ;
-(unsigned long long)_nanoDeviceType;
-(id)initWithProgressBarVisibility:(BOOL)arg1 level:(float)arg2 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 level:(float)arg2 forceInverted:(BOOL)arg3 ;
-(void)_createLayer;
-(id)initWithProgressBarVisibility:(BOOL)arg1 context:(id)arg2 ;
-(void)_drawProgressLayerInContext:(CGContextRef)arg1 ;
-(const char*)_productSuffix;
-(void)_createContext;
-(void)dealloc;
-(void)_updateIOSurface;
-(void)setStatusText:(id)arg1 ;
-(id)initWithForceInverted:(BOOL)arg1 ;
@end

