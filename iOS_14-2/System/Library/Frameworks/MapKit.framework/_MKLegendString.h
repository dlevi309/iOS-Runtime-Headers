/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSAttributedString;

@interface _MKLegendString : CALayer {

	CTLineRef _line;
	double _baselineDistanceFromBottom;
	NSAttributedString* _string;

}

@property (nonatomic,retain) NSAttributedString * string;                      //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) double baselineDistanceFromBottom;              //@synthesize baselineDistanceFromBottom=_baselineDistanceFromBottom - In the implementation block
-(id)init;
-(id)actionForKey:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(double)baselineDistanceFromBottom;
-(NSAttributedString *)string;
-(void)sizeToFit;
-(void)setString:(NSAttributedString *)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)dealloc;
@end

