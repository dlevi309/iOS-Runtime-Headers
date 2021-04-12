/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>
#import <libobjc.A.dylib/HUQuickControlIncrementalConvertibleProfile.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {

	BOOL _hasSecondaryValue;
	BOOL _hasOffState;
	BOOL _showGrabbers;
	HFNumberValueConstraints* _primaryValueConstraints;
	HFNumberValueConstraints* _secondaryValueConstraints;
	unsigned long long _preferredFillSection;
	unsigned long long _interactionFidelity;

}

@property (assign,nonatomic) BOOL hasOffState;                                                  //@synthesize hasOffState=_hasOffState - In the implementation block
@property (nonatomic,retain) HFNumberValueConstraints * primaryValueConstraints;                //@synthesize primaryValueConstraints=_primaryValueConstraints - In the implementation block
@property (nonatomic,retain) HFNumberValueConstraints * secondaryValueConstraints;              //@synthesize secondaryValueConstraints=_secondaryValueConstraints - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryValue;                                            //@synthesize hasSecondaryValue=_hasSecondaryValue - In the implementation block
@property (assign,nonatomic) BOOL showGrabbers;                                                 //@synthesize showGrabbers=_showGrabbers - In the implementation block
@property (assign,nonatomic) unsigned long long preferredFillSection;                           //@synthesize preferredFillSection=_preferredFillSection - In the implementation block
@property (assign,nonatomic) unsigned long long interactionFidelity;                            //@synthesize interactionFidelity=_interactionFidelity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPrimaryValueConstraints:(HFNumberValueConstraints *)arg1 ;
-(void)setPreferredFillSection:(unsigned long long)arg1 ;
-(void)setHasOffState:(BOOL)arg1 ;
-(void)setHasSecondaryValue:(BOOL)arg1 ;
-(void)setSecondaryValueConstraints:(HFNumberValueConstraints *)arg1 ;
-(BOOL)supportsTouchContinuation;
-(HFNumberValueConstraints *)primaryValueConstraints;
-(HFNumberValueConstraints *)secondaryValueConstraints;
-(BOOL)hasSecondaryValue;
-(void)setInteractionFidelity:(unsigned long long)arg1 ;
-(double)gestureDragCoefficient;
-(BOOL)showGrabbers;
-(void)setShowGrabbers:(BOOL)arg1 ;
-(unsigned long long)preferredFillSection;
-(BOOL)hasOffState;
-(unsigned long long)interactionFidelity;
@end

