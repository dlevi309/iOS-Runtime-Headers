/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>
#import <libobjc.A.dylib/HUQuickControlIncrementalConvertibleProfile.h>

@class NSString, HFNumberValueConstraints;

@interface HUQuickControlPushButtonViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {

	BOOL _toggleColorScheme;

}

@property (assign,nonatomic) BOOL toggleColorScheme;                                              //@synthesize toggleColorScheme=_toggleColorScheme - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HFNumberValueConstraints * primaryValueConstraints; 
@property (nonatomic,readonly) HFNumberValueConstraints * secondaryValueConstraints; 
@property (nonatomic,readonly) BOOL hasSecondaryValue; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setToggleColorScheme:(BOOL)arg1 ;
-(HFNumberValueConstraints *)primaryValueConstraints;
-(HFNumberValueConstraints *)secondaryValueConstraints;
-(BOOL)hasSecondaryValue;
-(BOOL)toggleColorScheme;
@end

