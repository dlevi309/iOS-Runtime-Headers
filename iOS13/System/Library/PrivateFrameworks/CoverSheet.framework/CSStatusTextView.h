/*
* Generated on Monday, March 1, 2021 at 2:33:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
-(id)_font;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)_updateLegibilityStrength;
-(void)updateTextsWithBlock:(/*^block*/id)arg1 ;
-(void)setDeviceInformationText:(NSArray *)arg1 ;
-(void)setSupervisionText:(NSString *)arg1 ;
-(void)setProvisionalEnrollmentText:(NSString *)arg1 ;
-(void)setInternalLegalText:(NSString *)arg1 ;
-(void)_updateTextViewsIfNecessary;
-(double)_spacingBetweenNonLegalLabels;
-(void)_updateTextViews;
-(void)_updateInternalLegalLabel;
-(void)_updateSupervisionLabel;
-(void)_updateProvisionalEnrollmentLabel;
-(void)_updateDeviceInformationLabel;
-(double)_nonLegalLabelFontLeading;
-(id)_largeFont;
-(double)_nonLegalTextParagraphSpacing;
-(double)_lineHeightOfNonLegalLabels;
-(NSString *)internalLegalText;
-(NSString *)supervisionText;
-(NSArray *)deviceInformationText;
-(NSString *)provisionalEnrollmentText;
@end

