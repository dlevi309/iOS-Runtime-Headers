/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSAttributedString *)string;
-(void)dealloc;
-(void)setString:(NSAttributedString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)sizeToFit;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)actionForKey:(id)arg1 ;
-(double)baselineDistanceFromBottom;
@end

