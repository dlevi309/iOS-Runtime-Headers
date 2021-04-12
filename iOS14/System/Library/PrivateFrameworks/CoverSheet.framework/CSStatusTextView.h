/*
* Generated on Thursday, January 14, 2021 at 2:26:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
*/

#import <CoverSheet/CoverSheet-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, SBUILegibilityLabel, NSString, NSArray;

@interface CSStatusTextView : UIView <SBUILegibility> {

	_UILegibilitySettings* _legibilitySettings;
	double _strength;
	SBUILegibilityLabel* _internalLegalTextLabel;
	SBUILegibilityLabel* _deviceInformationLabel;
	SBUILegibilityLabel* _supervisionLabel;
	SBUILegibilityLabel* _provisionalEnrollmentLabel;
	unsigned long long _transactionCount;
	NSString* _internalLegalText;
	NSString* _supervisionText;
	NSArray* _deviceInformationText;
	NSString* _provisionalEnrollmentText;

}

@property (nonatomic,copy) NSString * internalLegalText;                              //@synthesize internalLegalText=_internalLegalText - In the implementation block
@property (nonatomic,copy) NSString * supervisionText;                                //@synthesize supervisionText=_supervisionText - In the implementation block
@property (nonatomic,copy) NSArray * deviceInformationText;                           //@synthesize deviceInformationText=_deviceInformationText - In the implementation block
@property (nonatomic,copy) NSString * provisionalEnrollmentText;                      //@synthesize provisionalEnrollmentText=_provisionalEnrollmentText - In the implementation block
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)strength;
-(id)_font;
-(void)setStrength:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateTextsWithBlock:(/*^block*/id)arg1 ;
-(void)_updateLegibilityStrength;
-(double)_nonLegalLabelFontLeading;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)_updateProvisionalEnrollmentLabel;
-(NSString *)internalLegalText;
-(void)setProvisionalEnrollmentText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(void)_updateInternalLegalLabel;
-(void)setInternalLegalText:(NSString *)arg1 ;
-(void)_updateTextViewsIfNecessary;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_lineHeightOfNonLegalLabels;
-(void)setSupervisionText:(NSString *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_updateSupervisionLabel;
-(double)_nonLegalTextParagraphSpacing;
-(double)_spacingBetweenNonLegalLabels;
-(void)setDeviceInformationText:(NSArray *)arg1 ;
-(NSString *)supervisionText;
-(void)_updateDeviceInformationLabel;
-(id)_largeFont;
-(NSArray *)deviceInformationText;
-(NSString *)provisionalEnrollmentText;
-(void)_updateTextViews;
@end

