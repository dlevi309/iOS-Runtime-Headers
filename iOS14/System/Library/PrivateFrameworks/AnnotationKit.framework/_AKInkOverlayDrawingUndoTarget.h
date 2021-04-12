/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/


@class AKPageController;

@interface _AKInkOverlayDrawingUndoTarget : NSObject {

	AKPageController* _pageController;

}

@property (__weak) AKPageController * pageController;              //@synthesize pageController=_pageController - In the implementation block
-(AKPageController *)pageController;
-(id)initWithPageController:(id)arg1 ;
-(void)performUndo:(id)arg1 ;
-(void)setPageController:(AKPageController *)arg1 ;
@end

