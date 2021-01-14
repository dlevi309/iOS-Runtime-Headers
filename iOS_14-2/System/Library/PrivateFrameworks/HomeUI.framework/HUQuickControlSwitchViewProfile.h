/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HUQuickControlViewProfile.h>
#import <libobjc.A.dylib/HUQuickControlIncrementalConvertibleProfile.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlSwitchViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>

@property (nonatomic,readonly) HFNumberValueConstraints * primaryValueConstraints; 
@property (nonatomic,readonly) HFNumberValueConstraints * secondaryValueConstraints; 
@property (nonatomic,readonly) BOOL hasSecondaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)supportsTouchContinuation;
-(HFNumberValueConstraints *)primaryValueConstraints;
-(HFNumberValueConstraints *)secondaryValueConstraints;
-(BOOL)hasSecondaryValue;
-(double)gestureDragCoefficient;
@end

