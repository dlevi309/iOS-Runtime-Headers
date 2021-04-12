/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIColor.h>

@class CIColor, UIColor;

@interface UICIColor : UIColor {

	CIColor* _ciColor;
	UIColor* _rgbColor;

}
-(CGColorRef)CGColor;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(void)setFill;
-(id)CIColor;
-(id)_rgbColor;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(id)initWithCIColor:(id)arg1 ;
-(id)description;
-(void)setStroke;
-(unsigned long long)hash;
-(void)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

