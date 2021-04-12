/*
* Generated on Monday, March 1, 2021 at 2:34:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
*/

#import <QuickLookThumbnailing/QLThumbnailRequestOperation.h>

@class UIImage, NSError;

@interface QLTThumbnailOperation : QLThumbnailRequestOperation {

	UIImage* _image;
	NSError* _error;
	/*^block*/id _needsAdditionalTime;

}

@property (readonly) UIImage * image;                 //@synthesize image=_image - In the implementation block
@property (readonly) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (copy) id needsAdditionalTime;              //@synthesize needsAdditionalTime=_needsAdditionalTime - In the implementation block
-(NSError *)error;
-(UIImage *)image;
-(id)needsAdditionalTime;
-(void)setNeedsAdditionalTime:(id)arg1 ;
@end

