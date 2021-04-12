/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <Foundation/NSOperation.h>

@protocol TSSPreset;
@class UIView, NSObject, TSKDocumentRoot, NSString;

@interface TSDSwatchRenderingOperation : NSOperation {

	UIView* mView;
	NSObject*<TSSPreset> mPreset;
	CGSize mImageSize;
	double mImageScale;
	CGRect mSwatchFrame;
	TSKDocumentRoot* mDocumentRoot;
	CGImageRef mDeliveredImage;
	unsigned long long mInsertPopoverPageType;
	unsigned long long mInsertPopoverPageNumber;
	NSString* mIdentifier;

}

@property (retain) UIView * view; 
@property (readonly) NSObject*<TSSPreset> preset; 
@property (readonly) CGSize imageSize; 
@property (readonly) double imageScale; 
@property (readonly) CGRect swatchFrame; 
@property (assign) unsigned long long insertPopoverPageType; 
@property (assign) unsigned long long insertPopoverPageNumber; 
@property (copy) NSString * identifier; 
@property (nonatomic,readonly) CGImageRef deliveredImage; 
-(void)dealloc;
-(NSString *)identifier;
-(void)main;
-(void)setIdentifier:(NSString *)arg1 ;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(CGSize)imageSize;
-(double)imageScale;
-(NSObject*<TSSPreset>)preset;
-(UIEdgeInsets)swatchEdgeInsets;
-(BOOL)needsPressedStateBackground;
-(void)p_animateSwatchIn;
-(CGImageRef)p_newSwatchPressedStateBackgroundFromCGImage:(CGImageRef)arg1 ;
-(void)p_deliverResultOnMainThread:(id)arg1 ;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 documentRoot:(id)arg5 ;
-(void)deliverCGImage:(CGImageRef)arg1 ;
-(CGImageRef)deliveredImage;
-(CGRect)swatchFrame;
-(unsigned long long)insertPopoverPageType;
-(void)setInsertPopoverPageType:(unsigned long long)arg1 ;
-(unsigned long long)insertPopoverPageNumber;
-(void)setInsertPopoverPageNumber:(unsigned long long)arg1 ;
@end

