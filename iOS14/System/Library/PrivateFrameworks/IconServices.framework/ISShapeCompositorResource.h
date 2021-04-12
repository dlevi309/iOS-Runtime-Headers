/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLineWidth:(double)arg1 ;
-(void)setFillColor:(ISColor *)arg1 ;
-(double)lineWidth;
-(id)imageForSize:(CGSize)arg1 scale:(double)arg2 ;
-(ISColor *)fillColor;
-(ISColor *)lineColor;
-(void)setLineColor:(ISColor *)arg1 ;
-(id)_init;
@end

