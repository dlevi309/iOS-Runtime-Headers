/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


#import <QuickLook/QuickLook-Structs.h>
@interface QLThumbnailDescriptor : NSObject {

	double _scaleFactor;
	CGSize _size;

}

@property (assign) CGSize size;                     //@synthesize size=_size - In the implementation block
@property (assign) double scaleFactor;              //@synthesize scaleFactor=_scaleFactor - In the implementation block
+(id)descriptorWithSize:(CGSize)arg1 scaleFactor:(double)arg2 ;
-(void)setScaleFactor:(double)arg1 ;
-(double)scaleFactor;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
@end

