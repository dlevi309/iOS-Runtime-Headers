/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CMDrawableMapper, NSMutableArray, NSAffineTransform;

@interface CMDrawingContext : NSObject {

	CMDrawableMapper* _mapper;
	NSMutableArray* _actions;
	CGRect _frame;
	CGRect _finalFrame;
	CFDataRef _data;
	CGDataConsumerRef _dataConsumer;
	CGContextRef _cgContext;
	NSAffineTransform* _currentTransform;
	NSMutableArray* _transforms;
	CGImageRef _fillImage;

}

@property (__weak) CMDrawableMapper * mapper;              //@synthesize mapper=_mapper - In the implementation block
-(void)dealloc;
-(CGRect)frame;
-(void)setLineWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)addPath:(CGPathRef)arg1 ;
-(void)setFillImage:(CGImageRef)arg1 ;
-(CMDrawableMapper *)mapper;
-(float)currentScaleFactor;
-(void)_applyTransform:(id)arg1 ;
-(CGContextRef)_cgContext;
-(void)addTransform:(id)arg1 ;
-(void)restoreLastTransform;
-(CGRect)transformRectToGroup:(CGRect)arg1 ;
-(CGRect)pdfFrame;
-(id)copyPDF;
-(void)_copyCGContext;
-(void)_playbackActions;
-(void)_closeContext;
-(void)_addTransform:(id)arg1 ;
-(void)_restoreLastTransform;
-(CGRect)_transformRect:(CGRect)arg1 withTransform:(id)arg2 ;
-(CGAffineTransform)currentTransform;
-(void)setLineDash:(id)arg1 ;
-(void)addDebugPath:(CGPathRef)arg1 ;
-(CGRect)transformRectToPage:(CGRect)arg1 ;
-(void)setMapper:(CMDrawableMapper *)arg1 ;
@end

