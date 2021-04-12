/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIScreen, SBScreenFlash;


@protocol _SBScreenshotProvider <NSObject>
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) SBScreenFlash * flasher; 
@required
-(id)captureScreenshot;
-(SBScreenFlash *)flasher;
-(UIScreen *)screen;

@end

