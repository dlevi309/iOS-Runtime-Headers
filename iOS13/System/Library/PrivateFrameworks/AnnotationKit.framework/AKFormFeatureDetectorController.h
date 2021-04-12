/*
* Generated on Monday, March 1, 2021 at 2:32:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/AKFormFeatureDetectorDelegate.h>

@class AKController, NSString;

@interface AKFormFeatureDetectorController : NSObject <AKFormFeatureDetectorDelegate> {

	AKController* _controller;

}

@property (__weak) AKController * controller;                       //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setController:(AKController *)arg1 ;
-(AKController *)controller;
-(id)initWithController:(id)arg1 ;
-(CGSize)defaultFeatureSizeForPage:(id)arg1 ;
-(double)maximumFeatureWidthForPage:(id)arg1 ;
-(BOOL)wantsDefaultFeatures;
-(BOOL)detectFormFeatureAtPoint:(CGPoint)arg1 inPageController:(id)arg2 ;
-(id)formFeatureAtPoint:(CGPoint)arg1 inPageController:(id)arg2 ;
-(BOOL)formFeature:(id)arg1 intersectsAnnotationsOnPage:(id)arg2 ;
-(void)createAnnotationWithFeature:(id)arg1 onPageController:(id)arg2 ;
-(id)_convertFont:(id)arg1 toSize:(double)arg2 ;
@end

