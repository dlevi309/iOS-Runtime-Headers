/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(double)duration;
-(unsigned long long)frameCount;
-(id)initWithImageSource:(CGImageSourceRef)arg1 ;
-(void)generateDurations;
-(BOOL)time:(double)arg1 belongsToIndex:(unsigned long long)arg2 ;
-(long long)indexForTime:(double)arg1 ;
-(id)frameAtTime:(double)arg1 ;
@end

