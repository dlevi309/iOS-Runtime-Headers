/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <libobjc.A.dylib/ISEffect.h>

@class ISColor, NSString;

@interface ISBorderEffect : NSObject <ISEffect> {

	ISColor* _color;
	double _lineWidth;

}

@property (retain) ISColor * color;                                 //@synthesize color=_color - In the implementation block
@property (assign) double lineWidth;                                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ISColor *)color;
-(void)setColor:(ISColor *)arg1 ;
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2 ;
-(id)initWithLineWidth:(double)arg1 color:(id)arg2 ;
@end

