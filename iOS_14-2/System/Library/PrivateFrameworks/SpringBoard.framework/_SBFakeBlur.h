/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol _SBFakeBlur <NSObject>
@property (assign,nonatomic,__weak) id<_SBFakeBlurObserver> observer; 
@property (assign,nonatomic) double zoomScale; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) unsigned long long transformOptions; 
@required
-(void)offsetWallpaperBy:(CGPoint)arg1;
-(double)zoomScale;
-(BOOL)isFullscreen;
-(void)setFullscreen:(BOOL)arg1;
-(void)setZoomScale:(double)arg1;
-(void)setObserver:(id)arg1;
-(id<_SBFakeBlurObserver>)observer;
-(unsigned long long)transformOptions;
-(void)requestStyle:(long long)arg1;
-(void)setTransformOptions:(unsigned long long)arg1;
-(long long)effectiveStyle;

@end

