/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIImage *)image;
-(UIScreen *)screen;
@end

