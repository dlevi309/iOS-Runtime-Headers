/*
* Generated on Monday, March 1, 2021 at 2:33:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class UIImage, NSString;

@interface _SSScreenCaptureResults : NSObject {

	UIImage* _image;
	NSString* _failureReasonIfImageIsNil;

}

@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * failureReasonIfImageIsNil;              //@synthesize failureReasonIfImageIsNil=_failureReasonIfImageIsNil - In the implementation block
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setFailureReasonIfImageIsNil:(NSString *)arg1 ;
-(NSString *)failureReasonIfImageIsNil;
@end

