/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUImage.h>

@class UIImage;

@interface TSUUIImage : TSUImage {

	UIImage* mUIImage;

}
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(CGSize)size;
-(double)scale;
-(long long)imageOrientation;
-(CGImageRef)CGImage;
-(id)UIImage;
-(id)initWithUIImage:(id)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end

