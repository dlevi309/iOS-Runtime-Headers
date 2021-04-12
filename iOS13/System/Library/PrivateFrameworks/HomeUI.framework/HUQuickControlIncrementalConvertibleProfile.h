/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

@class HFNumberValueConstraints;


@protocol HUQuickControlIncrementalConvertibleProfile <NSObject>
@property (nonatomic,readonly) HFNumberValueConstraints * primaryValueConstraints; 
@property (nonatomic,readonly) HFNumberValueConstraints * secondaryValueConstraints; 
@property (nonatomic,readonly) BOOL hasSecondaryValue; 
@required
-(HFNumberValueConstraints *)primaryValueConstraints;
-(HFNumberValueConstraints *)secondaryValueConstraints;
-(BOOL)hasSecondaryValue;

@end

