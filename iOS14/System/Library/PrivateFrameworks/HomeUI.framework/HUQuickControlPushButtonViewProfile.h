/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>
#import <libobjc.A.dylib/HUQuickControlIncrementalConvertibleProfile.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlPushButtonViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {

	BOOL _toggleColorScheme;

}

@property (assign,nonatomic) BOOL toggleColorScheme;                                              //@synthesize toggleColorScheme=_toggleColorScheme - In the implementation block
@property (nonatomic,readonly) HFNumberValueConstraints * primaryValueConstraints; 
@property (nonatomic,readonly) HFNumberValueConstraints * secondaryValueConstraints; 
@property (nonatomic,readonly) BOOL hasSecondaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setToggleColorScheme:(BOOL)arg1 ;
-(HFNumberValueConstraints *)primaryValueConstraints;
-(HFNumberValueConstraints *)secondaryValueConstraints;
-(BOOL)hasSecondaryValue;
-(BOOL)toggleColorScheme;
@end

