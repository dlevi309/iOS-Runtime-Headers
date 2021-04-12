/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@class ISImage, NSData, ISColor;

@interface ISGraphicsContext : NSObject {

	CGContextRef _cgContext;
	unsigned long long _preset;

}

@property (nonatomic,readonly) unsigned long long preset;              //@synthesize preset=_preset - In the implementation block
@property (nonatomic,readonly) CGContextRef cgContext;                 //@synthesize cgContext=_cgContext - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) ISImage * image; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,retain) ISColor * fillColor; 
@property (nonatomic,retain) ISColor * strokeColor; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) CGAffineTransform transform; 
+(id)bitmapContextWithSize:(CGSize)arg1 scale:(double)arg2 preset:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)clear;
-(NSData *)data;
-(CGAffineTransform)transform;
-(double)scale;
-(CGRect)bounds;
-(ISImage *)image;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(ISColor *)fillColor;
-(void)setFillColor:(ISColor *)arg1 ;
-(void)setStrokeColor:(ISColor *)arg1 ;
-(void)fillRect:(CGRect)arg1 ;
-(void)strokeRect:(CGRect)arg1 ;
-(ISColor *)strokeColor;
-(unsigned long long)preset;
-(void)drawCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(void)pushState;
-(void)clipToMaskCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(void)popState;
-(id)initWithCGContext:(CGContextRef)arg1 preset:(unsigned long long)arg2 ;
-(CGContextRef)cgContext;
-(void)strokePath:(CGPathRef)arg1 ;
-(void)fillPath:(CGPathRef)arg1 ;
@end

