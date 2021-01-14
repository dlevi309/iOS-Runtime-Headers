/*
* Generated on Thursday, January 14, 2021 at 2:27:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithController:(id)arg1 ;
-(AKController *)controller;
-(CGSize)defaultFeatureSizeForPage:(id)arg1 ;
-(double)maximumFeatureWidthForPage:(id)arg1 ;
-(BOOL)wantsDefaultFeatures;
-(BOOL)detectFormFeatureAtPoint:(CGPoint)arg1 inPageController:(id)arg2 ;
-(id)formFeatureAtPoint:(CGPoint)arg1 inPageController:(id)arg2 ;
-(BOOL)formFeature:(id)arg1 intersectsAnnotationsOnPage:(id)arg2 ;
-(void)createAnnotationWithFeature:(id)arg1 onPageController:(id)arg2 ;
-(id)_convertFont:(id)arg1 toSize:(double)arg2 ;
@end

