/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebSimpleLayer : CALayer {

	BOOL _isRenderingInContext;

}

@property (nonatomic,readonly) BOOL isRenderingInContext;              //@synthesize isRenderingInContext=_isRenderingInContext - In the implementation block
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(void)renderInContext:(CGContextRef)arg1 ;
-(void)setNeedsDisplay;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(void)display;
-(BOOL)isRenderingInContext;
@end

