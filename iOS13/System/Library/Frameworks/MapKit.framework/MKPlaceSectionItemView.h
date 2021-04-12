/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKViewWithHairline.h>

@interface MKPlaceSectionItemView : MKViewWithHairline {

	BOOL _fullWidthHairline;

}

@property (assign,getter=isHairlineFullWidth,nonatomic) BOOL fullWidthHairline;              //@synthesize fullWidthHairline=_fullWidthHairline - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutMarginsDidChange;
-(void)didMoveToWindow;
-(void)infoCardThemeChanged;
-(void)setFullWidthHairline:(BOOL)arg1 ;
-(void)_updateHairlineInsets;
-(BOOL)isHairlineFullWidth;
@end

