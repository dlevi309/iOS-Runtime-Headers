/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
@end

