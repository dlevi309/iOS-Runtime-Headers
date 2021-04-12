/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
*/


#import <vCard/vCard-Structs.h>
@interface CGImageRefWithFormat : NSObject {

	CGImageRef _imageRef;
	CFStringRef _sourceImageFormatUTI;

}

@property (nonatomic,readonly) CGImageRef imageRef;                           //@synthesize imageRef=_imageRef - In the implementation block
@property (nonatomic,readonly) CFStringRef sourceImageFormatUTI;              //@synthesize sourceImageFormatUTI=_sourceImageFormatUTI - In the implementation block
-(CGImageRef)imageRef;
-(id)initWithImage:(CGImageRef)arg1 andFormat:(CFStringRef)arg2 ;
-(CFStringRef)sourceImageFormatUTI;
@end

