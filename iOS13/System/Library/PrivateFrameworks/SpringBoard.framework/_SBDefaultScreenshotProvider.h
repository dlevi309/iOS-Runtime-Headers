/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/_SBScreenshotProvider.h>

@class UIScreen, SBScreenFlash, NSString;

@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider> {

	UIScreen* _screen;
	SBScreenFlash* _flasher;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScreen * screen;                    //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) SBScreenFlash * flasher;              //@synthesize flasher=_flasher - In the implementation block
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
-(id)captureScreenshot;
-(SBScreenFlash *)flasher;
@end

