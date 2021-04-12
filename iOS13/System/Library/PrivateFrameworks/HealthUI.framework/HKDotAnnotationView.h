/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class UIColor;

@interface HKDotAnnotationView : MKAnnotationView {

	UIColor* _dotColor;

}

@property (nonatomic,retain) UIColor * dotColor;              //@synthesize dotColor=_dotColor - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDotColor:(UIColor *)arg1 ;
-(UIColor *)dotColor;
@end

