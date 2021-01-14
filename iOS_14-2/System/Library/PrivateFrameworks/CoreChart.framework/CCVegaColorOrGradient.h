/*
* Generated on Thursday, January 14, 2021 at 2:27:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
*/

#import <libobjc.A.dylib/CCVegaColorOrGradientInterface.h>

@class NSString, NSDictionary;

@interface CCVegaColorOrGradient : NSObject <CCVegaColorOrGradientInterface> {

	NSString* color;
	NSDictionary* gradient;

}

@property (retain) NSString * color; 
@property (retain) NSDictionary * gradient; 
@property (readonly) BOOL isGradient; 
@property (readonly) BOOL isColor; 
-(id)initWithJSValue:(id)arg1 ;
-(NSString *)color;
-(BOOL)isColor;
-(void)setColor:(NSString *)arg1 ;
-(void)setGradient:(NSDictionary *)arg1 ;
-(NSDictionary *)gradient;
-(BOOL)isGradient;
@end

