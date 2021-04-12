/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIScreen, SBScreenFlash;


@protocol _SBScreenshotProvider <NSObject>
@property (nonatomic,readonly) UIScreen * screen; 
@property (nonatomic,readonly) SBScreenFlash * flasher; 
@required
-(UIScreen *)screen;
-(id)captureScreenshot;
-(SBScreenFlash *)flasher;

@end

