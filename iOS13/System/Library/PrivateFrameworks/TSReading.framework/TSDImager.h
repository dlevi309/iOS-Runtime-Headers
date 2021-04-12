/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDCanvasDelegate.h>

@class NSArray, TSKDocumentRoot, TSDCanvas, NSString;

@interface TSDImager : NSObject <TSDCanvasDelegate> {

	NSArray* mInfos;
	CGColorRef mBackgroundColor;
	CGRect mUnscaledClipRect;
	double mViewScale;
	CGSize mScaledImageSize;
	CGSize mMaximumScaledImageSize;
	BOOL mUseScaledImageSize;
	BOOL mDistortedToMatch;
	BOOL mImageMustHaveEvenDimensions;
	BOOL mShouldReuseBitmapContext;
	UIEdgeInsets mContentInset;
	TSKDocumentRoot* mDocumentRoot;
	TSDCanvas* mCanvas;
	CGRect mActualScaledClipRect;
	BOOL mDrawingIntoPDF;
	BOOL mIsPrinting;
	CGContextRef mReusableBitmapContext;
	CGRect mReusableBounds;
	CGRect mReusableIntegralBounds;
	CGRect mReusableActualScaledClipRect;
	CGSize mReusableScaledImageSize;
	/*^block*/id mPostRenderAction;

}

@property (nonatomic,retain) NSArray * infos; 
@property (assign,nonatomic) CGColorRef backgroundColor; 
@property (assign,nonatomic) CGRect unscaledClipRect; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) CGSize scaledImageSize; 
@property (assign,nonatomic) CGSize maximumScaledImageSize; 
@property (assign,nonatomic) BOOL distortedToMatch; 
@property (assign,nonatomic) BOOL imageMustHaveEvenDimensions; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) CGRect actualScaledClipRect; 
@property (assign,nonatomic) BOOL shouldReuseBitmapContext; 
@property (assign,nonatomic) BOOL isPrinting; 
@property (nonatomic,readonly) TSDCanvas * canvas; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(CGColorRef)backgroundColor;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(id)pdfData;
-(TSDCanvas *)canvas;
-(NSArray *)infos;
-(void)setInfos:(NSArray *)arg1 ;
-(id)documentRoot;
-(BOOL)isPrintingCanvas;
-(double)viewScale;
-(BOOL)isPrinting;
-(id)initWithDocumentRoot:(id)arg1 ;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg1 ;
-(BOOL)p_configureCanvas;
-(BOOL)shouldReuseBitmapContext;
-(CGImageRef)p_newImageInReusableContext;
-(void)p_drawPageInContext:(CGContextRef)arg1 createPage:(BOOL)arg2 ;
-(void)setPostRenderAction:(/*^block*/id)arg1 ;
-(CGSize)scaledImageSize;
-(void)setScaledImageSize:(CGSize)arg1 ;
-(CGSize)maximumScaledImageSize;
-(void)setMaximumScaledImageSize:(CGSize)arg1 ;
-(CGImageRef)newImage;
-(BOOL)drawPageInContext:(CGContextRef)arg1 createPage:(BOOL)arg2 ;
-(CGRect)unscaledClipRect;
-(void)setUnscaledClipRect:(CGRect)arg1 ;
-(CGRect)actualScaledClipRect;
-(BOOL)distortedToMatch;
-(void)setDistortedToMatch:(BOOL)arg1 ;
-(BOOL)imageMustHaveEvenDimensions;
-(void)setImageMustHaveEvenDimensions:(BOOL)arg1 ;
-(void)setShouldReuseBitmapContext:(BOOL)arg1 ;
-(void)setIsPrinting:(BOOL)arg1 ;
@end

