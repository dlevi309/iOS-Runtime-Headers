/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIRotationGestureRecognizer.h>

@class AKController;

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer {

	unsigned long long tries;
	AKController* _annotationController;

}

@property (assign,nonatomic,__weak) AKController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
-(void)setAnnotationController:(AKController *)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)setState:(long long)arg1 ;
-(AKController *)annotationController;
@end

