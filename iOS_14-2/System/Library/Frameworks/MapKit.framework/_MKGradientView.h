/*
* Generated on Thursday, January 14, 2021 at 2:22:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)gradientLocations;
-(void)setGradientLocations:(NSArray *)arg1 ;
-(CGPoint)gradientEndPoint;
-(void)setGradientEndPoint:(CGPoint)arg1 ;
-(CGPoint)gradientStartPoint;
-(void)setGradientStartPoint:(CGPoint)arg1 ;
-(NSString *)gradientType;
-(void)setGradientType:(NSString *)arg1 ;
-(NSArray *)gradientColors;
-(void)setGradientColors:(NSArray *)arg1 ;
@end

