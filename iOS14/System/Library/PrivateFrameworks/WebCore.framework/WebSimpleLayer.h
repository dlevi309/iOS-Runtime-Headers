/*
* Generated on Thursday, January 14, 2021 at 2:21:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebSimpleLayer : CALayer {

	BOOL _isRenderingInContext;

}

@property (nonatomic,readonly) BOOL isRenderingInContext;              //@synthesize isRenderingInContext=_isRenderingInContext - In the implementation block
-(BOOL)isRenderingInContext;
-(void)setNeedsDisplay;
-(id)actionForKey:(id)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)display;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

