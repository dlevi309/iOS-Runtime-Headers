/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUImage.h>

@interface TSUCGImage : TSUImage {

	CGImageRef mCGImage;
	long long mOrientation;
	double mScale;

}
-(long long)imageOrientation;
-(CGSize)size;
-(double)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(CGImageRef)CGImage;
-(void)dealloc;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end

