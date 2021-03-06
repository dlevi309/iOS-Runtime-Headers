/*
* Generated on Monday, March 1, 2021 at 2:34:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)_updateState:(BOOL)arg1 ;
-(id)selectedColor;
-(id)iconGlyph;
-(void)_toggleState:(BOOL)arg1 ;
@end

