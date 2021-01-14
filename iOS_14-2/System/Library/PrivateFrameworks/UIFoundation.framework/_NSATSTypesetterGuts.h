/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSLineFragment, NSATSGlyphStorage;

@interface _NSATSTypesetterGuts : NSObject {

	NSATSLineFragment* _lineFragment;
	NSATSGlyphStorage* _glyphStorage;
	unsigned long long _lastGlyphIndex;
	unsigned long long _lastContainerIndex;
	SCD_Struct_NS6* _typesetterAuxiliary;
	/*function pointer*/void** _lineFragmentRectArgs;
	char* _bidiLevels;
	double _defaultTighteningFactor;
	unsigned long long _lineBreakStrategy;
	BOOL _isBusy;
	struct {
		unsigned _isiChatTypesetter : 1;
		unsigned _resToWillSetLineFragmentRect : 1;
		unsigned _limitsLayoutForSuspiciousContents : 1;
		unsigned _baselineRendering : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _reserved : 27;
	}  _flags;
	SCD_Struct_NS7 _paragraphState;
	CTTypesetterRef _ctTypesetter;

}
-(void)finalize;
-(void)dealloc;
@end

