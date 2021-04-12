/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <TSUtility/TSUtility-Structs.h>
#import <TSUtility/TSUImage.h>

@class UIImage;

@interface TSUUIImage : TSUImage {

	UIImage* mUIImage;

}
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
-(long long)imageOrientation;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)UIImage;
-(CGSize)size;
-(double)scale;
-(id)initWithData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(void)dealloc;
-(id)initWithUIImage:(id)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end

