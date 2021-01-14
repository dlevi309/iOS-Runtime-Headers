/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class NSURL, NSData;

@interface VNImageSourceManager : NSObject {

	os_unfair_lock_s _getOrientationLock;
	os_unfair_lock_s _loadSubSample1Lock;
	os_unfair_lock_s _loadSubSample2Lock;
	os_unfair_lock_s _loadSubSample4Lock;
	os_unfair_lock_s _loadSubSample8Lock;
	CGImageSourceRef _imageSourceSubsample1;
	CGImageSourceRef _imageSourceSubsample2;
	CGImageSourceRef _imageSourceSubsample4;
	CGImageSourceRef _imageSourceSubsample8;
	NSURL* _imageURL;
	NSData* _imageData;
	unsigned _orientation;

}
-(id)initWithImageURL:(id)arg1 ;
-(CGImageSourceRef)_obtainCreatedCGImageSourceRefAtAddress:(CGImageSource*)arg1 forSubSampleFactor:(unsigned)arg2 protectedWithUnfairLock:(os_unfair_lock_s*)arg3 operatingInLowPriority:(BOOL)arg4 ;
-(CGImageSourceRef)obtainImageSourceRef;
-(CGImageSourceRef)obtainImageSourceRefWithSubSampleFactor:(unsigned)arg1 andLowPriorityHint:(BOOL)arg2 ;
-(unsigned)exifOrientation;
-(id)initWithImageData:(id)arg1 ;
-(id)imageData;
-(id)imageURL;
-(void)dealloc;
@end

