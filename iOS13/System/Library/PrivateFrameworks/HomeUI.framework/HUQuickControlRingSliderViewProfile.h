/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>
#import <libobjc.A.dylib/HUQuickControlIncrementalConvertibleProfile.h>

@class HFNumberValueConstraints, NSArray, NSString;

@interface HUQuickControlRingSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {

	BOOL _hasSecondaryValue;
	BOOL _isHandleViewVisible;
	BOOL _hasOffState;
	BOOL _shouldShowSupplementaryValue;
	unsigned long long _handleViewStyle;
	HFNumberValueConstraints* _primaryValueConstraints;
	HFNumberValueConstraints* _secondaryValueConstraints;
	unsigned long long _style;
	NSArray* _gradationMarkingValues;
	unsigned long long _gradationMarkingViewStyle;

}

@property (assign,nonatomic) BOOL isHandleViewVisible;                                          //@synthesize isHandleViewVisible=_isHandleViewVisible - In the implementation block
@property (assign,nonatomic) unsigned long long handleViewStyle;                                //@synthesize handleViewStyle=_handleViewStyle - In the implementation block
@property (assign,nonatomic) BOOL hasOffState;                                                  //@synthesize hasOffState=_hasOffState - In the implementation block
@property (nonatomic,retain) HFNumberValueConstraints * primaryValueConstraints;                //@synthesize primaryValueConstraints=_primaryValueConstraints - In the implementation block
@property (nonatomic,retain) HFNumberValueConstraints * secondaryValueConstraints;              //@synthesize secondaryValueConstraints=_secondaryValueConstraints - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryValue;                                            //@synthesize hasSecondaryValue=_hasSecondaryValue - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) BOOL shouldShowSupplementaryValue;                                 //@synthesize shouldShowSupplementaryValue=_shouldShowSupplementaryValue - In the implementation block
@property (nonatomic,retain) NSArray * gradationMarkingValues;                                  //@synthesize gradationMarkingValues=_gradationMarkingValues - In the implementation block
@property (assign,nonatomic) unsigned long long gradationMarkingViewStyle;                      //@synthesize gradationMarkingViewStyle=_gradationMarkingViewStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setPrimaryValueConstraints:(HFNumberValueConstraints *)arg1 ;
-(void)setHasOffState:(BOOL)arg1 ;
-(void)setIsHandleViewVisible:(BOOL)arg1 ;
-(void)setHandleViewStyle:(unsigned long long)arg1 ;
-(void)setHasSecondaryValue:(BOOL)arg1 ;
-(void)setSecondaryValueConstraints:(HFNumberValueConstraints *)arg1 ;
-(NSArray *)gradationMarkingValues;
-(void)setGradationMarkingValues:(NSArray *)arg1 ;
-(void)setGradationMarkingViewStyle:(unsigned long long)arg1 ;
-(void)setShouldShowSupplementaryValue:(BOOL)arg1 ;
-(HFNumberValueConstraints *)primaryValueConstraints;
-(HFNumberValueConstraints *)secondaryValueConstraints;
-(unsigned long long)handleViewStyle;
-(BOOL)hasSecondaryValue;
-(BOOL)isHandleViewVisible;
-(unsigned long long)gradationMarkingViewStyle;
-(BOOL)shouldShowSupplementaryValue;
-(BOOL)hasOffState;
@end
