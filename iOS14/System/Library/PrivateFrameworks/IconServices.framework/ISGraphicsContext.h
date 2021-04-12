/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(ISColor *)arg1 ;
-(ISColor *)strokeColor;
-(void)clear;
-(double)lineWidth;
-(void)popState;
-(CGRect)bounds;
-(void)strokePath:(CGPathRef)arg1 ;
-(ISColor *)fillColor;
-(id)initWithCGContext:(CGContextRef)arg1 preset:(unsigned long long)arg2 ;
-(double)scale;
-(void)pushState;
-(void)strokeRect:(CGRect)arg1 ;
-(void)fillRect:(CGRect)arg1 ;
-(ISImage *)image;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(CGContextRef)cgContext;
-(NSData *)data;
-(void)fillPath:(CGPathRef)arg1 ;
-(void)drawCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(void)setStrokeColor:(ISColor *)arg1 ;
-(unsigned long long)preset;
-(void)clipToMaskCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(void)dealloc;
@end

