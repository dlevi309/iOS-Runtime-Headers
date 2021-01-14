/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/_SBScreenshotProvider.h>

@class UIScreen, SBScreenFlash, NSString;

@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider> {

	UIScreen* _screen;
	SBScreenFlash* _flasher;

}

@property (nonatomic,readonly) UIScreen * screen;                    //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) SBScreenFlash * flasher;              //@synthesize flasher=_flasher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithScreen:(id)arg1 ;
-(id)captureScreenshot;
-(SBScreenFlash *)flasher;
-(UIScreen *)screen;
@end

