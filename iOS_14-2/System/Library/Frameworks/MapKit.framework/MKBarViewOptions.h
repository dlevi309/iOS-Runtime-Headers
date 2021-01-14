/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface MKBarViewOptions : NSObject <NSCopying> {

	NSArray* _fillColors;
	NSArray* _gradientStops;
	UIColor* _backgroundColor;
	double _thickness;
	double _currentAmount;
	double _totalAmount;

}

@property (nonatomic,copy) NSArray * fillColors;                   //@synthesize fillColors=_fillColors - In the implementation block
@property (nonatomic,copy) NSArray * gradientStops;                //@synthesize gradientStops=_gradientStops - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double thickness;                     //@synthesize thickness=_thickness - In the implementation block
@property (assign,nonatomic) double currentAmount;                 //@synthesize currentAmount=_currentAmount - In the implementation block
@property (assign,nonatomic) double totalAmount;                   //@synthesize totalAmount=_totalAmount - In the implementation block
-(id)init;
-(double)thickness;
-(void)setThickness:(double)arg1 ;
-(void)setCurrentAmount:(double)arg1 ;
-(void)setFillColors:(NSArray *)arg1 ;
-(void)setGradientStops:(NSArray *)arg1 ;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(NSArray *)gradientStops;
-(NSArray *)fillColors;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)currentAmount;
-(double)totalAmount;
-(BOOL)isEqual:(id)arg1 ;
-(void)setTotalAmount:(double)arg1 ;
@end

