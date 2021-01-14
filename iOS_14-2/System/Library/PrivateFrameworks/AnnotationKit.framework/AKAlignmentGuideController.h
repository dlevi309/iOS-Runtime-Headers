/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


#import <AnnotationKit/AnnotationKit-Structs.h>
@class AKPageController;

@interface AKAlignmentGuideController : NSObject {

	CGPoint _initialDraggedAnnotationsCombinedCenter;
	CGPoint* _otherAnnotationCenters;
	unsigned long long _otherAnnotationCentersCount;
	BOOL _exifHasFlippedAxes;
	AKPageController* _pageController;
	double _screenToModelScaleFactor;

}

@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
@property (assign) BOOL exifHasFlippedAxes;                        //@synthesize exifHasFlippedAxes=_exifHasFlippedAxes - In the implementation block
@property (assign) double screenToModelScaleFactor;                //@synthesize screenToModelScaleFactor=_screenToModelScaleFactor - In the implementation block
-(AKPageController *)pageController;
-(id)initWithPageController:(id)arg1 ;
-(void)setPageController:(AKPageController *)arg1 ;
-(void)dealloc;
-(void)setExifHasFlippedAxes:(BOOL)arg1 ;
-(void)setScreenToModelScaleFactor:(double)arg1 ;
-(double)screenToModelScaleFactor;
-(CGPoint)guideAlignedPointForPoint:(CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3 ;
-(BOOL)exifHasFlippedAxes;
@end

