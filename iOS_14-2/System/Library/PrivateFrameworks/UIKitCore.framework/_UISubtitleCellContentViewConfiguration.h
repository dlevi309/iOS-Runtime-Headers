/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContentViewConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIContentViewEditingConfiguration, _UIContentViewImageViewConfiguration, _UIContentViewLabelConfiguration, NSString;

@interface _UISubtitleCellContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding> {

	struct {
		unsigned hasCustomizedAxesPreservingSuperviewLayoutMargins : 1;
		unsigned hasCustomizedDirectionalLayoutMargins : 1;
		unsigned hasCustomizedImageToTextPadding : 1;
		unsigned hasCustomizedTextToSubtitlePadding : 1;
	}  _configurationFlags;
	unsigned long long _axesPreservingSuperviewLayoutMargins;
	double _imageToTextPadding;
	double _textToSubtitlePadding;
	_UIContentViewEditingConfiguration* _textLabelEditingConfiguration;
	long long _defaultStyle;
	_UIContentViewImageViewConfiguration* _imageView;
	_UIContentViewLabelConfiguration* _textLabel;
	_UIContentViewLabelConfiguration* _subtitleLabel;
	NSDirectionalEdgeInsets _directionalLayoutMargins;

}

@property (nonatomic,readonly) _UIContentViewImageViewConfiguration * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) _UIContentViewLabelConfiguration * textLabel;                                 //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,readonly) _UIContentViewLabelConfiguration * subtitleLabel;                             //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins; 
@property (assign,nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins; 
@property (assign,nonatomic) double imageToTextPadding; 
@property (assign,nonatomic) double textToSubtitlePadding; 
@property (nonatomic,copy) _UIContentViewEditingConfiguration * _textLabelEditingConfiguration;              //@synthesize textLabelEditingConfiguration=_textLabelEditingConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)defaultListCellConfigurationForState:(unsigned long long)arg1 ;
+(id)listCellConfiguration;
+(id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1 ;
+(id)outlineCellConfiguration;
-(_UIContentViewImageViewConfiguration *)imageView;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(unsigned long long)axesPreservingSuperviewLayoutMargins;
-(_UIContentViewLabelConfiguration *)subtitleLabel;
-(NSString *)description;
-(void)setImageToTextPadding:(double)arg1 ;
-(double)textToSubtitlePadding;
-(void)setTextToSubtitlePadding:(double)arg1 ;
-(double)imageToTextPadding;
-(_UIContentViewEditingConfiguration *)_textLabelEditingConfiguration;
-(void)set_textLabelEditingConfiguration:(_UIContentViewEditingConfiguration *)arg1 ;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)updatedConfigurationForState:(unsigned long long)arg1 ;
-(_UIContentViewLabelConfiguration *)textLabel;
-(id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)createContentView;
-(void)applyToContentView:(id)arg1 ;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
-(BOOL)isEqual:(id)arg1 ;
@end

