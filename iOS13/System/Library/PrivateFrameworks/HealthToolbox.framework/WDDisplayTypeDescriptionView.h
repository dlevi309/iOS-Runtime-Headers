/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
*/

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@class HKDisplayType, UILabel, UITextView, NSString;

@interface WDDisplayTypeDescriptionView : UIView <UITextViewDelegate> {

	HKDisplayType* _displayType;
	unsigned long long _style;
	UILabel* _descriptionHeadingLabel;
	UILabel* _descriptionLabel;
	UITextView* _attributionTextView;
	UILabel* _cautionaryLabel;
	BOOL _showAttributionText;

}

@property (assign,nonatomic) BOOL showAttributionText;              //@synthesize showAttributionText=_showAttributionText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)minimumHeightForStyle:(unsigned long long)arg1 ;
+(id)_metricsForStyle:(unsigned long long)arg1 ;
+(id)_descriptionHeadingFontForStyle:(unsigned long long)arg1 ;
+(id)_descriptionTextFontForStyle:(unsigned long long)arg1 ;
+(id)_attributionTextFontForStyle:(unsigned long long)arg1 ;
+(id)_cautionaryTextFontForStyle:(unsigned long long)arg1 ;
+(id)_descriptionHeadingColorForStyle:(unsigned long long)arg1 ;
+(id)_descriptionTextColorForStyle:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)_updateFont;
-(void)_setupUI;
-(id)initWithDisplayType:(id)arg1 showAttributionText:(BOOL)arg2 style:(unsigned long long)arg3 ;
-(BOOL)showAttributionText;
-(void)setShowAttributionText:(BOOL)arg1 ;
@end

