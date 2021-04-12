/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_MKMotionEffectDelegate.h>

@class MKAnnotationView;

@interface MKCalloutView : UIView <_MKMotionEffectDelegate> {

	BOOL _parallaxEnabled;
	MKAnnotationView* _annotationView;

}

@property (nonatomic,__weak,readonly) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
@property (nonatomic,readonly) long long anchorPosition; 
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,readonly) BOOL hasPendingVisibility; 
@property (assign,nonatomic) BOOL parallaxEnabled;                                    //@synthesize parallaxEnabled=_parallaxEnabled - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(MKAnnotationView *)annotationView;
-(id)initWithAnnotationView:(id)arg1 ;
-(long long)anchorPosition;
-(void)motionEffectDidUpdate:(id)arg1 ;
-(BOOL)hasPendingVisibility;
-(void)showAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dismissAnimated:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)parallaxEnabled;
-(void)setParallaxEnabled:(BOOL)arg1 ;
@end

