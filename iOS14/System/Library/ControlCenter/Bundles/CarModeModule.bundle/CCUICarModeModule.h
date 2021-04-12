/*
* Generated on Thursday, January 14, 2021 at 2:29:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/CarModeModule.bundle/CarModeModule
*/

#import <ControlCenterUIKit/CCUIToggleModule.h>

@class CARAutomaticDNDStatus;

@interface CCUICarModeModule : CCUIToggleModule {

	CARAutomaticDNDStatus* _carDNDStatus;
	BOOL _isSelected;
	BOOL _carModeActive;

}
+(id)statusOnString;
+(id)statusOffString;
-(id)init;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(id)selectedColor;
-(id)iconGlyph;
-(void)_updateState:(BOOL)arg1 ;
-(void)_toggleState:(BOOL)arg1 ;
@end

