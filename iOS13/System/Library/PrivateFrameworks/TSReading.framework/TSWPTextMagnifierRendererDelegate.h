/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class NSString;


@protocol TSWPTextMagnifierRendererDelegate
@property (nonatomic,readonly) NSString * underlayImageName; 
@property (nonatomic,readonly) NSString * overlayImageName; 
@property (nonatomic,readonly) NSString * maskImageName; 
@required
-(void)drawMagnifierClippedCanvasLayer:(id)arg1 inContext:(CGContextRef)arg2;
-(BOOL)shouldHideCanvasLayer;
-(NSString *)underlayImageName;
-(NSString *)overlayImageName;
-(NSString *)maskImageName;

@end

