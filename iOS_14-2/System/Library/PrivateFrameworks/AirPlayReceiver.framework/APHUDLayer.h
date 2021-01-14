/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
*/

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <QuartzCore/CALayer.h>

@interface APHUDLayer : CALayer {

	CTFontRef _Font;
	CFDictionaryRef _TextAttributes;
	CFArrayRef _Labels;
	CFArrayRef _Values;
	CFArrayRef _Colors;

}
-(id)init;
-(void)addLine:(CFStringRef)arg1 withColorIndex:(int)arg2 ;
-(void)setValueAtIndex:(int)arg1 format:(id)arg2 ;
-(void)setValue:(CFStringRef)arg1 atIndex:(int)arg2 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)dealloc;
@end

