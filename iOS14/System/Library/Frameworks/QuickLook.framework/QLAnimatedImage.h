/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


#import <QuickLook/QuickLook-Structs.h>
@class QLImageData, UIImage;

@interface QLAnimatedImage : NSObject {

	QLImageData* _imageData;
	unsigned long long _durationsCount;
	QLFrameDurationInformation* _durations;
	double _duration;
	UIImage* _lastImage;
	unsigned long long _lastImageIndex;

}
-(unsigned long long)frameCount;
-(void)generateDurations;
-(BOOL)time:(double)arg1 belongsToIndex:(unsigned long long)arg2 ;
-(long long)indexForTime:(double)arg1 ;
-(id)frameAtTime:(double)arg1 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(double)duration;
-(void)dealloc;
@end

