/*
* Generated on Thursday, January 14, 2021 at 2:26:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class CHTextInputTarget, NSString, NSIndexSet;

@interface CHTextInputTargetContentInfo : NSObject <NSMutableCopying> {

	CHTextInputTarget* _textInputTarget;
	long long _textContentLength;
	NSString* _referenceSubstring;
	NSRange _referenceSubstringRange;
	CGRect* _characterRectsInReferenceSubstring;
	NSRange _strokeCoveredTextRange;
	NSRange _selectedTextRange;
	BOOL _isCursorStrong;
	BOOL _containsCommittedStrokes;
	NSRange _activePreviewRange;
	int _contentType;
	int _autoCapitalizationMode;
	BOOL _isSingleLine;
	BOOL _supportsAutoLineBreaks;
	long long _lastCharacterLevelPosition;
	NSIndexSet* _protectedCharacterIndexes;

}

@property (nonatomic,retain,readonly) CHTextInputTarget * textInputTarget;               //@synthesize textInputTarget=_textInputTarget - In the implementation block
@property (nonatomic,readonly) long long textContentLength;                              //@synthesize textContentLength=_textContentLength - In the implementation block
@property (nonatomic,copy,readonly) NSString * referenceSubstring;                       //@synthesize referenceSubstring=_referenceSubstring - In the implementation block
@property (nonatomic,readonly) NSRange referenceSubstringRange;                          //@synthesize referenceSubstringRange=_referenceSubstringRange - In the implementation block
@property (nonatomic,readonly) NSRange strokeCoveredTextRange;                           //@synthesize strokeCoveredTextRange=_strokeCoveredTextRange - In the implementation block
@property (nonatomic,readonly) NSRange selectedTextRange;                                //@synthesize selectedTextRange=_selectedTextRange - In the implementation block
@property (nonatomic,readonly) BOOL isCursorStrong;                                      //@synthesize isCursorStrong=_isCursorStrong - In the implementation block
@property (nonatomic,readonly) BOOL containsCommittedStrokes;                            //@synthesize containsCommittedStrokes=_containsCommittedStrokes - In the implementation block
@property (nonatomic,readonly) NSRange activePreviewRange;                               //@synthesize activePreviewRange=_activePreviewRange - In the implementation block
@property (nonatomic,readonly) int contentType;                                          //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) int autoCapitalizationMode;                               //@synthesize autoCapitalizationMode=_autoCapitalizationMode - In the implementation block
@property (nonatomic,readonly) BOOL isSingleLine;                                        //@synthesize isSingleLine=_isSingleLine - In the implementation block
@property (nonatomic,readonly) BOOL supportsAutoLineBreaks;                              //@synthesize supportsAutoLineBreaks=_supportsAutoLineBreaks - In the implementation block
@property (nonatomic,readonly) long long lastCharacterLevelPosition;                     //@synthesize lastCharacterLevelPosition=_lastCharacterLevelPosition - In the implementation block
@property (nonatomic,readonly) CGRect* characterRectsInReferenceSubstring;               //@synthesize characterRectsInReferenceSubstring=_characterRectsInReferenceSubstring - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * protectedCharacterIndexes;              //@synthesize protectedCharacterIndexes=_protectedCharacterIndexes - In the implementation block
-(NSRange)selectedTextRange;
-(int)contentType;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isSingleLine;
-(void)dealloc;
-(CHTextInputTarget *)textInputTarget;
-(NSRange)activePreviewRange;
-(BOOL)supportsAutoLineBreaks;
-(NSRange)strokeCoveredTextRange;
-(long long)textContentLength;
-(NSString *)referenceSubstring;
-(NSRange)referenceSubstringRange;
-(long long)lastCharacterLevelPosition;
-(NSIndexSet *)protectedCharacterIndexes;
-(int)autoCapitalizationMode;
-(BOOL)isCursorStrong;
-(BOOL)containsCommittedStrokes;
-(CGRect*)characterRectsInReferenceSubstring;
-(id)_initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(NSRange)arg4 charRectsInReferenceSubstring:(CGRect*)arg5 strokeCoveredTextRange:(NSRange)arg6 selectedTextRange:(NSRange)arg7 isCursorStrong:(BOOL)arg8 activePreviewRange:(NSRange)arg9 contentType:(int)arg10 autoCapitalizationMode:(int)arg11 isSingleLine:(BOOL)arg12 lastCharacterLevelPosition:(long long)arg13 protectedCharacterIndexes:(id)arg14 ;
-(id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(NSRange)arg4 charRectsInReferenceSubstring:(CGRect*)arg5 strokeCoveredTextRange:(NSRange)arg6 selectedTextRange:(NSRange)arg7 isCursorStrong:(BOOL)arg8 activePreviewRange:(NSRange)arg9 contentType:(int)arg10 isSingleLine:(BOOL)arg11 lastCharacterLevelPosition:(long long)arg12 ;
-(CGRect)characterRectForCharacterIndex:(long long)arg1 ;
-(void)enumerateCharacterRectsInRange:(NSRange)arg1 reverse:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)enumerateCharacterRectsInRange:(NSRange)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(NSRange)arg4 charRectsInReferenceSubstring:(CGRect*)arg5 strokeCoveredTextRange:(NSRange)arg6 selectedTextRange:(NSRange)arg7 isCursorStrong:(BOOL)arg8 activePreviewRange:(NSRange)arg9 contentType:(int)arg10 autoCapitalizationMode:(int)arg11 isSingleLine:(BOOL)arg12 lastCharacterLevelPosition:(long long)arg13 ;
-(id)initWithTextInputTarget:(id)arg1 contentLength:(long long)arg2 referenceSubstring:(id)arg3 referenceSubstringRange:(NSRange)arg4 charRectsInReferenceSubstring:(CGRect*)arg5 strokeCoveredTextRange:(NSRange)arg6 selectedTextRange:(NSRange)arg7 activePreviewRange:(NSRange)arg8 contentType:(int)arg9 lastCharacterLevelPosition:(long long)arg10 ;
-(long long)absoluteLocationFromRelativeLocation:(long long)arg1 ;
-(long long)relativeLocationFromAbsoluteLocation:(long long)arg1 ;
-(CGRect)visualCharacterRectForCharacterIndex:(long long)arg1 ;
-(id)referenceSubstringInRange:(NSRange)arg1 ;
-(NSRange)referenceSubstringRangeOfComposedCharacterAtIndex:(long long)arg1 ;
-(CGRect)unionCharacterRects;
@end
