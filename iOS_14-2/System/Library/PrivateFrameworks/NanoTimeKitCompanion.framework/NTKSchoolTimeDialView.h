/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDictionary;

@interface NTKSchoolTimeDialView : UIView {

	unsigned long long _activeHour;
	double _ringWidth;
	NSDictionary* _hourLabels;

}
-(void)_setupUI;
-(id)_inactiveHourColor;
-(id)_activeHourColor;
-(id)initWithFrame:(CGRect)arg1 ringWidth:(double)arg2 ;
-(void)setActiveHour:(unsigned long long)arg1 animated:(BOOL)arg2 ;
@end

