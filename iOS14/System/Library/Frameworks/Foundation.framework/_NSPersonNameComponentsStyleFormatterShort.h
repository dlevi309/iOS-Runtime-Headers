/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/_NSPersonNameComponentsStyleFormatter.h>

@class _NSPersonNameComponentsStyleFormatterShortVariantGeneral, _NSPersonNameComponentsStyleFormatter;

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {

	long long _shortNameFormat;
	_NSPersonNameComponentsStyleFormatterShortVariantGeneral* _variantFormatter;
	_NSPersonNameComponentsStyleFormatter* _subFormatter;
	BOOL _forceShortNameEnabled;

}

@property (assign) long long shortNameFormat; 
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral * variantFormatter; 
@property (retain) _NSPersonNameComponentsStyleFormatter * subFormatter; 
@property (assign) BOOL forceShortNameEnabled; 
-(void)setShortNameFormat:(long long)arg1 ;
-(id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3 ;
-(id)fallbackStyleFormatter;
-(long long)shortNameFormat;
-(id)orderedKeysOfInterest;
-(_NSPersonNameComponentsStyleFormatter *)subFormatter;
-(id)keysOfInterest;
-(_NSPersonNameComponentsStyleFormatterShortVariantGeneral *)variantFormatter;
-(BOOL)forceShortNameEnabled;
-(id)initWithMasterFormatter:(id)arg1 ;
-(BOOL)isEnabled;
-(void)setSubFormatter:(_NSPersonNameComponentsStyleFormatter *)arg1 ;
-(id)abbreviatedKeys;
-(void)setForceShortNameEnabled:(BOOL)arg1 ;
-(void)dealloc;
@end

