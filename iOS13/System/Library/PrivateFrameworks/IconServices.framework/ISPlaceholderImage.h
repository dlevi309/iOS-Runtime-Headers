/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISImage.h>

@class ISImage;

@interface ISPlaceholderImage : ISImage {

	ISImage* _image;

}

@property (readonly) ISImage * image;              //@synthesize image=_image - In the implementation block
-(CGSize)size;
-(double)scale;
-(ISImage *)image;
-(id)initWithImage:(id)arg1 ;
-(CGSize)minimumSize;
-(BOOL)placeholder;
-(CGImageRef)cgImage;
@end

