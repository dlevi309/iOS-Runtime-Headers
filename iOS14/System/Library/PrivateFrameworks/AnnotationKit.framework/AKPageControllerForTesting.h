/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKPageController.h>

@class AKController, AKPageModelController, AKLayerPresentationManager, AKGeometryHelper, UIView;

@interface AKPageControllerForTesting : AKPageController {

	AKController* _testingController;
	unsigned long long _testingPageIndex;
	AKPageModelController* _testingPageModelController;
	AKLayerPresentationManager* _testingLayerPresentationManager;
	AKGeometryHelper* _testingGeometryHelper;
	UIView* _testingOverlayView;

}

@property (retain) AKController * testingController;                                          //@synthesize testingController=_testingController - In the implementation block
@property (assign) unsigned long long testingPageIndex;                                       //@synthesize testingPageIndex=_testingPageIndex - In the implementation block
@property (retain) AKPageModelController * testingPageModelController;                        //@synthesize testingPageModelController=_testingPageModelController - In the implementation block
@property (retain) AKLayerPresentationManager * testingLayerPresentationManager;              //@synthesize testingLayerPresentationManager=_testingLayerPresentationManager - In the implementation block
@property (retain) AKGeometryHelper * testingGeometryHelper;                                  //@synthesize testingGeometryHelper=_testingGeometryHelper - In the implementation block
@property (retain) UIView * testingOverlayView;                                               //@synthesize testingOverlayView=_testingOverlayView - In the implementation block
-(id)init;
-(id)overlayView;
-(unsigned long long)pageIndex;
-(id)controller;
-(double)modelBaseScaleFactor;
-(id)geometryHelper;
-(id)pageModelController;
-(id)layerPresentationManager;
-(CGRect)maxPageRect;
-(CGPoint)convertPointFromOverlayToModel:(CGPoint)arg1 ;
-(CGRect)convertRectFromOverlayToModel:(CGRect)arg1 ;
-(CGRect)convertRectFromModelToOverlay:(CGRect)arg1 ;
-(CGPoint)convertPointFromModelToOverlay:(CGPoint)arg1 ;
-(UIView *)testingOverlayView;
-(void)setTestingOverlayView:(UIView *)arg1 ;
-(AKController *)testingController;
-(unsigned long long)testingPageIndex;
-(AKPageModelController *)testingPageModelController;
-(AKLayerPresentationManager *)testingLayerPresentationManager;
-(AKGeometryHelper *)testingGeometryHelper;
-(void)setTestingController:(AKController *)arg1 ;
-(void)setTestingPageIndex:(unsigned long long)arg1 ;
-(void)setTestingPageModelController:(AKPageModelController *)arg1 ;
-(void)setTestingLayerPresentationManager:(AKLayerPresentationManager *)arg1 ;
-(void)setTestingGeometryHelper:(AKGeometryHelper *)arg1 ;
@end

