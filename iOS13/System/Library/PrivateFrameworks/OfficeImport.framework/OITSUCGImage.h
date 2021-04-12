/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OITSUImage.h>

@interface OITSUCGImage : OITSUImage {

	CGImageRef mCGImage;
	long long mOrientation;
	double mScale;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(double)scale;
-(long long)imageOrientation;
-(CGImageRef)CGImage;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 orientation:(long long)arg3 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end

