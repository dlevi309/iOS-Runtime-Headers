/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKViewWithHairline.h>

@interface MKPlaceSectionItemView : MKViewWithHairline {

	BOOL _fullWidthHairline;

}

@property (assign,getter=isHairlineFullWidth,nonatomic) BOOL fullWidthHairline;              //@synthesize fullWidthHairline=_fullWidthHairline - In the implementation block
-(void)layoutMarginsDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setFullWidthHairline:(BOOL)arg1 ;
-(void)infoCardThemeChanged;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateHairlineInsets;
-(BOOL)isHairlineFullWidth;
@end

