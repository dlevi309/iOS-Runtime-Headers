/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class UIColor;

@interface HKDotAnnotationView : MKAnnotationView {

	UIColor* _dotColor;

}

@property (nonatomic,retain) UIColor * dotColor;              //@synthesize dotColor=_dotColor - In the implementation block
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(UIColor *)dotColor;
-(void)setDotColor:(UIColor *)arg1 ;
@end

