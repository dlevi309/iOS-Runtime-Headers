/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
*/

#import <CoreAudioKit/CoreAudioKit-Structs.h>
#import <UIKitCore/UIButton.h>

@interface CAUITransportButton : UIButton {

	int drawingStyle;
	CGColorRef fillColor;
	CGRect imageRect;

}

@property (assign) int drawingStyle; 
@property (assign) CGColorRef fillColor; 
+(Class)layerClass;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)flash;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGColorRef)fillColor;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)setDrawingStyle:(int)arg1 ;
-(int)drawingStyle;
-(CGPathRef)newPathRefForStyle:(int)arg1 ;
@end

