/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class UIScreen;

@interface SSScreenSnapshotter : NSObject {

	UIScreen* _screen;

}

@property (nonatomic,readonly) UIScreen * screen;              //@synthesize screen=_screen - In the implementation block
+(id)snapshotterForScreen:(id)arg1 ;
-(id)takeScreenshot;
-(id)initWithScreen:(id)arg1 ;
-(UIScreen *)screen;
@end

