/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
*/


@class UIImage, NSString;

@interface _SSScreenCaptureResults : NSObject {

	UIImage* _image;
	NSString* _failureReasonIfImageIsNil;

}

@property (nonatomic,retain) UIImage * image;                                 //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * failureReasonIfImageIsNil;              //@synthesize failureReasonIfImageIsNil=_failureReasonIfImageIsNil - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)setFailureReasonIfImageIsNil:(NSString *)arg1 ;
-(NSString *)failureReasonIfImageIsNil;
@end

