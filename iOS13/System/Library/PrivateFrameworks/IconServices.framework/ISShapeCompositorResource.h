/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <libobjc.A.dylib/ISScalableCompositorResource.h>

@class ISColor, NSString;

@interface ISShapeCompositorResource : NSObject <ISScalableCompositorResource> {

	ISColor* _fillColor;
	ISColor* _lineColor;
	double _lineWidth;

}

@property (retain) ISColor * fillColor;                             //@synthesize fillColor=_fillColor - In the implementation block
@property (retain) ISColor * lineColor;                             //@synthesize lineColor=_lineColor - In the implementation block
@property (assign) double lineWidth;                                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)continuousRoundedRectShape;
+(id)circleShape;
+(double)continuousCornerRadiusForSize:(CGSize)arg1 ;
-(id)_init;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(ISColor *)fillColor;
-(void)setFillColor:(ISColor *)arg1 ;
-(void)setLineColor:(ISColor *)arg1 ;
-(ISColor *)lineColor;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
@end

