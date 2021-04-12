/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIImage *)image;
-(NSError *)error;
-(id)needsAdditionalTime;
-(void)setNeedsAdditionalTime:(id)arg1 ;
@end

