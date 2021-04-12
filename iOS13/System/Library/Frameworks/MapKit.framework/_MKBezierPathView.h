/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor;

@interface _MKBezierPathView : UIView {

	UIColor* _fillColor;
	UIColor* _strokeColor;

}
+(Class)layerClass;
+(id)_pathForBalloonRadius:(double)arg1 tailLength:(double)arg2 ;
-(void)setPath:(id)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 width:(double)arg2 ;
-(id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2 ;
-(id)initWithOvalInSize:(CGSize)arg1 ;
@end

