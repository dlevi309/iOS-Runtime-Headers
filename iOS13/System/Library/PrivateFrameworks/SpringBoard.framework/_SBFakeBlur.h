/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol _SBFakeBlur <NSObject>
@property (assign,nonatomic,__weak) id<_SBFakeBlurObserver> observer; 
@property (assign,nonatomic) double zoomScale; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@required
-(id<_SBFakeBlurObserver>)observer;
-(void)setObserver:(id)arg1;
-(void)requestStyle:(long long)arg1;
-(BOOL)isFullscreen;
-(void)setZoomScale:(double)arg1;
-(double)zoomScale;
-(void)setFullscreen:(BOOL)arg1;
-(void)setTransformOptions:(unsigned long long)arg1;
-(unsigned long long)transformOptions;
-(long long)effectiveStyle;
-(void)offsetWallpaperBy:(CGPoint)arg1;

@end

