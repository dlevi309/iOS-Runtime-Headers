/*
* Generated on Thursday, January 14, 2021 at 2:20:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UITextAttributeDefaultCategories.h>

@protocol _UITextAttributeDefaultCategories <NSObject>
@property (nonatomic,readonly) id<_UITextAttributeDefaults> _generic; 
@property (nonatomic,readonly) id<_UITextAttributeDefaults> _label; 
@property (nonatomic,readonly) id<_UITextAttributeDefaults> _textField; 
@property (nonatomic,readonly) id<_UITextAttributeDefaults> _textView; 
@required
-(id<_UITextAttributeDefaults>)_label;
-(id<_UITextAttributeDefaults>)_generic;
-(id<_UITextAttributeDefaults>)_textView;
-(id<_UITextAttributeDefaults>)_textField;

@end

#import <UIKitCore/_UITextAttributeDefaultFontSizes.h>

@class _UITextAttributeDefaults, NSString;

@interface _UITextAttributeDefaultCategories : NSObject <_UITextAttributeDefaultCategories, _UITextAttributeDefaultFontSizes> {

	_UITextAttributeDefaults* _generic;
	_UITextAttributeDefaults* _label;
	_UITextAttributeDefaults* _textField;
	_UITextAttributeDefaults* _textView;
	double _labelFontSize;
	double _buttonFontSize;
	double _systemFontSize;
	double _smallSystemFontSize;

}

@property (nonatomic,readonly) id<_UITextAttributeDefaults> _generic;                //@synthesize generic=_generic - In the implementation block
@property (nonatomic,readonly) id<_UITextAttributeDefaults> _label;                  //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) id<_UITextAttributeDefaults> _textField;              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) id<_UITextAttributeDefaults> _textView;               //@synthesize textView=_textView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double _labelFontSize;                                //@synthesize labelFontSize=_labelFontSize - In the implementation block
@property (nonatomic,readonly) double _buttonFontSize;                               //@synthesize buttonFontSize=_buttonFontSize - In the implementation block
@property (nonatomic,readonly) double _systemFontSize;                               //@synthesize systemFontSize=_systemFontSize - In the implementation block
@property (nonatomic,readonly) double _smallSystemFontSize;                          //@synthesize smallSystemFontSize=_smallSystemFontSize - In the implementation block
-(id<_UITextAttributeDefaults>)_label;
-(id)_genericDefaults:(long long)arg1 ;
-(double)_systemFontSize;
-(id<_UITextAttributeDefaults>)_generic;
-(NSString *)description;
-(id)_textFieldDefaults:(long long)arg1 ;
-(id)_labelDefaults:(long long)arg1 ;
-(double)_labelFontSize;
-(id)initWithUserInterfaceIdiom:(long long)arg1 ;
-(double)_buttonFontSize;
-(id<_UITextAttributeDefaults>)_textView;
-(id<_UITextAttributeDefaults>)_textField;
-(double)_smallSystemFontSize;
@end

