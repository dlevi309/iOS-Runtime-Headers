/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(id)initWithPageController:(id)arg1 ;
-(void)setExifHasFlippedAxes:(BOOL)arg1 ;
-(void)setScreenToModelScaleFactor:(double)arg1 ;
-(double)screenToModelScaleFactor;
-(CGPoint)guideAlignedPointForPoint:(CGPoint)arg1 withEvent:(id)arg2 orRecognizer:(id)arg3 ;
-(BOOL)exifHasFlippedAxes;
@end

