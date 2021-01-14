/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIContentViewConfiguration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIContentViewLabelConfiguration, NSString;

@interface _UIBasicHeaderFooterContentViewConfiguration : NSObject <_UIContentViewConfiguration, NSSecureCoding> {

	struct {
		unsigned hasCustomizedAxesPreservingSuperviewLayoutMargins : 1;
		unsigned hasCustomizedDirectionalLayoutMargins : 1;
	}  _configurationFlags;
	unsigned long long _axesPreservingSuperviewLayoutMargins;
	long long _defaultStyle;
	_UIContentViewLabelConfiguration* _textLabel;
	NSDirectionalEdgeInsets _directionalLayoutMargins;

}

@property (nonatomic,readonly) _UIContentViewLabelConfiguration * textLabel;                       //@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) unsigned long long axesPreservingSuperviewLayoutMargins; 
@property (assign,nonatomic) NSDirectionalEdgeInsets directionalLayoutMargins; 
@property (assign,nonatomic) BOOL resetsVerticalLayoutMargins; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)defaultGroupedHeaderConfiguration;
+(id)defaultGroupedFooterConfiguration;
+(id)defaultHeaderConfiguration;
+(id)defaultFooterConfiguration;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAxesPreservingSuperviewLayoutMargins:(unsigned long long)arg1 ;
-(unsigned long long)axesPreservingSuperviewLayoutMargins;
-(NSString *)description;
-(void)setDirectionalLayoutMargins:(NSDirectionalEdgeInsets)arg1 ;
-(void)setResetsVerticalLayoutMargins:(BOOL)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)updatedConfigurationForState:(unsigned long long)arg1 ;
-(BOOL)resetsVerticalLayoutMargins;
-(_UIContentViewLabelConfiguration *)textLabel;
-(id)updatedConfigurationForState:(unsigned long long)arg1 traitCollection:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)createContentView;
-(void)applyToContentView:(id)arg1 ;
-(NSDirectionalEdgeInsets)directionalLayoutMargins;
-(BOOL)isEqual:(id)arg1 ;
@end

