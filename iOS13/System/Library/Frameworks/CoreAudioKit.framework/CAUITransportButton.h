/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(CGColorRef)fillColor;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)flash;
-(void)setDrawingStyle:(int)arg1 ;
-(int)drawingStyle;
-(CGPathRef)newPathRefForStyle:(int)arg1 ;
@end

