/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class UIImage, UIScreen;

@interface SSScreenSnapshot : NSObject {

	UIImage* _image;
	UIScreen* _screen;

}

@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) UIScreen * screen; 
+(id)snapshotWithImage:(id)arg1 fromScreen:(id)arg2 ;
-(UIScreen *)screen;
-(UIImage *)image;
@end

