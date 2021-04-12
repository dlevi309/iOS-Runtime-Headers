/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUIconSwitchCell.h>

@interface HUAvailableTriggerItemSwitchCell : HUIconSwitchCell {

	BOOL _switchHidden;
	double _reservedSwitchWidth;

}

@property (assign,nonatomic) double reservedSwitchWidth;                           //@synthesize reservedSwitchWidth=_reservedSwitchWidth - In the implementation block
@property (assign,getter=switchIsHidden,nonatomic) BOOL switchHidden;              //@synthesize switchHidden=_switchHidden - In the implementation block
-(void)updateConstraints;
-(void)setReservedSwitchWidth:(double)arg1 ;
-(double)reservedSwitchWidth;
-(void)setSwitchHidden:(BOOL)arg1 ;
-(BOOL)switchIsHidden;
@end

