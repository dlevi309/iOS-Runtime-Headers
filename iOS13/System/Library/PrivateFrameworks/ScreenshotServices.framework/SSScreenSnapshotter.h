/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class UIScreen;

@interface SSScreenSnapshotter : NSObject {

	UIScreen* _screen;

}

@property (nonatomic,readonly) UIScreen * screen;              //@synthesize screen=_screen - In the implementation block
+(id)snapshotterForScreen:(id)arg1 ;
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
-(id)takeScreenshot;
@end

