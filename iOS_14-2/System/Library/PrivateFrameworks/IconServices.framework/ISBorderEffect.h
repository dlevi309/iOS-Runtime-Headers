/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLineWidth:(double)arg1 ;
-(double)lineWidth;
-(ISColor *)color;
-(id)initWithLineWidth:(double)arg1 color:(id)arg2 ;
-(void)setColor:(ISColor *)arg1 ;
-(id)filterWithBackgroundImage:(id)arg1 inputImage:(id)arg2 ;
@end

