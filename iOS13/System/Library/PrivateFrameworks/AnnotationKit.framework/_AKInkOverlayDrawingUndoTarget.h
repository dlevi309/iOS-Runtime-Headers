/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class AKPageController;

@interface _AKInkOverlayDrawingUndoTarget : NSObject {

	AKPageController* _pageController;

}

@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
-(AKPageController *)pageController;
-(void)setPageController:(AKPageController *)arg1 ;
-(id)initWithPageController:(id)arg1 ;
-(void)performUndo:(id)arg1 ;
@end

