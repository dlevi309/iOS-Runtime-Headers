/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIContentConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIListContentImageProperties, UIListContentTextProperties, UIImage, NSString, NSAttributedString;

@interface UIListContentConfiguration : NSObject <UIContentConfiguration, NSSecureCoding> {

	struct {
		unsigned hasCustomizedAxesPreservingSuperviewLayoutMargins : 1;
		unsigned hasCustomizedDirectionalLayoutMargins : 1;
		unsigned hasCustomizedPrefersSideBySideTextAndSecondaryText : 1;
		unsigned hasCustomizedImageToTextPadding : 1;
		unsigned hasCustomizedTextToSecondaryTextHorizontalPadding : 1;
		unsigned hasCustomizedTextToSecondaryTextVerticalPadding : 1;
	}  _configurationFlags;
	BOOL _prefersSideBySideTextAndSecondaryText;
	unsigned long long _axesPreservingSuperviewLayoutMargins;
	double _imageToTextPadding;
	double _textToSecondaryTextHorizontalPadding;
	double _textToSecondaryTextVerticalPadding;
	long long _defaultStyle;
	UIListContentImageProperties* _imageProperties;
	UIListContentTextProperties* _textProperties;
	UIListContentTextProperties* _secondaryTextProperties;
	NSDirectionalEdgeInsets _directionalLayoutMargins;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,readonly) UIListContentImageProperties * imageProperties;                     //@synthesize imageProperties=_imageProperties - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSAttributedString * attributedText; 
@property (nonatomic,readonly) UIListContentTextProperties * textProperties;                       //@synthesize textProperties=_textProperties - In the implementation block
@property (nonatomic,copy) NSString * secondaryText; 
@property (nonatomic,copy) NSAttributedString * secondaryAttributedText; 
@property (nonatomic,readonly) UIListContentTextProperties * secondaryTextProperties;              //@synthesize secondaryTextProperties=_secondaryTextProperties - In the implementation block
@property (assign,nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins; 
@property (assign,nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins; 
@property (assign,nonatomic) BOOL prefersSideBySideTextAndSecondaryText; 
@property (assign,nonatomic) double imageToTextPadding; 
@property (assign,nonatomic) double textToSecondaryTextHorizontalPadding; 
@property (assign,nonatomic) double textToSecondaryTextVerticalPadding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)cellConfiguration;
+(id)plainHeaderConfiguration;
+(id)groupedHeaderConfiguration;
+(id)sidebarHeaderConfiguration;
+(id)accompaniedSidebarCellConfiguration;
+(id)sidebarCellConfiguration;
+(id)subtitleCellConfiguration;
+(id)valueCellConfiguration;
+(id)plainFooterConfiguration;
+(id)groupedFooterConfiguration;
+(id)sidebarSubtitleCellConfiguration;
+(id)accompaniedSidebarSubtitleCellConfiguration;
-(NSAttributedString *)attributedText;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(UIImage *)image;
-(unsigned long long)axesPreservingSuperviewLayoutMargins;
-(NSString *)description;
-(id)makeContentView;
-(void)setImageToTextPadding:(double)arg1 ;
-(double)imageToTextPadding;
-(NSString *)text;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(UIListContentTextProperties *)textProperties;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)updatedConfigurationForState:(id)arg1 ;
-(void)setSecondaryText:(NSString *)arg1 ;
-(UIListContentTextProperties *)secondaryTextProperties;
-(NSString *)secondaryText;
-(void)setSecondaryAttributedText:(NSAttributedString *)arg1 ;
-(NSAttributedString *)secondaryAttributedText;
-(void)setPrefersSideBySideTextAndSecondaryText:(BOOL)arg1 ;
-(BOOL)prefersSideBySideTextAndSecondaryText;
-(void)_setSwiftBridgingTextProperties:(id)arg1 ;
-(void)setTextToSecondaryTextHorizontalPadding:(double)arg1 ;
-(double)textToSecondaryTextHorizontalPadding;
-(void)_setSwiftBridgingImageProperties:(id)arg1 ;
-(void)setTextToSecondaryTextVerticalPadding:(double)arg1 ;
-(double)textToSecondaryTextVerticalPadding;
-(void)_setSwiftBridgingSecondaryTextProperties:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
-(BOOL)isEqual:(id)arg1 ;
-(UIListContentImageProperties *)imageProperties;
@end

