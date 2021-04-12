/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIGraphicsRendererFormat;

@interface UIGraphicsRendererContext : NSObject {

	CGContextRef _backingContext;
	UIGraphicsRendererFormat* _format;
	BOOL ___createsImages;

}

@property (assign,nonatomic) BOOL __createsImages;                             //@synthesize __createsImages=___createsImages - In the implementation block
@property (nonatomic,readonly) CGContextRef CGContext; 
@property (nonatomic,readonly) UIGraphicsRendererFormat * format;              //@synthesize format=_format - In the implementation block
-(UIGraphicsRendererFormat *)format;
-(BOOL)__createsImages;
-(CGContextRef)CGContext;
-(void)clipToRect:(CGRect)arg1 ;
-(id)initWithCGContext:(CGContextRef)arg1 format:(id)arg2 ;
-(void)strokeRect:(CGRect)arg1 ;
-(void)fillRect:(CGRect)arg1 ;
-(void)set__createsImages:(BOOL)arg1 ;
-(void)strokeRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(void)fillRect:(CGRect)arg1 blendMode:(int)arg2 ;
-(void)dealloc;
@end

