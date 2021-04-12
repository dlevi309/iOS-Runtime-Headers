/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MKOverlayPathRenderer.h>

@class VKVectorOverlayCircle, MKCircle;

@interface MKCircleRenderer : MKOverlayPathRenderer {

	VKVectorOverlayCircle* _vectorData;

}

@property (nonatomic,readonly) MKCircle * circle; 
+(Class)_mapkitLeafClass;
-(void)setLineWidth:(double)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(id)initWithCircle:(id)arg1 ;
-(MKCircle *)circle;
-(void)createPath;
-(void)_updateRenderColors;
-(BOOL)overlayCanProvideVectorData:(id)arg1 ;
-(id)vectorDataForOverlay:(id)arg1 ;
-(BOOL)_canProvideVectorGeometry;
-(id)_vectorData;
@end

