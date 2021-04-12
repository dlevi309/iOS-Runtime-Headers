/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer, NSArray, NSString;

@interface _MKGradientView : UIView {

	CAGradientLayer* _gradient;

}

@property (copy) NSArray * gradientColors; 
@property (copy) NSArray * gradientLocations; 
@property (assign) CGPoint gradientEndPoint; 
@property (assign) CGPoint gradientStartPoint; 
@property (copy) NSString * gradientType; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setGradientColors:(NSArray *)arg1 ;
-(NSArray *)gradientColors;
-(NSArray *)gradientLocations;
-(void)setGradientLocations:(NSArray *)arg1 ;
-(CGPoint)gradientEndPoint;
-(void)setGradientEndPoint:(CGPoint)arg1 ;
-(CGPoint)gradientStartPoint;
-(void)setGradientStartPoint:(CGPoint)arg1 ;
-(NSString *)gradientType;
-(void)setGradientType:(NSString *)arg1 ;
@end

