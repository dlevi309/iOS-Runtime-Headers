/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProgressUI.framework/ProgressUI
*/

#import <ProgressUI/ProgressUI-Structs.h>
#import <libobjc.A.dylib/CALayerDelegate.h>

@class CAContext, CALayer, NSString;

@interface PUIProgressWindow : NSObject <CALayerDelegate> {

	BOOL _weCreatedTheContext;
	CAContext* _context;
	int _deviceClass;
	int _screenClass;
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
	BOOL _forceInverted;
	BOOL _white;
	BOOL _showsProgressBar;
	CALayer* _progressLayer;
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
-(id)init;
-(void)dealloc;
-(void)setVisible:(BOOL)arg1 ;
-(CALayer *)layer;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 createContext:(BOOL)arg2 contextLevel:(float)arg3 appearance:(long long)arg4 ;
-(void)setProgressValue:(float)arg1 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 level:(float)arg2 forceInverted:(BOOL)arg3 ;
-(id)initWithOptions:(unsigned long long)arg1 contextLevel:(float)arg2 appearance:(long long)arg3 ;
-(void)_collectDisplayInfo;
-(void)_createContext;
-(void)_createLayer;
-(void)_updateLayerForFramebufferSize:(CGSize)arg1 ;
-(void)_layoutScreen;
-(void)_updateIOSurface;
-(unsigned long long)_nanoDeviceType;
-(CGImageRef)_createImageWithName:(const char*)arg1 scale:(int)arg2 displayHeight:(int)arg3 ;
-(BOOL)_isNano;
-(void)_drawProgressLayerInContext:(CGContextRef)arg1 ;
-(const char*)_productSuffix;
-(const char*)_appleTVProductSuffix;
-(id)initWithForceInverted:(BOOL)arg1 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 level:(float)arg2 ;
-(id)initWithProgressBarVisibility:(BOOL)arg1 context:(id)arg2 ;
-(int)_nanoMaterial;
@end

