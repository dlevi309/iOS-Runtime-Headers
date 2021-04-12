/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISImage.h>

@class ISImage;

@interface ISPlaceholderImage : ISImage {

	ISImage* _image;

}

@property (readonly) ISImage * image;              //@synthesize image=_image - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(ISImage *)image;
-(CGSize)minimumSize;
-(BOOL)placeholder;
-(CGImageRef)cgImage;
@end

