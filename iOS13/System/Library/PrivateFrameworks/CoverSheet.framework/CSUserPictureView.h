/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                         //@synthesize legibilityStrength=_legibilityStrength - In the implementation block
+(id)_monogrammerForLegibilitySettings:(id)arg1 diameter:(double)arg2 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(id)presentationRegions;
-(void)_regenerateImage;
@end

