/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLImageData : NSObject {

	CGImageSourceRef _imageSource;

}
-(CGSize)size;
-(unsigned long long)count;
-(id)imageAtIndex:(unsigned long long)arg1 ;
-(id)durations;
-(id)type;
-(long long)orientation;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(void)dealloc;
@end

