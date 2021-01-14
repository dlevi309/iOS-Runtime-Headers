/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewBase.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, CNContact, _UILegibilityView, NSString;

@interface CSUserPictureView : CSCoverSheetViewBase <SBUILegibility> {

	CNContact* _contact;
	_UILegibilityView* _monogramLegibilityView;
	double _legibilityStrength;
	_UILegibilitySettings* _legibilitySettings;
	double _diameter;

}

@property (nonatomic,copy) CNContact * contact;                                       //@synthesize contact=_contact - In the implementation block
@property (assign,nonatomic) double diameter;                                         //@synthesize diameter=_diameter - In the implementation block
@property (assign,nonatomic) double strength;                                         //@synthesize legibilityStrength=_legibilityStrength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2 ;
-(double)strength;
-(CNContact *)contact;
-(void)setStrength:(double)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
-(id)presentationRegions;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)layoutSubviews;
-(double)diameter;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setDiameter:(double)arg1 ;
-(void)_regenerateImage;
@end

