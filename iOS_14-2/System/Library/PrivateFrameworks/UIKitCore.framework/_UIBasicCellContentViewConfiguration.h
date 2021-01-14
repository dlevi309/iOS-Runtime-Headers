/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContentViewConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIContentViewEditingConfiguration, _UIContentViewImageViewConfiguration, _UIContentViewLabelConfiguration, NSString;

@interface _UIBasicCellContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding> {

	SCD_Struct_UI62 _configurationFlags;
	unsigned long long _axesPreservingSuperviewLayoutMargins;
	double _imageToTextPadding;
	_UIContentViewEditingConfiguration* _textLabelEditingConfiguration;
	long long _defaultStyle;
	_UIContentViewImageViewConfiguration* _imageView;
	_UIContentViewLabelConfiguration* _textLabel;
	NSDirectionalEdgeInsets _directionalLayoutMargins;

}

@property (nonatomic,readonly) _UIContentViewImageViewConfiguration * imageView;                             //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) _UIContentViewLabelConfiguration * textLabel;                                 //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins; 
@property (assign,nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins; 
@property (assign,nonatomic) double imageToTextPadding; 
@property (nonatomic,copy) _UIContentViewEditingConfiguration * _textLabelEditingConfiguration;              //@synthesize textLabelEditingConfiguration=_textLabelEditingConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultConfiguration;
+(id)defaultOutlineParentCellConfigurationForState:(unsigned long long)arg1 ;
+(id)defaultListCellConfigurationForState:(unsigned long long)arg1 ;
+(id)listCellConfiguration;
+(id)defaultOutlineCellConfigurationForState:(unsigned long long)arg1 ;
+(id)outlineCellConfiguration;
+(id)outlineRootParentCellConfiguration;
-(_UIContentViewImageViewConfiguration *)imageView;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(unsigned long long)axesPreservingSuperviewLayoutMargins;
-(NSString *)description;
-(void)setImageToTextPadding:(double)arg1 ;
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

