/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)keysOfInterest;
-(long long)shortNameFormat;
-(BOOL)isEnabled;
-(id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3 ;
-(id)fallbackStyleFormatter;
-(id)orderedKeysOfInterest;
-(id)abbreviatedKeys;
-(id)initWithMasterFormatter:(id)arg1 ;
-(_NSPersonNameComponentsStyleFormatterShortVariantGeneral *)variantFormatter;
-(_NSPersonNameComponentsStyleFormatter *)subFormatter;
-(void)setSubFormatter:(_NSPersonNameComponentsStyleFormatter *)arg1 ;
-(BOOL)forceShortNameEnabled;
-(void)setForceShortNameEnabled:(BOOL)arg1 ;
-(void)setShortNameFormat:(long long)arg1 ;
@end

