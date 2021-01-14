/*
* Generated on Thursday, January 14, 2021 at 2:21:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSMutableData, NSAttributedString, NSFileWrapper, NSMutableDictionary, NSMutableArray, NSDictionary, NSMapTable;

@interface NSRTFWriter : NSObject {

	NSMutableData* _output;
	NSAttributedString* _attrString;
	unsigned long long _attrStringLength;
	NSFileWrapper* _document;
	NSMutableDictionary* _fontNames;
	NSMutableDictionary* _fontObjects;
	NSMutableDictionary* _colors;
	NSMutableArray* _listRanges;
	id _curFont;
	id _curForegroundColor;
	id _curBackgroundColor;
	id _curParagraphStyle;
	id _curKern;
	id _curBaselineOffset;
	id _curSuperscript;
	id _curUnderlineStyle;
	int _curTraits;
	unsigned _curEncoding;
	struct {
		unsigned _forceColorWrite : 1;
		unsigned _activeFontFeatures : 1;
		unsigned _preserveNaturalAlignment : 1;
		unsigned _textScalingNeedsConvert : 1;
		unsigned _wroteCocoaVersion : 1;
		unsigned _reserved : 27;
	}  _rwFlags;
	double _rightMargin;
	NSDictionary* _docAttrs;
	void* _layoutSections;
	NSMapTable* _attachmentData;
	long long _textScalingConversionSource;
	long long _textScalingConversionTarget;

}
+(void)initialize;
-(void)dealloc;
@end

