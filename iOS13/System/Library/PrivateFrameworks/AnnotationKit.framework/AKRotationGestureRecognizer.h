/*
* Generated on Monday, March 1, 2021 at 2:32:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
*/

#import <UIKitCore/UIRotationGestureRecognizer.h>

@class AKController;

@interface AKRotationGestureRecognizer : UIRotationGestureRecognizer {

	unsigned long long tries;
	AKController* _annotationController;

}

@property (assign,nonatomic,__weak) AKController * annotationController;              //@synthesize annotationController=_annotationController - In the implementation block
-(void)setState:(long long)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(AKController *)annotationController;
-(void)setAnnotationController:(AKController *)arg1 ;
@end

